#include <iostream>

using namespace std;

auto soma(auto a, auto b) // habilitar c++1y (futuro C++ 14)
{

    return a + b;
}

int main()
{
    string nome = "Rodrigo", sobrenome = "Silveira";
    cout << soma(10, 40) << endl;
    cout << soma(nome, sobrenome) << endl;
    return 0;
}

