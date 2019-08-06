#include <iostream>

using namespace std;

class NovaMain
{

public:
    NovaMain()
    {
        cout << "\nNovaMain\n";
        string nome;
        cout << "DIgite seu nome: ";
        cin >> nome;
        cout << "Olá " << nome;
    }

};

class Qualquer
{
public:
  static int MembroStat;
};


int Qualquer::MembroStat = 0;

NovaMain n;


int main()
{
    cout << "\nMain\n";
    Qualquer::MembroStat = 5;
    cout << Qualquer::MembroStat << endl;
    return 0;
}

