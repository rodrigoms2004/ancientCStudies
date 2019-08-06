#include <stdio.h>

void troca(int *a, int *b);	/* protótipo da função */

main()
{
	int n, k;
	puts("Introd. dois N inteiros");
	scanf("%d %d", &n, &k);
	printf("Antes da troca n = %d e k = %d\n", n, k);
	troca(&n, &k);	/* trocar n com k */
	printf("Depois da troca n = %d e k = %d\n", n, k);
}

void troca(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
