#include <iostream>
#include <vector>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdexcept>
#include <string>


using namespace std;

const int leitura_invalida = -7777;
const int mes_invalido = -1;
const int min_improvavel = -200;
const int max_improvavel = 200;




struct Dia {
    vector<double> hora;
    Dia();  // inicializa horas como "não é uma leitura"
};

Dia::Dia()
    :hora(24)
{
    for (int i = 0; i < hora.size(); ++i) hora[i] = leitura_invalida;
}

struct Mes {    // um mês de leituras de temperaturas
    int mes;            // [0:11] janeiro é 0
    vector<Dia> dia;    // [1:31] um vetor de leituras por dia
    Mes()               // no máximo 31 dias em mês (dia[0] desperdiçado)
           :mes(mes_invalido), dia(32) {}
};

struct Ano {    // um ano de leituras de temperaturas, organizadas por mês
    int ano;            // positivo == A.D.
    vector<Mes> mes;    // [0:11] janeiro é 0
    Ano():mes(12) {}    // 12 meses em um ano
};


struct Leitura {
    int dia;
    int hora;
    double temperatura;
};

void error(string s);
void error(string s, int n);
void error(string s, string n);
void end_of_loop(istream& ist, char term, const string& message);
void init_tab_entrada(vector<string>& tab);
int mes_para_int(string s);
bool is_valid(const Leitura& r);

istream& operator>>(istream& is, Leitura& r);
istream& operator>>(istream& is, Mes& m);
istream& operator>>(istream& is, Ano& a);

int main()
{
    // abre o arquivo de entrada
    cout << " Por favor, informe o nome do arquivo de entrada\n";
    string nome;
    cin >> nome;
    ifstream ifs(nome.c_str());
    if(!ifs) error("não é possivel abrir o arquivo de entrada", nome);

    ifs.exceptions(ifs.exceptions() | ios_base::badbit); // lança bad

    // abre um arquivo de saída
    cout << " Por favor, informe o nome do arquivo de saida\n";
    cin >> nome;
    ofstream ofs(nome.c_str());
    if(!ofs) error("não é possivel abrir o arquivo de saída", nome);

    // lê um número arbitrário de anos;
    vector<Ano> as;
    while(true) {
        Ano a;      // obtém um Ano recém inicializado a cada interação
        if(!(ifs>>a)) break;
        as.push_back(a);
    }   // end while
    cout << "ler " << as.size() << " anos de leituras\n";

    for (int i = 0; i < as.size(); ++i)
        //imprime_ano(ofs, as[i])


    return 0;
}


void error(string s)
{
    throw runtime_error(s);
}

void error(string s, int n)
{
    throw runtime_error(s);
    cout << n;
}

void error(string s, string n)
{
    throw runtime_error(s);
    cout << n;
}


// em algum lugar: fazer ist lançar uma exceção se ocorrer algum problema:
//ist.exceptions(ist.exceptions() | ios_base::badbit);

void end_of_loop(istream& ist, char term, const string& message)
{
    if(ist.fail()) {    // usa term como terminador e/ou separador
        ist.clear();
        char ch;
        if(ist>>ch && ch == term) return;   // tudo está bem
        error(message);
    }   // end if
}

vector<string> tab_entrada_mes; // tab_entrada_mes[0] == "jan"

void init_tab_entrada(vector<string>& tab)
// inicializa vetor de representações de entrada
{
    tab.push_back("jan");
    tab.push_back("fev");
    tab.push_back("mar");
    tab.push_back("abr");
    tab.push_back("mai");
    tab.push_back("jun");
    tab.push_back("jul");
    tab.push_back("ago");
    tab.push_back("set");
    tab.push_back("out");
    tab.push_back("nov");
    tab.push_back("dez");
}

int mes_para_int(string s)
// será s o nome de um mês? Se sim, retorna seu índice [0:11], caso contrário, -1
{
    for(int i = 0; i < 12; ++i)
        if(tab_entrada_mes[i] == s)
            return i;

    return -1;
}

bool is_valid(const Leitura& r)
// um teste rudimentar
{
    if(r.dia < 1 || 31 < r.dia) return false;
    if(r.hora < 0 || 23 < r.hora) return false;
    if(r.temperatura < min_improvavel || max_improvavel < r.temperatura)
        return false;
    return true;
}





istream& operator>>(istream& is, Leitura& r)
// lê uma leitura de temperatura de is para r
// formato: (3 4 9.7)
// verifica formato, mas não se importa com validade dos dados
{
    char ch1;
    if(is >> ch1 && ch1 != '(') {// poderia ser uma leitura?
        is.unget();
        is.clear(ios_base::failbit);
        return is;
    }   // end if

    char ch2;
    int d;
    int h;
    double t;
    is >> d >> h >> t >> ch2;
    if(!is || ch2 != ')') error("leitura incorreta");   // leitura confusa
    r.dia = d;
    r.hora = h;
    r.temperatura = t;
    return is;
}

istream& operator>>(istream& is, Mes& m)
// lê um mês de is para m
// formato: {mes fev...}
{
    char ch = 0;
    if(is >> ch && ch !='{') {
        is.unget();
        is.clear(ios_base::failbit);    // falha na leitura de Mes
        return is;
    }   // end if

    string marca_mes;
    string mm;
    is >> marca_mes >> mm;
    if(!is || marca_mes != "mes") error("início de mês incorreto");
    m.mes = mes_para_int(mm);

    Leitura r;
    int duplicados = 0;
    int invalidos = 0;
    while(is >> r) {
        if(is_valid(r)) {
            if(m.dia[r.dia].hora[r.hora] != leitura_invalida)
                ++duplicados;
            m.dia[r.dia].hora[r.hora] = r.temperatura;
        }   // end if
        else
            ++invalidos;
    }   // end while
    if(invalidos) error("leituras inválidas em mês", invalidos);
    if(duplicados) error("leituras duplicadas em mês", duplicados);
    end_of_loop(is, '}', "fim de mês incorreto");
    return is;
}

istream& operator>>(istream& is, Ano& a)
// lê um ano de is para a
// formato: {ano 1972...}
{
    char ch;
    is >> ch;
    if(ch != '{') {
        is.unget();
        is.clear(ios::failbit);
        return is;
    }   // end if

    string marca_ano;
    int aa;
    is >> marca_ano >> aa;
    if(!is || marca_ano != "ano") error("início incorreto de ano");
    a.ano = aa;

    while(true) {
        Mes m;      // obtém um m limpo a cada interação
        if(!(is >> m)) break;
        a.mes[m.mes] = m;
    }   // end while

    end_of_loop(is, '}', "final incorreto de ano");
    return is;
}
