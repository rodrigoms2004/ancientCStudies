/*
* Author: Conrado 11062711
* Created: Mon 12 Aug 2013 12:03:56 AM BRT
* File: mult.c 
* Notes: Este programa multiplica 2 matrizes NxN utilizando NUM_THREADS threads.
*/


#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <assert.h>
#include <pthread.h>

#define NUM_THREADS 4


struct Dados{
	long tid;
	long N;
	long **a; 
	long **b;
	long **c;
	};

void *MultMatriz(void *param){
	struct Dados *d = param;
	long tid = (*d).tid;
	long N =  (*d).N ;
	long i,j,k;
	for (i=tid;i<N;i+=NUM_THREADS){
		for(j=0;j<N;j++){
			for(k=0;k<N;k++){
				(*d).c[i][j] += (*d).a[i][k] * (*d).b[k][j];
				}
			}
		}
		pthread_exit(NULL);
}



int main(int argc, char **argv) {
   
    long **a, **b, **c;
    long N = 1000;
	struct Dados *dados;
	dados = (struct Dados *)malloc(NUM_THREADS * sizeof(struct Dados));
    pthread_t threads[NUM_THREADS];

    if (argc == 2) {
      N = atoi (argv[1]);
      assert (N > 0);
    }

    int i,j,k,mul=5;
    long col_sum = N * (N-1) / 2;

    a = (long **)malloc (N * sizeof(long *));
    b = (long **)malloc (N * sizeof(long *));
    c = (long **)malloc (N * sizeof(long *));
    for (i=0; i<N; i++) {
      a[i] = (long *)malloc (N * sizeof(long));
      b[i] = (long *)malloc (N * sizeof(long));
      c[i] = (long *)malloc (N * sizeof(long));
    }


    for (i=0; i<N; i++)
    	for (j=0; j<N; j++) {
			a[i][j] = i*mul;
			b[i][j] = i;
			c[i][j] = 0;
      	}
    printf ("Matrix generation finished.\n");         
    
	
	//Multiplicação original (sem threads)
    /*
	for (i=0; i<N; i++)
      for (j=0; j<N; j++)
		for (k=0; k<N; k++)
			c[i][j] += a[i][k] * b[k][j];
    */
    

	
	for (i=0;i<NUM_THREADS;i++){
		(dados[i]).tid = i;
		(dados[i]).N = N;
		(dados[i]).a = a;
		(dados[i]).b = b;
		(dados[i]).c = c;
	}

	for (i=0;i<NUM_THREADS;i++){
		printf("Criando thread %ld\n",dados[i].tid);
        pthread_create(&threads[i],NULL,MultMatriz,&dados[i]);
	}
    for(i=0;i<NUM_THREADS;i++)
		pthread_join(threads[i],NULL);


    printf ("Multiplication finished.\n");         
    
    for (i=0; i<N; i++)
    	for (j=0; j<N; j++)
			assert ( c[i][j] == i*mul * col_sum);  

    printf ("Test finished.\n");         
	return(0);
}
