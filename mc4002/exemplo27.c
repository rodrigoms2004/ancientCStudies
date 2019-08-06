#include <stdio.h>
#include <stdlib.h>

struct produto
{
	char nome[20];
	float volume;
	float preco;
};

void main()
{
	struct produto * ps;
	ps=(struct produto *)malloc(sizeof(struct produto));
	printf("Entre com o nome do item produto: ");
	gets(ps->nome); // m�todo 1 para acesso ao membro
	printf("Entre com o volume em centimetros cubicos: ");
	scanf("%f", &(*ps).volume); // m�todo 2 para acesso ao membro
	printf("Entre com o preco: R$");
	scanf("%f", &(ps->preco));
	printf("Nome: %s\n", (*ps).nome); // m�todo 2
	printf("Volume: %g centimetros cubicos\n", ps->volume);
	printf("Preco: R$%g\n", ps->preco);// m�todo 1
}


