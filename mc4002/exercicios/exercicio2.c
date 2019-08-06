
/* Imprime os elementos de um vetor usando aritmética de ponteiros*/
#include <stdio.h>
main()
{
	int v[] = {10, 20, 30};
	int i;
	for (i = 0; i < 3; i++){
	/*Nesse local imprima os valores do vetor em ordem atráves de seus
	endereços e do operador * (utilizando aritmética de ponteiros)*/
//	printf("Posição %d possui o endereço %p com o valor de %d\n", i, &v[i], *(&v[i]));
	printf("Posição %d possui o endereço %p com o valor de %d\n", i, &v[i], *(v+i));
	}
}

