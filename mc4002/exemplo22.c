#include <stdio.h>
#include <stdlib.h>

main()
{
	int * pi;
	double * pd;
	pi=(int *)malloc(sizeof(int));
	*pi = 1001; // armazena um valor l�
	printf("int ");
	printf("valor = %d: posicao = %p\n", *pi, pi);
	pd=(double *)malloc(sizeof(double)); // aloca espa�o para um double
	*pd = 10000001.0; // armazena um double l�
	printf("double ");
	printf("valor = %g: posicao = %p\n", *pd, pd);
	printf("tamanho de pi = %d", sizeof pi); // tamanho do tipo definido
	printf(": tamanho de *pi = %d\n", sizeof *pi); // tamanho do valor
	printf("tamanho de pd = %d", sizeof pd);
	printf(": tamanho de *pd = %d\n", sizeof *pd);
	free(pi);
	free(pd);
}
