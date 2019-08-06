#include <iostream>

using namespace std;

int testaX(int x);

int main(int argc, char *argv[])
{
    cout << argc << endl;
    int a ;
    // percorre a lista de argumentos (o total deles é "argc")
    for ( a = 0 ; a < argc ; a = a + 1 )
        std::cout << argv [ a ] << "\n" ; // imprime um argumento
    // - ou seja, uma string da lista de strings "argv"



    return 0;

}

