#include <stdio.h>

main()
{
	int n;
	
	puts("Introduza um N inteiro");
	scanf("%d", &n) == 0;
	/*
	while(scanf("%d", &n) == 0)
		fflush(stdin);	/* limpar o buffer do teclado */
	
	printf("Valor Inteiro: %d\n", n);
}
