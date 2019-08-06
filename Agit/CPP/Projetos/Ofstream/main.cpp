#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream file;
    file.open("/tmp/teste.txt");
    file << "Testando ofstream...";
    file.close();


    return 0;
}

