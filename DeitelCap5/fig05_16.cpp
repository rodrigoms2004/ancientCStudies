// Operador sizeof, quando usado com um nome de array
// retorna o numero de bytes no array
#include <iostream>

using namespace std;

size_t getsize(double *);

int main()
{
	double array[20];
	cout << "O número de bytes na array é "
	     << sizeof(array)
	     << "\nO número de bytes retornados por getSize é "
	     << getsize(array) << endl;

	return 0;
}

size_t getsize(double *ptr)
{
	return sizeof(ptr);
}

