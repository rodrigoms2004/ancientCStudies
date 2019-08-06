#include <iostream>
#include <initializer_list>
#include <chrono>
#include <ctime>

using namespace std;

using namespace chrono;


unsigned long long fatorial(int fator)
{
    unsigned long long result = 1;
    for (int i = fator; i > 1; --i)
        result *= i;

    return result;
}

unsigned long long fatorialRecursivo(int fator)
{
    if (fator == 1)
        return fator;
    return fatorial (fator  - 1) * fator;
}

int main()
{
    cout << "FATORIAL ITERATIVO\n";
    high_resolution_clock::time_point start = high_resolution_clock::now();
    unsigned long long valores[8];
    for (int i = 3, index = 0; i < 11; ++i, ++index)
    {
        valores[index] = fatorial(i);
        //cout << fatorial(i) << '\n';
    }
    high_resolution_clock::time_point end = high_resolution_clock::now();

    int tempo = duration_cast<nanoseconds>(end - start).count();
    for (int i = 0; i < 8; ++i)
        cout << valores[i] << endl;

    cout << "\nTempo: " << tempo << '\n';

    cout << "\n\nFATORIAL RECURSIVO\n";
    start = high_resolution_clock::now();
    for (int i = 3, index = 0; i < 11; ++i, ++index)
    {
        valores[index] = fatorialRecursivo(i);
    }
    end = high_resolution_clock::now();
    tempo = duration_cast<nanoseconds>(end - start).count();
    for (int i = 0; i < 8; ++i)
        cout << valores[i] << endl;

    cout << "\nTempo: " << tempo << '\n';


    return 0;
}

