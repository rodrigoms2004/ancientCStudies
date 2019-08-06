#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define N_PROD 1
#define N_CONS 1

#define N_NUMBERS 1000

#define BUFFER_SIZE 10

pthread_mutex_t mutex;


int *buffer;
int count;

int produzItem (int base) {
  usleep(100);
  return base;
}

int consomeItem (int item) {
  usleep(100);
  return item;
}

void *produtor(void *param) {

  int k=1, in=0;

  while ( k<=N_NUMBERS ) {
    while (count == BUFFER_SIZE)
      ; // não faz nada    
    int item = produzItem (k);
    buffer[in] = item;
    in = (in + 1) % BUFFER_SIZE;
 
    pthread_mutex_lock(&mutex);
    count++;
    pthread_mutex_lock(&mutex);
    
    k++;
  }
  
  pthread_exit(NULL);
}

void *consumidor(void *param) {

  int k=1, out=0;
  double mean=0;

  while (k<=N_NUMBERS) {
    while (count == 0)
      ; // não faz nada

    int item =  buffer[out];
    out = (out + 1) % BUFFER_SIZE;
 
    pthread_mutex_lock(&mutex);
    count--; // controla o numero de itens no BUFFER
    pthread_mutex_unlock(&mutex);
 
    mean += consomeItem (item);
    k++;
  }
  mean /= N_NUMBERS;

  printf ("Consumer: Mean value is %.1f.\n", mean);    

  pthread_exit(NULL);
}

int main (int argc, char *argv[])
{
    buffer = (int *)malloc( BUFFER_SIZE * sizeof(int) );

	pthread_mutex_init(&mutex, NULL);

    /* Insira aqui o código para criar as threads */
	pthread_t prod_t;
	pthread_create(&prod_t, NULL, produtor, NULL);

	pthread_t cons_t;
	pthread_create(&cons_t, NULL, consumidor, NULL);
	
    printf ("Main(): Launched all threads.\n");

	//free(buffer);

    /* Clean up and exit */
    pthread_exit(NULL);   

   	pthread_mutex_destroy(&mutex);
    
}
