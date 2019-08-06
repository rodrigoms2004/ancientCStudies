// elevar uma variável ao cubo usando uma chamada por valor
#include <iostream>

using namespace std;

int cubeByValue(int);		// protótipo
void  cubeByReference(int *);	// protótipo

int main()
{
	cout <<"\n Passagem por valor\n";
	int number = 5;
	cout << "\nO valor original de number é " << number;
	number = cubeByValue(number);
	cout << "\nO novo valor de number é " << number << endl;

	cout <<"\n Passagem por referencia\n";
	number = 5;
	cout << "\nO valor original de number é " << number;
	cubeByReference(&number);
	cout << "\nO novo valor de number é " << number << endl;
	

	return 0;
}	// end main()

int cubeByValue(int n)
{
	return n * n * n;	// eleva ao cubo a variável local n
}

void cubeByReference(int *nPtr)
{
	*nPtr = *nPtr * *nPtr * *nPtr;	// eleva  ao cubo number em main
}
