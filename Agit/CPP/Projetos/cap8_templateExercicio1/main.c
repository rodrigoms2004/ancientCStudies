#include <stdio.h>
#include <iostream>

using namespace std;

template <typename Tipo>
Tipo minimo(Tipo a, Tipo b)
{
    return a < b ? a : b;
}

template <typename Tipo>
Tipo maior(Tipo a, Tipo b)
{
    return a > b ? a : b;
}




int main(void)
{

    cout << minimo (4, 5);

    cout << maximo (5.0, 4.3);
    printf("Hello World!\n");
    return 0;
}

