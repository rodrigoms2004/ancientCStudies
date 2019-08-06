#include <iostream>
#include <funcoes.h>

using namespace std;

int main()
{
    int x = 5;

    // na chamada abaixo, não teremos muitos duplos acessos em 'funcao':
    if (funcao2(&x, 2))
        cout << "-'x' agora contem:" << x << '\n';
    else
        cout << "-'x' com valor invalido apos 'funcao'\n";


    // Mas agora teremos:
    if (funcao2(&x, 100)) // 100 vezes!
        cout << "-'x' agora contem:" << x << '\n';
    else
        cout << "-'x' com valor invalido apos 'funcao'\n";

    int a = 5;
    int &ra = a;
    int *p = &ra;
    cout << "ra  = " << ra << endl;
    cout << "&ra = " << &ra << endl;
    cout << "a   = " << a << endl;
    cout << "&a  = " << &a << endl;
    cout << "p   = " << p << endl;
    cout << "&p  = " << &p << endl;
    cout << "*p  = " << *p << endl;

    ra += 10;
    cout << "ra incrementado  = " << ra << endl;
    cout << "a depois do incremento de ra = " << a << endl;

    return 0;
}

