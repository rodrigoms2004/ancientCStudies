#include <iostream>

using namespace std;

string nome[3];

void solicitaNome(int index)
{
    cout << "Digite seu nome: ";
    cin >> nome[index];
}

void lerNome(int index)
{
    cout << "Nome[" << index << "]: "
         << nome[index] << '\n';
}

int main()
{       
    int i = 0;
    for(; i < 3; ++i)
        solicitaNome(i);

    for(i = 0; i < 3; ++i)
        lerNome(i);


    return 0;
}

