#include <iostream>
#include "funcoes.h"


using namespace std;

int main()
{
    Data dHoje;

    //dHoje.Altera('1', '1', 2001);
    dHoje.Altera(1, 1, 2001);

    dHoje.ImprimirData();
    return 0;
}

