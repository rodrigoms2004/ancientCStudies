#include <iostream>

using namespace std;

void addValue(int *a, int *b, int *c);
void dobraValorPonteiro(int *a, int *b, int *c);
void dobraValorReferencia(int &a, int &b, int &c);


int main()
{
    int a, b, c;
    cout << "Entre com os valores a, b e c: ";
    cin >> a >> b >> c;

//    addValue(&a, &b, &c);
    //dobraValorPonteiro(&a, &b, &c);
    dobraValorReferencia(a, b, c);
    cout << "\nValores a, b, c: "
         << a << " | " << b <<  " | "  << c << endl;


    return 0;
}

void addValue(int *a, int *b, int *c)
{
    *a += 10;
    *b += 20;
    *c += 30;
}

void dobraValorPonteiro(int *a, int *b, int *c)
{
    *a *= 2;
    *b *= 2;
    *c *= 2;
}

void dobraValorReferencia(int &a, int &b, int &c)
{
    a *= 2;
    b *= 2;
    c *= 2;
}
