#include <iostream>
#include <limits>

using namespace std;

bool valida_entrada(int *param)
{
    cout << "valida_entrada()\n";
    cout << "param: " << param << '\n';
    cout << "&param: " << &param << '\n';
    cout << "*param: " << *param << '\n';
    cin >> *param;
    if(cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<int>::max(), '\n');
        return false;
    }
    *param = 90;
    return true;
}

int main()
{
    int x = 5;
    cout << "x: " << x << '\n';
    cout << "&x: " << &x << '\n';
    if(valida_entrada(&x))
    {
        cout << "depois x: " << x << '\n';
        cout << "depois &x: " << &x << '\n';
    }



    return 0;
}

