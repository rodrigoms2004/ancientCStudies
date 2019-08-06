#include <stdio.h>
#include <stdlib.h>

void main()
{
	int *p;
	int d = 10;
	int a = 6;
	int **r; // r é um ponteiro para um ponteiro para um inteiro
	p = &a;  // p aponta para a
	r = &p;  // r aponta para p e *r aponta para a
	int c = **r + d; // c = a + d -> c = 6 + 10 -> c = 16
	printf("c usando **r = %d\n", c);

	printf("Valor de 'a' eh = %d\n", a);
	printf("O endereço de 'a' eh %p\n", &a);
	printf("Valor em 'p' = %d\n", *p);
	printf("'p' tem endereço %p e aponta para 'a' no endereço %p\n", &p, p);
	printf("'r' tem endereço %p e aponta para 'p' no endereço %p\n",&r, &(*r));
	printf("'r' aponta para 'a' no endereço %p\n", &(**r));

	
	/*
	
	Endereço	- Valor	- Variável
	1004		- 6		- a
	1006     	- 1004	- p
	1008    	- 1006	- r
	1010		- 10	- d
	
	*r aponta para 1006, que é o endereço de p
	**r aponta para 1004, que é o endereço de a
	
	*/
	
}	// end main()
