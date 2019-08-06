#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#define NUM_THREADS 100

pthread_mutex_t mutex;
int count = 0;

void leBancoDeDados() {
  usleep(100*1000); // 100ms
  printf("Lendo banco de dados, theads: %d\n", count);
}

void *leitor(void *param) 
{
  pthread_mutex_lock (&mutex);
  leBancoDeDados();
  pthread_mutex_unlock (&mutex);
}

int main (int argc, char *argv[]) 
{

  pthread_t threads[NUM_THREADS];
  pthread_mutex_init (&mutex,NULL);
  long t;
  for(t=0; t<NUM_THREADS; t++)
    pthread_create(&threads[t],NULL,leitor,NULL);

  pthread_exit(NULL);    

  printf("Programa finalizado com sucesso!\n");
}
