#include <stdio.h>
#include <stdlib.h>

void main()
{
	double * p3;
	p3 = (double *)malloc(3*sizeof(double)); // espaço para 3 doubles
	p3[0] = 0.2; // trata p3 como um nome de vetor
	p3[1] = 0.5;
	p3[2] = 0.8;
	
	printf("p3[1] eh %g\n", p3[1]); p3 = p3 + 1; // incrementa o ponteiro
	printf("Agora p3[0] eh %g e ", p3[0]);
	printf("p3[1] eh %g.\n", p3[1]);
	p3 = p3 - 1; // aponta de volta ao começo
	free(p3); // libera memória
	
}	// end main()
