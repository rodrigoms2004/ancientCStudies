/* Exercicio para entrega numero 2 */
/* compilar usando gcc multThread.c -lpthread */
/* usar com ./a.out */

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <assert.h>
#define NUM_THREADS	100

/*
	para dividir com quatro threads
	for (i = tid ; i < N ; i += 4)
	
	t0 = 0, 4, 8...
	t1 = 1, 5, 9...
	t2 = 6, 10, 14...
	t3 = 7, 11, 15...
*/

long **a, **b, **c;
int N = 100;

struct thread_data
{
	int tid;
};

struct thread_data thread_data_array[NUM_THREADS];
pthread_mutex_t mutex;

void *multiplica( void *param) 
{
	int tid;	// pegar o thread id
	int i, j, k;

	struct thread_data *my_data;
	my_data = (struct thread_data *) param;

	tid = my_data->tid;

	pthread_mutex_lock (&mutex);		
    for (i=0; i<N; i++) // para 4 threads  for (i=0; i<N; i+=4)
      for (j=tid; j<N; j+= NUM_THREADS)  // para 4 threads
		for (k=0; k<N; k++) 
		  c[i][j] += a[i][k] * b[k][j];

	pthread_mutex_unlock (&mutex);		
	
	pthread_exit((void *)c);
}

int main(int argc, char **argv) {
   
    if (argc == 2) {
      N = atoi (argv[1]);
      assert (N > 0);
    }

    int i,j,k,mul=5;
    int col_sum = N * (N-1) / 2;

    a = (long **)malloc (N * sizeof(long *));
    b = (long **)malloc (N * sizeof(long *));
    c = (long **)malloc (N * sizeof(long *));
    for (i=0; i<N; i++) {
      a[i] = (long *)malloc (N * sizeof(long));
      b[i] = (long *)malloc (N * sizeof(long));
      c[i] = (long *)malloc (N * sizeof(long));
    }


    for (i=0; i<N; i++)
      for (j=0; j<N; j++) 
      {
		a[i][j] = i*mul;
		b[i][j] = i;
		c[i][j] = 0;
      }

    printf ("Matrix generation finished.\n");         

/*
	Cria as threads   
*/
	pthread_mutex_init(&mutex, NULL);
	
	int rc, t;
	pthread_t threads[NUM_THREADS];
	for (t = 0; t < NUM_THREADS; t++)
	{
		thread_data_array[t].tid = t;
		printf("Creating thread %d\n", t);
		rc = pthread_create(&threads[t], NULL, multiplica, (void *)&thread_data_array[t]);	
		if (rc) 
		{
			printf("ERROR: return code from pthread_create() is %d\n", rc);
			exit(-1);
		} // end if
	  
	} // end for
	
	for (t = 0; t < NUM_THREADS; t++)
	    pthread_join(threads[t], (void **)&c);
	
    printf ("Multiplication finished.\n");         
    

    
    for (i=0; i<N; i++)
      for (j=0; j<N; j++)
		assert ( c[i][j] == i*mul * col_sum);  
		
		
    printf ("Test finished.\n"); 
  /*
    for (i=0; i<N; i++)
      for (j=0; j<N; j++)
		printf("valor em c[%d][%d] %ld\n",i, j, c[i][j]); 
*/
    pthread_exit(NULL);
       	
}

/* ANÁLISE DE TEMPOS COM 1, 2, 4, 10, 100 E 1000 THREADS */

/*
UMA THREAD
$ time ./a.out
Matrix generation finished.
Creating thread 0
Multiplication finished.
Test finished.

real	0m0.038s
user	0m0.024s
sys		0m0.000s

###################################################

DUAS THREADS
$ time ./a.out
Matrix generation finished.
Creating thread 0
Creating thread 1
Multiplication finished.
Test finished.

real	0m0.029s
user	0m0.024s
sys		0m0.000s

###################################################

QUATRO THREADS
$ time ./a.out
Matrix generation finished.
Creating thread 0
Creating thread 1
Creating thread 2
Creating thread 3
Multiplication finished.
Test finished.

real	0m0.002s
user	0m0.004s
sys		0m0.000s

###################################################

DEZ THREADS
$ time ./a.out
Matrix generation finished.
Creating thread 0
Creating thread 1
Creating thread 2
Creating thread 3
Creating thread 4
Creating thread 5
Creating thread 6
Creating thread 7
Creating thread 8
Creating thread 9
Multiplication finished.
Test finished.

real	0m0.033s
user	0m0.020s
sys		0m0.000s

###################################################

CEM THREADS
$ time ./a.out
Matrix generation finished.
Creating thread 0
Creating thread 1
Creating thread 2
...
Creating thread 97
Creating thread 98
Creating thread 99
Multiplication finished.
Test finished.

real	0m0.044s
user	0m0.008s
sys		0m0.004s


###################################################

OBS: SÓ FOI POSSIVEL TESTAR ATÉ 380 THREADS
$ time ./a.out
Matrix generation finished.
Creating thread 0
Creating thread 1
Creating thread 2
...
Creating thread 377
Creating thread 378
Creating thread 379
Multiplication finished.
Test finished.

real	0m0.073s
user	0m0.020s
sys	0m0.024s

###################################################

MIL THREADS
$ time ./a.out
Matrix generation finished.
Creating thread 0
Creating thread 1
Creating thread 2

...
Creating thread 378
Creating thread 379
Creating thread 380
ERROR: return code from pthread_create() is 11

real	0m0.066s
user	0m0.008s
sys	0m0.012s

*/




