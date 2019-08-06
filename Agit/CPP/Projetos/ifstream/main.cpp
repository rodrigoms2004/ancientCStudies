#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ifstream file;
    file.open("/tmp/teste.txt");
    while (file.good())
        cout << char (file.get());
    cout << '\n';

    return 0;
}

