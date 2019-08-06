#include <iostream>
#include <funcoes.h>

using namespace std;

int main()
{

    int x = 5 ;     // 'x' é o apelido de um endereço de memória
                    // onde armazenei o número inteiro 5;
    int * p = &x ;  // 'p' é o apelido de um outro endereço de memória
                    // onde armazenei o endereço de 'x'
    int & r = x ;   // 'r' é uma referência para 'x': ou seja, um novo apelido
                    // (um sinônimo) para a mesma posição de memória
                    // já apelidada anteriormente como 'x'
    cout <<"conteúdo de 'x' = " << x << endl;
    cout <<"endereço de 'x' = " << &x << endl;
    cout <<"conteúdo de 'r' = " << r << endl;
    cout <<"endereço de 'r' = " << &r << endl;
    cout <<"conteúdo de 'p' = " << p << endl;
    cout <<"endereço de 'p' = " << &p << endl;
    cout <<"conteúdo APONTADO por 'p' = " << *p << endl;

    if(validar_entrada(x))
        cout << "\n-main: conteúdo de 'x' após 'validar_entrada' = "
             << x << endl;


    return 0;
}

