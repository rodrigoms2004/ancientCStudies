#include <iostream>
#include <data.h>

using namespace std;


int main()
{
    Data d;
    Data pag(1, 1, 2015), venc(31, 1, 2015);

    if(pag < venc)
        cout << "Menor.\n";


    return 0;
}
