#include <iostream>
#include "funcoes.h"

using namespace std;

int main()
{
    int x = 5;  // 'x' é o apelido de um endereço de memória
                // onde armazenei o NÚMERO INTEIRO 5;

    cout << "-main: conteúdo de 'x':" << x <<'\n';
    cout << "-main: endereço de 'x':" << &x <<'\n';

    // Chama a função 'validar_entrada', passando o endereco de 'x'
    if(validar_entrada(&x))
        cout << "\n-main: conteudo de 'x' apos 'validar_entrada' = "
             << x << '\n';


    int z = 4;
    int *pz = &z;

    (*pz)++;

    cout << *pz << endl;
    return 0;
}

