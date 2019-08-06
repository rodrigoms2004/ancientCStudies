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

template <typename Tipo>
Tipo soma(Tipo a, Tipo b)
{
    return a + b;
}


int main()
{
    cout << minimo<int>(10, 20) << '\n';
    cout << maior<int>(10, 20) << '\n';
    cout << soma<int>(10, 20) << '\n';
    return 0;
}
