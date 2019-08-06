// Tentando modificar um ponteiro constante
// para dados não-constantes
#include <iostream>

using namespace std;

int main()
{
	int x, y;
	int * const ptr = &x	// ptr é um ponteiro constante para um inteiro.
				// Um inteiro pode ser modificado através de ptr, mas ptr sempre aponta
				// para a mesma posição de memória.
	*ptr = 7;
	ptr = &y;

	return 0;
}
