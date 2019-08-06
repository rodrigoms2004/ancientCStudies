#include <iostream>
#include <lista.h>

using namespace std;


int main()
{

    Lista<int> lista;
    lista.inserir(10);
    lista.inserir(20);
    lista.inserir(30);
    lista.inserir(40);
    lista.inserir(50);
    lista.imprimir();
    return 0;
}
