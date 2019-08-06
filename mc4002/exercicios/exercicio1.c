/*Faça um programa onde o valor da variável é alterado através do ponteiro e
valor alterado é impresso na tela com printf.*/

#include <stdio.h>
void main()
{
	int variavel = 1;
	///Nesse local tem que declarar o ponteiro e passar o endereço da variavel para o ponteiro]
	int * ponteiro = &variavel;
	//Nesse local tem que alterar o valor da variavel através do ponteiro
	*ponteiro = 5;

	printf("Valor alterado= %d (capturado pela variavel)\n", variavel); //1o forma
	printf("Valor alterado= %d (capturado pelo ponteiro)\n", *ponteiro); //2a forma
}

