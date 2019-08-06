#include <iostream>
#include <algorithm>
#include "funcoes.h"

using namespace std;

int main()
{
    bool prosseguir = true;
    while(prosseguir)
    {

        cout << "\nSelecione uma das opções:\n"
             << "1 - operação & (bit a bit)\n"
             << "2 - operação | (bit a bit)\n"
             << "3 - Números pares com o operador %\n"
             << "4 - Números pares com o operador &\n\n";
        int opcao, a, b;
        cin >> opcao;

        cout << "Entre com dois números: ";
        cin >> a >> b;

        // faz a troca para as funções ImprimePares e ImprimeParesAND
        if (a > b)
            swap(a, b);

        switch (opcao)
        {
        case 1:
            cout << "Resultado: " << opAND(a, b);
            break;
        case 2:
            cout << "Resultado: " << opOR(a, b);
            break;
        case 3:
            ImprimePares(a, b);
            break;
        case 4:
            ImprimeParesAND(a, b);
            break;
        default:
            break;
        }   // end switch

        cout << "\n\nDigite 1 para continhar ou 0 para sair\n";
        cin >> prosseguir;
        if(!prosseguir)
            exit(0);
    }   // end while

    return 0;
}

