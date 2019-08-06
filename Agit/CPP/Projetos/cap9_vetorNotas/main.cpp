#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

bool validarCin();


int main()
{
    vector<double> notas;
    double nota;
    int opcao;

    while(true)
    {
        cout << "Entre com uma nota: ";
        cin >> nota;
        if (!validarCin()) continue;
        notas.push_back(nota);
        cout << "Deseja cadastrar outra nota? (1) para SIM (0) para não: ";
        cin >> opcao;
        if (!validarCin()) continue;

        if(opcao)
            continue;
        else
        {
            std::sort (notas.begin(), notas.end(), greater<double>()); // ordena em ordem decrescente
            for (int i = 0; i < notas.size(); ++i)
            {
                cout << notas[i] << endl;
            }
            notas.clear();
        }

    }   // end while

    cout << "Hello World!" << endl;
    return 0;
}

bool validarCin()
{
    if (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<int>::max(), '\n');
        cout << "\n\nENTRADA INVALIDA.\n\n";
        return false;
    }
    return true;
}
