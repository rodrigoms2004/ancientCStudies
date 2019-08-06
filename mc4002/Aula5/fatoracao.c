#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <math.h>
#include <pthread.h>
#include <sys/time.h> // gettimeofdate

#define NUM_THREADS 4

/* 
compilar usando

gcc fatoracao.c -g2 -lpthread -lm
Depois valgrind ./a.out

*/

int *numeros;
int nFatoracoes = 100; // fatorar 100 números
  

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

void *realizaFatoracoes(void *tid)
{

	struct timeval tv;
	gettimeofday(&tv, 0);
	long t1 = tv.tv_sec*1000 + tv.tv_usec/1000;

  int i, k;
  int id = *((int *) tid);
  int nPerThread = nFatoracoes / NUM_THREADS;
  for (i=id*nPerThread; i<(id+1)*nPerThread; i++) 
  {
	int n = numeros[i];
	struct strDivisores div = encontraDivisores (n);
	
    printf("%10d: ", n);
    for (k=0; k<div.nDivisores; k++)
      printf("%10d ", div.lista[k]);
    printf("\n");    

    free (div.lista);
  }      
  
	gettimeofday(&tv, 0);
	long t2 = tv.tv_sec*1000 +tv.tv_usec/1000;
	printf("Tempo = %ld\n", t2-t1);
	
}

int main(char argc, char **argv) {

  srand(1); // semente de numeros aleatórios

  int nMin =  100000000; // 10^8
  int nMax = 1000000000; // 10^9 
  
  int i;
  pthread_t threads[NUM_THREADS];
  int ids[NUM_THREADS];
  
  // Gera números aleatórios
  numeros = (int *) malloc(nFatoracoes*sizeof(int));
  for (i = 0; i < nFatoracoes; i++)
  	numeros[i] = (int) floor ( (double) rand() * (nMax - nMin) / RAND_MAX )  + nMin;    
  
  for (i = 0; i < NUM_THREADS; i++)
  {
  	ids[i] = i;
  	pthread_create(&threads[i], NULL, realizaFatoracoes, &ids[i]);
  } 
  pthread_exit(NULL);
}
