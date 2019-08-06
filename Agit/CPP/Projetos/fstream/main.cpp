#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream file;
    cout << "Abrindo arquivo em modo de escrita\n";
    file.open("/tmp/teste.txt", ios_base::out); // ios_base::app to append text
    file << "Teste fstream...\n";
    file.close();

    file.open("/tmp/teste.txt", ios_base::in);
    while(file.good())
        cout << char (file.get());

    file.close();

    return 0;
}


