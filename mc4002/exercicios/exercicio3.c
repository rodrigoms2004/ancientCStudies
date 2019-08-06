#include <stdio.h>
#include <stdlib.h>
void main() 

/*Alocar um vetor de 10 possições dinamicamente, atribuir valores
sequencias de 0 a 9 à eles, e por fim fazer um somatoria entre
todos os valores do vetor.*/

{
	int soma = 0; int i;

	//Declarar vetor dinamicamente com 10 possições (malloc)
	int *p;
	p = (int *)malloc(10*sizeof(int)); // espaço para 10 ints

	for (i = 0; i < 10; i++) {
	//Atribuir o valor do seu indice a si mesmo como valor (pode ser feito de 2 formas)
		*(p+i) = i; // ou *(&p[i]) = i;
	}
	
	for (i = 0; i < 10; i++) {
	//Incrementar o valor soma com os valores de p, para fazer a somatória
		soma += *(p+i); // ou soma += *(&p[i]);
	}
	
	printf("Somatório eh %d.\n", soma);
	free(p); // libera a memória 
}

