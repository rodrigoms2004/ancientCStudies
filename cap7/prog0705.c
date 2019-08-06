#include <stdio.h>
#include "stringfunc.h"

#define DIM 20
#define SEP_NOME ", "

main()
{
	char Nome[DIM+1], Sobrenome[DIM+1], Completo[2*DIM+1];
	while (1)
	{
		printf("Nome: "); gets(Nome);
		if (strlen(Nome)==0) break;				/* Terminar o Programa */
					/* Colocar o Sobrenome, Nome na string Completo */
		printf("Sobrenome: "); gets(Sobrenome);	
		strcpy(Completo, Sobrenome);			/* Copiar o Sobrenome */
		strcat(Completo, SEP_NOME);				/* Juntar o Separador */
		strcat(Completo, Nome);					/* Juntar o Prim. Nome */
		puts(Completo);
	}	// end while
	
}
