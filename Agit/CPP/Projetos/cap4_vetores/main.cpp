#include <iostream>

using namespace std;

void imprimeArray(string str[], int tamanho);

int main()
{
    string nome[3];
    int tamanho = sizeof(nome) / sizeof(string);

    for (int i = 0; i < sizeof(nome)/sizeof(string); i++) {
        cout << "Digite seu nome: ";
        cin >> nome[i];
    }   // end for



    imprimeArray(nome, tamanho);

    /*
    int a[] = {1, 2, 3, 4, 5};

    for (int *ptr = a;*ptr != NULL; ++ptr) {
        cout << *ptr << ' ';
    }
*/

    return 0;
}

void imprimeArray(string str[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
        cout << str[i] << endl;
}
