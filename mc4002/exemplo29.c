#include <stdio.h>
#include <stdlib.h>

struct produto
{
	int indice_produto; //como se fosse o nome
	struct mercado *ponteiro;
};

struct mercado
{
	int indice_mercado; //como se fosse o nome
};

void main()
{
	struct produto * ps;
	ps=(struct produto *)malloc(4*sizeof(struct produto)); // vetor de estruturas
	int i;

	struct mercado m = {0};

	for(i=0;i<4;i++){

	(ps+i)->indice_produto = i;
	(ps+i)->ponteiro = &m;

	}

	for(i=0;i<4;i++){

	printf("Indice do produto %d e o indice do seu mercado:%d\n",(ps+i)->indice_produto,(ps[i].ponteiro)->indice_mercado);

	}

}
