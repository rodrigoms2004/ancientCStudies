#include <iostream>

using namespace std;

void dobra_valor(int *a, int *b, int *c)
{
    *a *= 2;
    *b *= 2;
    *c *= 2;
}


int main()
{
    int a, b, c;

    cout << "Digite a, b, c: ";
    cin >> a >> b >> c;

    cout << "Antes: " << " a: " << a
         << " b: " << b << " c: " << c
         << "\n";

    dobra_valor(&a, &b, &c);


    cout << "Depois: " << " a: " << a
         << " b: " << b << " c: " << c
         << "\n";
    return 0;
}

