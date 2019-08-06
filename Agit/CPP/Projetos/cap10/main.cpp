#include <iostream>
#include <fstream>
#include <vector>
#include <stdexcept>
#include <stdio.h>
#include <string.h>

using namespace std;


void error(string error_msg, string filename);
void error(string s);
void fill_vector(istream& ist, vector<int>& v, char terminador);
void lerUnicoValor();
void lerUnicoValor2();
void lerUnicoValor3();
void lerUnicoValor4();
void lerUnicoValor5();
void lerUnicoValor6();
void skip_para_int();
int get_int();
int get_int(int menor, int maior);
int get_int(int menor, int maior, const string& solicita, const string& lamenta);
struct Leitura {
    int hora;
    double temperatura;
    Leitura(int h, double t): hora(h), temperatura(t){}
};


int main()
{


    //lerUnicoValor();
    //lerUnicoValor2();
    //lerUnicoValor3();
    //lerUnicoValor4();
    //lerUnicoValor5();
    //lerUnicoValor6();


    char response[100];
    unsigned long previous;

    memset(response, '-', 100);    // Initialize the string

    cout << response << endl;

    /*
    string streamFile = "stream.txt";
    ifstream ist(streamFile.c_str());
    vector<int> v;
    char terminador = '*';

    fill_vector(ist, v, terminador);
*/

/*
    cout << "Inform input filename: ";
    string nome;
    cin >> nome;
    ifstream ist(nome.c_str()); // fluxo de entrada
    if(!ist) error("cannot open file ", nome);

    cout << "Inform output filename: ";
    cin >> nome;
    ofstream ost(nome.c_str()); // fluxo de entrada
    if(!ost) error("cannot open file ", nome);

    vector<Leitura> temps;
    int hora;
    double temperatura;
    while(ist >> hora >> temperatura) {
        if (hora < 0 || 23 < hora) error("Hora fora do intervalo", "");
            temps.push_back(Leitura(hora,temperatura));
    }

    for (int i = 0; i < temps.size(); ++i)
        ost << '(' << temps[i].hora << ',' << temps[i].temperatura << ")\n";
*/
    return 0;
}

void error(string s)
{
    throw runtime_error(s);
}

void error(string error_msg, string filename)
{
    cout << error_msg << " " << filename << endl;
}


// stream 1 2 3 4 5 *
void fill_vector(istream& ist, vector<int>& v, char terminador)
// lê inteiros de ist para v até atingir eof() ou terminador
{
    int i = 0;
    while(ist >> i) {
        cout << i << " ";
        v.push_back(i);
    }
    cout << endl;


    if (ist.eof()) {
        cout << "OK" << endl;
        return;      // bom: encontramos o fim do arquivo
    }

    if(ist.bad()) error("ist está mal", ".");    // fluxo corrompido: vamos dair daqui

    if(ist.fail()){ // limpa a sujeira da melhor maneira que puder e relata o problema
        error("ist.fail acionado", ".");
        ist.clear();    // limpa o estado do fluxo
        // de modo que se possa procurar pelo terminador
        char c;
        ist >> c;         // lê um caractere, talvez o terminador
        if(c != terminador) {   // caractere inesperado
            cout << "Terminador inválido " << c << endl;
            ist.unget();         // coloca de volta esse caractere
            ist.clear(ios_base::failbit);   // coloca o estado em fail()
        }
    }
}

void lerUnicoValor() {
    cout << "Por favor, forneça um inteiro no intervalo de 1 a 10 (inclusive):\n";
    int n = 0;
    while(cin >> n) {                   // lê
        if(1 <= n && n <= 10) break;    // verifica intervalo
        cout << "Desculpe, mas "
             << n << " não está no intervalo [1:10]; por favor, tente novamente\n";
    }

}

void lerUnicoValor2() {
    cout << "Por favor, forneça um inteiro no intervalo de 1 a 10 (inclusive):\n";
    int n = 0;
    while(cin >> n && !(1 <= n && n <= 10)) {                   // lê
        cout << "Desculpe, mas "
             << n << " não está no intervalo [1:10]; por favor, tente novamente\n";
    }

}

void lerUnicoValor3() {
    cout << "Por favor, forneça um inteiro no intervalo de 1 a 10 (inclusive):\n";
    int n = 0;
    while(true) {
        cin >> n;
        if(cin) {   // conseguimos um inteiro; agora vamos verificá-lo
            if (1 <= n && n <= 10) break;
            cout << "Desculpe, mas "
                 << n << " não está no intervalo [1:10]; por favor, tente novamente\n";
        }   // end if
        else if(cin.fail()) {   // encontramos algo que não é um inteiro
            cin.clear();        // configura o estado novamente como good();
            cout << "Desculpe, mas "
                 << n << " não está no intervalo [1:10]; por favor, tente novamente\n";
            char ch;
            while (cin>>ch && !isdigit(ch));    // descarta não digitos
            if(!cin) error("nenhuma entrada", ""); // não encontramos um dígito:
                                                    // desistir
            cin.unget();    // coloca o dígito de volta, de modo que possamos ler o numero
        }   // end else if
        else {
            error("nenhuma entrada", "");   // eof ou bad: desistir
        }   // end else
    }   // end while
}

void lerUnicoValor4() {
    cout << "Por favor, forneça um inteiro no intervalo de 1 a 10 (inclusive):\n";
    int n = 0;
    while(true) {
        if(cin >> n) {  // conseguimos um inteiro; agora vamos verificar
            if(1 <= n && n <= 10) break;
            cout << "Desculpe, mas "
                 << n << " não está no intervalo [1:10]; por favor, tente novamente\n";
        } else {
            cout << "Desculpe, mas isso não é um número; tente novamente \n";
            skip_para_int();
        }
    }   // end while
}


void lerUnicoValor5() {
    int n = get_int(1, 10);
    cout << "n:" << n << endl;
}

void lerUnicoValor6() {
    int medida = get_int(1, 10, "forneça a medida", "Fora do intervalo, tente novamente");
    cout << "medida: " << medida << endl;
}

void skip_para_int() {
    if(cin.fail()) {    // encontramos algo que não é um inteiro
        cin.clear();    // queremos examinar os caracteres
        char ch;
        while(cin >> ch) {  // descarta não digitos
            if (isdigit(ch) || ch == '-') {    // coloca o digito de volta
                cin.unget();                   // de modo que possamos ler o número
                return;
            }
        }   // end while
    }   // end if
    error("nenhuma entrada", "");
}

int get_int()
{
    int n = 0;
    while(true) {
        if (cin >> n) return n;
        cout << "Desculpe, mas isso não é um número; tente novamente \n";
        skip_para_int();
    }   // end while
}

int get_int(int menor, int maior)
{
    cout << "Por favor, forneça um inteiro intervalo "
         << menor << " até " << maior << " (inclusive):\n";

    while(true) {
        int n = get_int();
        if(menor <= n && n <= maior) return n;
        cout << "Desculpe, mas "
             << n << " não está no intervalo [" << menor << ':' << maior
             << "]; pot favor, tente novamente\n";
    }   // end while
}

int get_int(int menor, int maior, const string& solicita, const string& lamenta)
{
    cout << solicita << ":[" << menor << ':' << maior << "]\n";

    while(true) {
        int n = get_int();
        if(menor <= n && n <= maior) return n;
        cout << lamenta << ":[" << menor << ':' << maior << "]\n";
    }   // end while
}

