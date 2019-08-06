#include <stdio.h>
#include "stringfunc.h"

main()
{
	char Nome[30+1];
	
	do
	{
		printf("Nome: "); gets(Nome);
		puts(Nome);
	} while (strcmp(Nome, "SAIR") != 0);
	
	puts("Terminou o programa");
}
