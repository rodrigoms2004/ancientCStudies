// Usando os operadores & e *
#include <iostream>

using namespace std;

int main()
{
	int a;		// a é um inteiro
	int *aPtr;	// aPtr é um ponteiro para um inteiro
	
	a = 7;
	aPtr = &a;	// aPtr recebe o endereço de a

	cout << "O endereço de a é " << &a 
	     << "\n o valor de aPtr é " << aPtr;

	cout << "\n\nO valor de a é " << a
	     << "\n o valor de *aPtr é " << *aPtr;

	cout << "\n\nMostrando que * e & são os inversos "
	     << "um do outro.\n&*aPtr = " << &*aPtr
	     << "\n*&aPtr = " << *&aPtr << endl;

	cout << "\n\n O valor de &aPtr é " <<  &aPtr << endl;
	
	return 0;
}
