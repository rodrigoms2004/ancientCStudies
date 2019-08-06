/*
* Author: Conrado 11062711
* Created: Mon 12 Aug 2013 03:14:49 PM BRT
* File:readers.c 
* Notes: Este programa faz o acesso a um banco de dados com threads, permitindo 10
* acessos por vez.
*/


#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#define NUM_THREADS 100

pthread_mutex_t mutex[10];
int count = 0;

void leBancoDeDados() {
  usleep(100*1000); // 100ms
}

void *leitor(void *param) 
 {
  long tid= *((long *)param);
  pthread_mutex_lock (&mutex[(tid%10)]);
  leBancoDeDados();
  pthread_mutex_unlock (&mutex[tid%10]);
  pthread_exit(NULL);
}

int main (int argc, char *argv[]) 
{ 
  long t;
  long *tid = (long *) malloc (NUM_THREADS*sizeof(long));
  pthread_t threads[NUM_THREADS];
  for(t=0;t<10;t++)
  	pthread_mutex_init (&mutex[t],NULL);
  for(t=0; t<NUM_THREADS; t++){
	  tid[t]=t;
	  pthread_create(&threads[t],NULL,leitor,&tid[t]);
  }
  for(t=0;t<NUM_THREADS;t++)
	  pthread_join(threads[t],NULL);
  printf("Programa finalizado com sucesso!\n");
  pthread_exit(NULL);    
}
