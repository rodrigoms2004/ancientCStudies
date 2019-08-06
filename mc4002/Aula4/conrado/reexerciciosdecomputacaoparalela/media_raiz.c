/*
* Author: Conrado 11062711
* Created: Sat 10 Aug 2013 04:54:19 PM BRT
* File: media_raiz.c
* Notes: Este programa calcula a média da soma das raizes quadradas dos
* números entre 1 e "MAMUTE" com N threads. 
*/


#include <stdio.h>
#include <math.h>
#include <pthread.h>
#include <stdlib.h>
#define NUM_THREADS 2
#define MAMUTE 1000000000

pthread_mutex_t mutex;

double soma_total=0;

void *CalcRaiz(void *thread_id){
	long tid =*((long *) thread_id);
	long i;
	double soma=0;
	printf("Thread %ld começando a multiplicar\n",tid);
	for (i=(tid+1);i<=MAMUTE;i+=NUM_THREADS){
		soma+=sqrt(i);
		//printf("thread %ld, soma: %g, i: %ld, sqrt:%g \n",tid, soma, i, sqrt(i));
		}
	pthread_mutex_lock(&mutex);
	soma_total+=soma;
	pthread_mutex_unlock(&mutex);
    pthread_exit(NULL);
	}



int main(){
    long i;
	long *tid;
	tid = (long *) malloc(NUM_THREADS * sizeof(long));
	double resp=0;
    
	pthread_t threads[NUM_THREADS];
    pthread_mutex_init(&mutex,NULL);
	for (i=0;i<NUM_THREADS; i++){
		tid[i]=i;;
		pthread_create(&threads[i],NULL,CalcRaiz,(void *)&tid[i]);
		printf("Criando thread %ld\n",i);
		}
	for (i=0;i<NUM_THREADS; i++)
		pthread_join(threads[i],NULL);
	
	resp=soma_total/MAMUTE;
	
	printf("A media das raizes entre 1 e %d e' %g .\n",MAMUTE, resp);
    
    //Limpando e saindo
	pthread_mutex_destroy(&mutex);
	free(tid);
	pthread_exit(NULL);
	return(0);
	}
