#include <iostream>
#include <stdlib.h>
#include "data.h"

using namespace std;

int main()
{
/*
    Data dataRodrigo;
    dataRodrigo.alterarr(26, 7, 1981);
    dataRodrigo.imprimir();

    struct Data *dataDinamica = (struct Data *) malloc(sizeof (struct Data));
    dataDinamica->alterarr(15, 11, 1951);
    dataDinamica->imprimir();
    free(dataDinamica);

    Data *dt = new Data;
    dt->alterarr(30, 7, 1950);
    dt->imprimir();
    delete dt;
*/
    Data d1;

    d1.alterar(31,1,2001);  d1.imprimir(); // resultado: 31/01/2001
    d1.alterar(29,2,2001);  d1.imprimir(); // resultado: ERRO
    d1.alterar(29,2,1997);  d1.imprimir(); // resultado: ERRO
    d1.alterar(29,2,1800);  d1.imprimir(); // resultado: ERRO
    d1.alterar(29,2,1996);  d1.imprimir(); // resultado: 29/02/1996
    d1.alterar(29,2,2000);  d1.imprimir(); // resultado: 29/02/2000
    d1.alterar(31,6,2001);  d1.imprimir(); // resultado: ERRO
    d1.alterar(31,7,2001);  d1.imprimir(); // resultado: 31/07/2001
    d1.alterar(31,8,2001);  d1.imprimir(); // resultado: 31/08/2001
    d1.alterar(31,9,2001);  d1.imprimir(); // resultado: ERRO
    d1.alterar(31,12,2001); d1.imprimir(); // resultado: 31/12/2001


    Data dtPagamento;
    Data dtVencimento;

    dtPagamento.alterar(23,6,2015);
    dtVencimento.alterar(23,6,2015);

    int result = dtPagamento.comparar(dtVencimento);
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

    if (dtPagamento <= dtVencimento)
        cout << "Menor ou igual\n";
    if (dtPagamento >= dtVencimento)
        cout << "Maior ou igual\n";


    Data a;
    a.alterar(1,8,2015);
    Data b (a); // o mesmo que Data b = a;
    b.imprimir();


    int * pa = new int [5];
    for (int i = 0; i < 5; ++i)
    {
        pa[i] = i + 10;
        cout << pa[i] << endl;
    }
    delete []pa;

    return 0;
}

