#include <iostream>
#include <vector>

using namespace std;


int main()
{
    double d = double(4) * 1024 * 1024 * 1024;
    long i = d;

    cout.precision(15);
    cout << d << '\n';
    cout << i << '\n';


    return 0;
}

