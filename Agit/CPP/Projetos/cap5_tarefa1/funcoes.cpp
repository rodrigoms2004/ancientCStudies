#include <iostream>

using namespace std;

//Imprime todos os números pares entre "inicial e final".
void ImprimePares ( int inicial , int final )
{
    int count = 0;
    cout << "Numeros pares entre " << inicial << " e " << final << endl;
    for (int n = inicial; n <= final; n++)
    {
        if(n % 2 == 0) {
            cout << n << " ";
            count++;
        }
    }   // end for
    if (count == 0)
        cout << "\nNenhum par nesse intervalo\n";
    else
        cout << "\nTotal de números do intervalo: " << count << endl;
}

void ImprimeParesAND ( int inicial , int final )
{
    int count = 0;
    cout << "Numeros pares entre " << inicial << " e " << final << endl;
    for (int n = inicial; n <= final; n++)
    {
        if((n & 1) == 0) {
            cout << n << " ";
            count++;
        }
    }   // end for
    if (count == 0)
        cout << "\nNenhum par nesse intervalo\n";
    else
        cout << "\nTotal de números do intervalo: " << count << endl;
}
