#include <stdio.h>
#include <stdlib.h>	// devido a função exit

int main (int argc, char* argv[])
{
	FILE *fp;
	int ch;	// inteiro para ler os caracteres

	// Testar a linha de comando
	if (argc != 2)
	{
		printf("Sintaxe: \n\n%s Arquivo\n\n",argv[0]);
		exit(1);	// termina o programa
	}
	
	/* Abrir o Arquivo com o nome em argv[1] */
	fp = fopen(argv[1], "r");

	if (fp == NULL)
	{
		printf("Impossivel abrir o arquivo %s\n", argv[1]);
		exit(2);
	}

	while((ch=fgetc(fp)) != EOF)
		putchar(ch);
	fclose(fp);	
	
}

