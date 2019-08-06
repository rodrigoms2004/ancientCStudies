#include <iostream>
#include <map>
#include <algorithm>
#include <limits>

using namespace std;

bool validarCin();

int main()
{
    string nome;
    double nota;
    multimap<double, string> alunos;


    while(true)
    {
        int continuar;
        cout << "Entre com o nome e a nota: ";
        cin >> nome >> nota;
        if (!validarCin()) continue;

        alunos.insert(multimap<double, string>::value_type(nota, nome));


        cout << "Deseja continuar? (0) = Não, (1) = Sim: ";
        cin >> continuar;
        if (!validarCin()) continue;

        if(continuar)
            continue;
        else
        {
            std::map<double, string>::iterator it = alunos.begin();
            for (it = alunos.begin(); it != alunos.end(); ++it)
                cout << "Nome: " << it->second << " nota: " << it->first << endl;
            break;
        }

    }

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
