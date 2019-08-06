#include <pthread.h>
#include <stdio.h>
#define NUM_THREADS 5

void *PrintHello(void *param)
{
	printf("Hello World! It's me!\n");
	pthread_exit(NULL);
}

int main (int argc, char *argv[])
{
	long t;
	pthread_t threads[NUM_THREADS];
	for (t = 0; t < NUM_THREADS; t++)
	{
		printf("In main: creating thread %ld\n", t);
		pthread_create(&threads[t], NULL, PrintHello, NULL);
	}
	pthread_exit(NULL);
}
