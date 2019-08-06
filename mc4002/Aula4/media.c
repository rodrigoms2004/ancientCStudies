#include <stdio.h>
#include <pthread.h>
#include <math.h>

#define NUMEROS 100000000


int main()
{
	int i; 
	double soma, media;
	soma = 0.0;
	media = 0.0;
	
	for (i = 1; i <= NUMEROS; i++)
	{
		 soma += pow(i, 2.0);
		 //printf ("%f\n",i);
	}	// end for

	media = sqrt(soma/NUMEROS);
	
	printf("A média é %f: \n", media);
	
	
}	// end main()



