#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;
/*
double menor (double a, double b)
{
    return a < b ? a : b;
}

auto lambdaMenor = [](double a, double b) -> double
{
    return a < b ? a : b;
};
*/

void imprimir(int n) { cout << n << '\n'; }
int main()
{

    /*
    cout << menor(10, 20) << endl;
    cout << lambdaMenor(10, 20) << endl;
*/

    vector<int> vec;
    for (int i = 0; i <= 10; ++i)
        vec.push_back(i);

    for_each(vec.begin(), vec.end(), imprimir);

    cout << "\n\n\nLambda.\n\n\n";
    for_each(vec.begin(), vec.end(),[] (int n)
                            { cout << n << '\n'; }
                            );

    return 0;
}

