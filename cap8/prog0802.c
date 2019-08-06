#include <stdio.h>

main()
{
	char s[100];
	char *ptr = s; /* Aponta para o primeiro caractere de s */
	
	printf("Introduza uma String: "); gets(s);
	
	if (*ptr == '\0') return; /* ou return 0 se der erro de compilação
							  /* String vazia */
	
	/* Imprimir a string novamente */
	
	while (*ptr != '\0')
		putchar(*ptr++);
		
	putchar('\n');
		
	/* Imprimir a string ao contrário */
	
	ptr--; /* por causa do '\0' */
	
	while (ptr >= s)	/* Enquanto não for final de string */
		putchar(*ptr--);
		
	putchar('\n');
}
