#include <iostream>
#include "data.h"
using namespace std;

int main()
{
    Data d1;

    d1.Altera(31,1,2001);  d1.Imprime(); // resultado: 31/01/2001
    d1.Altera(29,2,2001);  d1.Imprime(); // resultado: ERRO
    d1.Altera(29,2,1997);  d1.Imprime(); // resultado: ERRO
    d1.Altera(29,2,1800);  d1.Imprime(); // resultado: ERRO
    d1.Altera(29,2,1996);  d1.Imprime(); // resultado: 29/02/1996
    d1.Altera(29,2,2000);  d1.Imprime(); // resultado: 29/02/2000
    d1.Altera(31,6,2001);  d1.Imprime(); // resultado: ERRO
    d1.Altera(31,7,2001);  d1.Imprime(); // resultado: 31/07/2001
    d1.Altera(31,8,2001);  d1.Imprime(); // resultado: 31/08/2001
    d1.Altera(31,9,2001);  d1.Imprime(); // resultado: ERRO
    d1.Altera(31,12,2001); d1.Imprime(); // resultado: 31/12/2001


    Data *d2 = new Data();
    d2->Altera(26,7,1981); d2->Imprime();
    delete d2;

    Data dtPagamento;
    Data dtVencimento;

    dtPagamento.Altera(23,6,2015);
    dtVencimento.Altera(23,6,2015);

    int result = dtPagamento.Compara(dtVencimento);
    if (result == 0)
        cout << "Datas iguais\n";
    else if (result < 0)
        cout << "Pagamento adiantado\n";
    else if (result > 0)
        cout << "Pagamento atrasado\n";

    cout << "Teste sobrecarga de operadores:\n";
    if (dtPagamento == dtVencimento)
        cout << "Datas iguais\n";
    if (dtPagamento < dtVencimento)
         cout << "Pagamento adiantado\n";
    if (dtPagamento > dtVencimento)
        cout << "Pagamento atrasado\n";


    Data dA;
    dA.Altera(26,06,2015);
    dA.Imprime();
    Data dB(dA); // ou dB = dA;
    dB.Imprime();

    return 0;

}   // end main

