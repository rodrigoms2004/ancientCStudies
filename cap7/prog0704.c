#include<stdio.h>

main()
{
	char Nome[100];
	while(1)	/* laço infinito */
	{
		puts("Nome:");
		gets(Nome);
		if (Nome[0] == '\0')	/* se a string estiver vazia */
			break;				/* terminar laço */
		else
			printf("Nome Introduzido: %s\n", Nome);
	}	// end while
}	// end main()
