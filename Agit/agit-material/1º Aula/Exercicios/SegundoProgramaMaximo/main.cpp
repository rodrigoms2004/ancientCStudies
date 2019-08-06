#include <iostream>

using namespace std;

int Maximo(int, int);

void salvarCliente(string nome,
                   string sobrenome,
                   string endereco,
                   string pais,
                   string bairro);

int main()
{
    int a, b, c;
    a = 10;
    b = 20;
    c = Maximo(a, b);

    cout << "O maior entre " << a << " e "
         << b << " eh: " << c << '\n';


    return 0;
}


int Maximo(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}
