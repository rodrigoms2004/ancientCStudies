// Tentando modificar um ponteiro constante
// para dados constantes
#include <iostream>

using namespace std;

int main()
{
	int x = 5, y;
	
	const int * const ptr = &x;	// ptr é um ponteiro constante para uma constante inteira
					// ptr sempre aponta para a mesma posição e o inteiro que
					// está armazenado nessa posição não pode ser modificado
	cout << *ptr << endl;
	*ptr = 7;
	ptr = &y;

	return 0;
}
