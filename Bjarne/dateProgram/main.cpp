#include <iostream>

using namespace std;

bool bissexto(int a);

int main()
{



    for (int i = 1000; i <= 2020; i += 4)
    {
        if (bissexto(i))
            cout << "Ano bissexto: " << i << endl;
    }


    //cout << "Hello World!" << endl;
    return 0;
}

bool bissexto(int a)
{
    // ver exercicio 10

    if ( a % 4 == 0 && (a % 400 == 0 || a % 100 != 0) )
    {
        return true;
    } else {
        return false;
    }

}
