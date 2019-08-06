/*Criar duas estruturas de dados, sendo a estrutura chamada
semestre, e dentro dela existe um vetor chamado nota, que
possue todas as notas do semestre (de cada matéria, sendo 10
matéria por semestre). O objetivo é fazer a média anual de
cada matéria.
*/

#include <stdio.h>
#include <stdlib.h>

struct semestre
{
	int indice; //como se fosse o nome
	double *notas;
};

void main()
{
	//Declarar aqui as duas estruturas, uma para o 1o semestre e outra para 2o semestre
	struct semestre * s1;
	s1 = (struct semestre *)malloc(sizeof(struct semestre));
	struct semestre s2;
	
	// alocar dinamicamente um vetor de 10 posições para notas de cada estrutura
	s1->notas = (double *)malloc(10*sizeof(double));
	s2.notas = (double *)malloc(10*sizeof(double));

	int i;
	for(i=0;i<10;i++){
		s1->notas[i] = rand() % 10; //numeros entre 0 e 10
		s2.notas[i] = rand() % 10;
	}
	
	double media[10];

	for(i=0;i<10;i++){
		//Fazer aqui a média das notas
		media[i] = (s1->notas[i] + s2.notas[i]) / 2;
	}

	for(i=0;i<10;i++){
		printf("Media materia %d = %g\n",i,media[i]);
		printf("Semestre 1:Nota materia %d = %g\n",i,s1->notas[i]);
		printf("Semestre 2:Nota materia %d = %g\n",i,s2.notas[i]);
	}
}

