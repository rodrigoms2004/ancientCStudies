#include <iostream>
#include <fstream>

using namespace std;


int main()
{
    fstream file;
    string path;
    cout << "Entre com a localização e o nome do arquivo: ";
    cin >> path;
    file.open(path.data(), ios::app);

    cout << "Entre com o texto, ou $ para sair: \n";
    char ch = 1;
    while ( (ch = getchar()) && ch != '$')
    {

        //file << (char) ch;
        file.put(ch);

    }   // end while

    file.close();

    return 0;
}

