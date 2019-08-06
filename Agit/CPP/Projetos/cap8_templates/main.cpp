#include <iostream>
#include "listadevalores.h"

using namespace std;

// Cálculo de Valor Mínimo entre dois valores de QUALQUER TIPO
// a) usando a MACRO MINIMO:
#define MINIMO(x, y) (((x)<(y)) ? (x):(y))

// b) usando o TEMPLATE de FUNÇÃO GLOBAL "Mínimo"
template <class T> T Minimo(T a, T b)
{
    return (a < b) ? a : b;
}

// um uso "pouco convencional" do template de função global "Mínimo":
template<class TipoMenor, class TipoMaior>
TipoMaior Minimo2Tipos(TipoMenor a, TipoMaior b)
{
    return (a < b) ? a : b;
}

template <class T1, class T2>
int SomaValores(T1 a, T2 b)
{
    return (a + b);
}

struct Testa
{
    int x;
    // Para permitir operações de dados do Tipo Testa com inteiros,
    // basta, neste caso, um operador de conversão para int
    operator int()
    {
        cout << "Operador de conversão int()" << endl;
    }
};


int main()
{
    // usa ListaDeValores para uma MATRIZ DE 10 valores do tipo char
    ListaDeValores<char, 10> ob1;
    cout << "=== Testa template 'ListaDeValores' com CHAR:" << endl;
    for (int iC = 0; iC < 10; iC++)
    {
        ob1.Atribui(iC, 'A' + iC);
        cout << ob1.Retorna(iC) << ((iC < 9) ? ",":"");
    }
    //** Resultado: A , B , C , D , E , F , G , H , I , J
    // usa ListaDeValores para uma MATRIZ DE 6 valores do tipo int
    ListaDeValores<int, 6> ob2;
    cout << "\n\n=== Testa template 'ListaDeValores' com INT:" << endl;

    for(int iC = 0; iC < 6; iC++)
    {
        ob2.Atribui(iC, 1 + iC);
        cout << ob2.Retorna(iC) << ((iC < 5) ? "," : "");
    }
    //** Resultado: 1 , 2 , 3 , 4 , 5 , 6


    cout << "\n\n===Calculo do MINIMO: "
         << "Problemas que podem ocorrer com MACRO:" << endl;
    cout << "===[ deveria imprimir 3(tres) e vai imprimir 4(quatro) ]" << endl;

    int x=2, y=5;

    cout << MINIMO(++x, y) << endl;
    // Resultado: 4

    cout << "\n===O problema é corrigido se"
         << "usarmos o TEMPLATE 'Minimo':" << endl;
    x = 2; y = 5;
    cout << Minimo(++x, y) << endl; // os valores x e y do tipo INT
    // ** Resultado: 3(int)

    cout << "\n===Usando o mesmo template para tipos DOUBLE:" << endl;
    double a = 5.1, b = 5.2;
    cout << Minimo(a, b) << endl; // valores a e b do tipo DOUBLE
    //** Resultado: 5.1(double)

    cout << "\n=== Pode ser usado tambem com "
         << "definicao EXPLICITA do tipo:" << endl;
    cout << Minimo<int>(x, y) << endl;
    //*** Resultado: 3(int)
    cout << Minimo<double>(x, y) << endl;
    // x e y convertidos para double
    //** Resultado: 3 (double)

    cout << "\n===Exemplo de um template que recebe dois tipos";
    cout << Minimo2Tipos(x, a) << endl;
    // envia "x"(INT) e "a"(DOUBLE);
    //** Resultado: 3 (double)
    // retorna DOUBLE, já que o template definiu como tipo de retorno
    // pode ser usado também com definição EXPLICITA dos tipos:
    cout << Minimo2Tipos<int,double>(5, 4) << endl;
    //** Resultado: 4 (double)

    cin.get();
    cout << endl;
    cout << SomaValores(x, y) << endl;
    Testa teste;
    teste.x = 10;
    cout << "\nSomaValores: somando um int com "
         << "um dado da struct Testa" << endl;
    cout << SomaValores(x, teste) << endl;
    cout << SomaValores(teste, x) << endl;
    cout << endl;

    return 0;
}

