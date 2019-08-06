#include <iostream>

using namespace std;

int minimo(int a, int b)
{
    if(a < b)
        return a;
    else
        return b;
}

int main()
{
    int a = 10, b = 20;
    int c = minimo(a, b);
    cout << "O menor entre " << a << " e " << b
         << " eh: " << c << '\n';


    return 0;
}

