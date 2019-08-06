#include <pthread.h>
#include <stdio.h>
#define NUM_THREADS 5

void *PrintHello(void *threadid)
{
	long tid = *((long *)threadid); // faz casting
	printf("Hello World! It's me, thread #%ld!\n", tid);
	pthread_exit(NULL);
}

int main (int argc, char *argv[])
{
	pthread_t threads[NUM_THREADS];
	long tid[NUM_THREADS]; // usa variável da stack em vez da heap
	long t;
	for (t = 0; t < NUM_THREADS; t++)
	{
		tid[t] = t;
		printf("In main: creating thread %ld\n", t);
		pthread_create(&threads[t], NULL, PrintHello, (void *)&tid[t]);
	}
	pthread_exit(NULL);
}
