#include <iostream>

using namespace std;

int main()
{
    int inicial, final, total = 0;

    cout << "Digite inicial, final: ";
    cin  >> inicial >> final;

    if(inicial > final)
        swap(inicial, final);

    for(int i = inicial; i <= final; ++i)
    {
        //if(i % 2 == 0)
        if((i & 1) == 0)
        {
            cout << i << '\n';
            ++total;
        }
    }

    cout << "Total de pares: " << total << '\n';
    return 0;
}

