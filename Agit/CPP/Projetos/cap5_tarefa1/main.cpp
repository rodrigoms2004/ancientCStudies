#include <iostream>
#include <algorithm>    // std::swap
#include "funcoes.h"

using namespace std;

int main()
{

    int inicial, final;

    while(true)
    {
        cout << "Entre com dois números ou CTRL+C para finalizar\n";
        cin >> inicial >> final;

        if(inicial > final)
            swap(inicial, final);

        cout << "Usando resto:\n";
        ImprimePares(inicial, final);
        cout << "\n\nUsando AND:\n";
        ImprimeParesAND(inicial, final);


    }   // end while

    cout << "Hello World!" << endl;
    return 0;
}

