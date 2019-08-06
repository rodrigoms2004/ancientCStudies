#include <stdio.h>

void main()
{
	int v[] = {10, 20, 30};
	printf("Endereço de v                  %p\n", v); // endereço de v
	printf("Endereço de v na posição 0     %p\n", &v[0]); // endereço de v na posição 0

	printf("Endereço de v na posição 2     %p\n", v+2); // endereço de v na posição 2
	printf("Endereço de v na posição 2     %p\n", &v[2]); // idem a linha acima
	printf("Valor em v[2] usando *(v+2)    %d\n", *(v+2)); // valor em v[2]
	printf("Valoe em v[2] usando *(&v[2])  %d\n", *(&v[2])); // valor em v[2], outro método
}



// *(&v[2])) é o mesmo que *(v+2)
