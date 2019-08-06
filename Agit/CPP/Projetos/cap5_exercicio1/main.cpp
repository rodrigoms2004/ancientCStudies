#include <iostream>
#include "funcoes.h"


using namespace std;

int main()
{
    cout << "Testa fatorial:\n";
    for (int i = 0; i <= 4; i++)
        cout << "Fatorial de " << i << " = " << Fatorial(i) << endl;

    cout << "Testa potência:\n";
    for (int i = 0; i <= 4; i++)
        cout << "10 elevado a " << i << " = " << Potencia(10, i) << endl;

    cout << "Testa PA_TotalTermos:\n";
    for (int i = 0; i <=3; i++)
        cout << "Total de termos entre 1 e 10, razao " << i << " = " << PA_TotalTermos(1, 10, i) << endl;

    for (int i = 1; i <=3; i++)
        cout << "Total de termos entre 10 e 1, razao " << (-1)*i << " = " << PA_TotalTermos(10, 1, (-1)*i) << endl;
    cout << "Total de termos entre 1 e 10, razao -1 " << " = " << PA_TotalTermos(1, 10, -1) << endl;
    cout << "Total de termos entre 10 e 1, razao 1 " << " = " << PA_TotalTermos(10, 1, 1) << endl;
    cout << "Total de termos entre 10 e 10, razao 1 " << " = " << PA_TotalTermos(10, 10, 1) << endl;
    cout << "Total de termos entre 10 e 10, razao -1 " << " = " << PA_TotalTermos(10, 10, -1) << endl;

    cout << "Testa ImprimePares:\n";
    ImprimePares(1, 11);
    ImprimePares(12, 11);

    cout << "Testa DobraValor:\n";
    cout << "Ganhando 1 real no primeiro dia de um mês,\n"
         << "e dobrando o valor todos os dias,\n"
         << "no dia 31 ganharei:\n";
    std::cout.precision(0); // sem casas decimais
    cout << std::fixed;     // sem notação cientifica
    cout << DobraValor(31) << endl;
    cout << "Mesmo calculo usando o 'for\n"
         << DobraValor_for(31) << endl;

    cout << "Testa TotalCombinações:\n";
    cout << "Na MegaSena: 1 em " << TotalCombinacoes(60, 6);
    cout << "\nNa LotoFacil: 1 em " << TotalCombinacoes(25, 15) << endl;


    //cout << "Hello World!" << endl;
    return 0;
}

