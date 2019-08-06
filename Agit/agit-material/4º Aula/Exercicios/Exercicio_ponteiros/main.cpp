#include <iostream>

using namespace std;

void aumenta_valor(int *a, int *b, int *c)
{
    if(a != nullptr)
        *a += 10;
    if(b != nullptr)
        *b += 20;
    if(c != nullptr)
        *c += 30;
}

void aumenta_valor(int a, int b, int c)
{
    a += 10;
    b += 20;
    c += 30;
}

int main()
{
    int a = 0, b = 0, c = 0;

    cout << "Antes\n";
    cout << "a: " << a << " b: "
         << b << " c: " << c << "\n\n";

    //aumenta_valor(&a, &b, &c);
    aumenta_valor(NULL, NULL, NULL);
    //aumenta_valor(a, b, c);

    cout << "Depois\n";
    cout << "a: " << a << " b: "
         << b << " c: " << c << "\n\n";

    return 0;
}

