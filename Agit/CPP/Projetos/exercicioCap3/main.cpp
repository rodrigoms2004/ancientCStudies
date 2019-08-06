#include <iostream>
#include <limits>

using namespace std;

int soma(int inicial, int final, int razao);

int main()
{
    int inicial, final, razao, condicao = 1;

    cin >> inicial;
    while(condicao) {
        cout << "Informe o numero incial, final e a razão: " << endl;
        cin >> inicial >> final >> razao;

        // se houver falha na entrada
        if(std::cin.fail()){
            cout << "Valores incorreros: tente outra vez\n";
            // como houve falha é preciso limpar os flags de erro de "cin":
            std::cin.clear();
            // e desprezar as quebras de linha pendentes no buffer de "cin":
            std:cin.ignore(std::numeric_limits<int>::max(), '\n');
        }   // end if

        if (inicial > final)
            std::swap(inicial, final);
        if (razao < 0)
            razao -= razao;

        int somaVar = soma(inicial, final, razao);

        cout << "Resultado da soma: " << somaVar << endl;

        cout << "Deseja continuar? (1) para sim (0) para não";
        cin >> condicao;

    }   // end while


    return 0;
}

int soma(int inicial, int final, int razao)
{
    int somaTotal = 0;
    for (int i = inicial; i <= final; i += razao ) {
        //cout << somaTotal << endl;
        somaTotal += i;
    }   // end for

    return somaTotal;
}   // end soma
