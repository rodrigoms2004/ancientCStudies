#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <math.h>

struct strDivisores {
  int *lista;
  int tamanho;
  int nDivisores;
};

struct strDivisores encontraDivisores (int n) {

  //int nOriginal = n;
  struct strDivisores div;
  div.tamanho    = (int) ceilf ( log2f( (float)n ) );   
  div.lista      = (int *) malloc ( div.tamanho * sizeof(int) );
  div.nDivisores = 0; 

  int i;
  for (i=2; i <= n; i++) {
    if ( n % i == 0 ) { 
      while ( n % i == 0 && n != 1 ) {
	div.lista[ div.nDivisores ] = i;
	n = n/i;
      }
      div.nDivisores++;
    }
  }

  return div;
}

int main(char argc, char **argv) {

  srand(1);

  int nMin =  100000000; // 10^8
  int nMax = 1000000000; // 10^9 
  int nFatoracoes = 100;

  int i,k;

  for (i=0; i<nFatoracoes; i++) {

    int n = (int) floor ( (double) rand() * (nMax - nMin) / RAND_MAX )  + nMin;    
    struct strDivisores div = encontraDivisores (n);

    printf("%10d: ", n);
    for (k=0; k<div.nDivisores; k++)
      printf("%10d ", div.lista[k]);
    printf("\n");    

    free (div.lista);
  }      
    
}
