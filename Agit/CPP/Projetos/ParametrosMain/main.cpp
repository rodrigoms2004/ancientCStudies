#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
    ifstream file;
    for (int i = 1; i < argc; ++i)
    {
        cout << "\n\nLendo: " << argv[i] << "\n\n\n";
        file.open(argv[i]);
        while(file.good())
            cout << char (file.get());
        file.close();;
    }



    return 0;
}

