#include <iostream>
#include <initializer_list>

using namespace std;


void fatorial(initializer_list<int> fatores)
{
    for (int fator : fatores)
    {
        unsigned long long result = 1;
        for (int i = fator; i > 1; --i)
            result *= i;

        cout << "Fatorial de " << fator << " eh : " << result << '\n';
    }
}


int main()
{
    fatorial({3, 4, 5});

    return 0;
}

