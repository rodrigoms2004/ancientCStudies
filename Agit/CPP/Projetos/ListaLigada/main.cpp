#include <iostream>
#include "lista.h"

using namespace std;

int main()
{

    Lista<int> *lst = new Lista<int>;
    {
        lst->inserir(10);
        lst->inserir(20);
        lst->inserir(30);
        lst->inserir(40);
        lst->inserir(50);
        lst->imprimir();
        cout << "Numero de elementos: " << lst->getNumeroElementos() << '\n';
    }
    return 0;
}

