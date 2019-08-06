#include <iostream>

using namespace std;

enum Meses {Janeiro = 1, Fevereiro, Marco, Abril,
      Maio, Junho, Julho, Agosto,
      Setembro, Outubro, Novembro, Dezembro};

int main()
{
/*
    cout << "Janeiro: " << Janeiro << endl;
    cout << "Dezembro: " << Dezembro << endl;

    Meses mes = Dezembro;

    cout << sizeof(mes) << '\n';
    if(mes == Dezembro)
    {
        mes = Janeiro;
        cout << mes << '\n';
    }
*/
    int a[] = {1, 2, 3, 4, 5};
    int *ptr = a;

    /*
    for (int i = 0; i < (sizeof(a)/sizeof(int)); i++) {
    //     cout << a[i] << ' ';
        cout << *ptr << ' ';
        *ptr++;
    }
    cout << endl;
*/

    for (int *ptr = a;*ptr != NULL; ++ptr) {
        cout << *ptr << ' ';
    }

    return 0;

}   // end main

