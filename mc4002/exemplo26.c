#include <stdio.h>
#include <stdlib.h>

struct pessoas
{
	int idade;
	int peso;
};

void main()
{
	struct pessoas aluno = {20, 70}; // nariz � uma estrutura
	struct pessoas * pt = &aluno; // pt aponta para a estrutura nariz
	printf("Peso do aluno:%d\n", pt->peso);
	printf("Idade do aluno:%d\n", pt->idade);
}
