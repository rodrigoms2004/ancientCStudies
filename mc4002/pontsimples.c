#include <stdio.h>

void main()
{
	int higgens = 5;
	int * pi = &higgens;
	printf("Valor de higgens = %d, Endereço de higgens = %p\n", higgens, &higgens);
	printf("Valor de *pi = %d; Valor de pi = %p\n", *pi, pi);

}
