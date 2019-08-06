#include <iostream>
#include "interface.h"

using namespace std;

int main()
{
    interface i ( 5 );
    cout << "Interface contém: " << i.getValue()
         << " antes de setValue" << endl;
    i.setValue( 10 );
    cout << "Interface contém: " << i.getValue()
         << " após setValue" << endl;

    return 0;
}

