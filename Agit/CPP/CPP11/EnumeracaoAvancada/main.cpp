#include <iostream>

using namespace std;

enum Frutas : char
{
    BANANA,
    PERA,
    MELANCIA = 127

};

int main()
{
    cout << sizeof(Frutas) << endl;
    return 0;
}

