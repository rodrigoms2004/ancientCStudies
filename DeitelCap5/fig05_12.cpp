// Tentando modificar dados através de um 
// ponteiro não-constante para dados constantes
#include <iostream>

void f(const int *);

int main()
{
	int y;

	f(&y);	// f tenta modificação ilegal

	return 0;
}

// xPtr não pode modificar o valor
// da variavel para a qual ele aponta
void f(const int *xPtr)
{
	*xPtr = 100;	// não se pode modificar um objeto const
}
