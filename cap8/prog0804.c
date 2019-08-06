#include <stdio.h>

int strlen(char *s)
{
	char *ptr = s;		/* Guardar o endereço inicial */
	while (*s != '\0')	/* Enquanto não chegarmos ao fim */
		s++;			/* Incrementar o ponteiro */
	
	return (int) (s-ptr);
}

main()
{
	char Nome[100];
	
	printf("Introduza um String: "); gets(Nome);
	
	printf("%d\n", strlen(Nome));
}
