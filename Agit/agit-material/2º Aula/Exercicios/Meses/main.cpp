#include <iostream>
#include <limits>

using namespace std;

enum Meses {Janeiro = 1, Fevereiro, Marco, Abril, Maio,
     Junho, Julho, Agosto, Setembro, Outubro,
     Novembro, Dezembro};

bool temErroNoCin()
{
    if(cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<int>::max(), '\n');
        return true;
    }
    return false;
}

int main()
{
    int continuar = 1;
    while(continuar)
    {
        int mes;
        cout << "Digite um mes: ";
        cin  >> mes;
        if(temErroNoCin())
        {
            cout << "Mes invalido.\n";
            continue;
        }

        if(mes < 1 || mes > 12)
        {
            cout << "Mes invalido.\n";
            continue;
        }
        if(mes == Janeiro)
            cout << "Janeiro.\n";
        else if(mes == Fevereiro)
            cout << "Fevereiro.\n";
        else if(mes == Marco)
            cout << "Marco.\n";
        else if(mes == Abril)
            cout << "Abril.\n";
        else if(mes == Maio)
            cout << "Maio.\n";
        else if(mes == Junho)
            cout << "Junho.\n";
        else if(mes == Julho)
            cout << "Julho.\n";
        else if(mes == Agosto)
            cout << "Agosto.\n";
        else if(mes == Setembro)
            cout << "Setembro.\n";
        else if(mes == Outubro)
            cout << "Outubro.\n";
        else if(mes == Novembro)
            cout << "Novembro.\n";
        else if(mes == Dezembro)
            cout << "Dezembro.\n";

        cout << "Deseja continuar: 0 = Não || 0 != sim: ";
        cin >> continuar;
        if(temErroNoCin())
        {
            cout << "Entrada invalida.\n";
            continue;
        }

    }
    return 0;
}

