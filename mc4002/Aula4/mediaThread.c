/* Exercicio para entrega numero 1 */
/* compilar usando gcc mediaThread.c -lpthread -lm */
/* usar com ./a.out <numero de threads> */

#include <stdio.h>
#include <pthread.h>
#include <math.h>

#define NUMEROS 100000000
long NUM_THREADS = 1; // o padrão é 1 threads

struct thread_data
{
	int tid;
};

pthread_mutex_t mutex;
double * soma;


void *calcMediaQuad(void *param)
{
	long i, t, tid; 
	
	struct thread_data *my_data;
	my_data = (struct thread_data *) param;	
	tid = my_data->tid;
	
	pthread_mutex_lock(&mutex);

	for (i = tid; i <= NUMEROS; i += NUM_THREADS)
	{
		 soma[tid] += pow(i, 2.0);
		 //printf ("%d\n",i);
	}	// end for

	pthread_mutex_unlock(&mutex);

	pthread_exit((void *)soma);
}

int main(long argc, char **argv) {
  

  
    if (argc == 2) {
      NUM_THREADS = atoi (argv[1]);
    }
    
	struct thread_data thread_data_array[NUM_THREADS];
	
	soma = (double *)malloc(NUM_THREADS*sizeof(double));
	
	long rc, t;
	pthread_mutex_init(&mutex, NULL);
	pthread_t threads[NUM_THREADS];
	
	for (t = 0; t < NUM_THREADS; t++)
	{
		thread_data_array[t].tid = t;
		printf("Creating thread %ld\n", t);
		rc = pthread_create(&threads[t], NULL, calcMediaQuad, (void *) &thread_data_array[t]);
		if (rc)
		{
			printf("ERROR: return code from pthread_create() is %ld\n", rc);
			exit(-1);
		}	// end if
	}	// end for
	
	for (t = 0; t < NUM_THREADS; t++) 
	    pthread_join(threads[t], (void **)&soma);

	// deve dar 57735027.351985
	double somaGeral = 0.0;	
	for (t = 0; t < NUM_THREADS; t++)
	{
		somaGeral += soma[t];
	}
	
	double media = sqrt(somaGeral/NUMEROS);
	
	printf("A média é %f: \n", media);		
	
	

	pthread_exit(NULL);
}	// end main()


/* ANÁLISE DE TEMPOS COM 1, 2, 4, 10, 100 E 1000 THREADS */

/*
UMA THREAD
$ time ./a.out 1
Creating thread 0
A média é 57735027.351985: 

real	0m0.942s
user	0m0.924s
sys		0m0.000s

###################################################

DUAS THREADS
$ time ./a.out 2
Creating thread 0
Creating thread 1
A média é 57735027.351982: 

real	0m0.917s
user	0m0.900s
sys		0m0.000s

###################################################

QUATRO THREADS
$ time ./a.out 4
Creating thread 0
Creating thread 1
Creating thread 2
Creating thread 3
A média é 57735027.351981: 

real	0m0.923s
user	0m0.904s
sys		0m0.000s

###################################################

DEZ THREADS
$ time ./a.out 10
Creating thread 0
Creating thread 1
Creating thread 2
...
Creating thread 8
Creating thread 9
A média é 57735027.351979: 

real	0m1.172s
user	0m1.128s
sys		0m0.016s

###################################################

CEM THREADS
$ time ./a.out 100
Creating thread 0
Creating thread 1
Creating thread 2
...
Creating thread 96
Creating thread 97
Creating thread 98
Creating thread 99
A média é 57735027.351976: 

real	0m0.972s
user	0m0.936s
sys		0m0.012s

###################################################

OBS: SÓ FOI POSSIVEL TESTAR ATÉ 380 THREADS
$ time ./a.out 380
Creating thread 0
Creating thread 1
Creating thread 2
...
Creating thread 377
Creating thread 378
Creating thread 379
A média é 57735027.351976: 

real	0m1.006s
user	0m0.916s
sys		0m0.028s

###################################################

MIL THREADS
$ time ./a.out 1000
Creating thread 0
Creating thread 1
Creating thread 2
...
Creating thread 378
Creating thread 379
Creating thread 380
ERROR: return code from pthread_create() is 11

real	0m0.412s
user	0m0.160s
sys		0m0.012s

*/




