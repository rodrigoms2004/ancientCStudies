/* Exercicio para entrega numero 3 */
/* compilar usando gcc readersBarreira.c -lpthread */
/* usar com ./a.out */

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#define NUM_THREADS 10

pthread_mutex_t mutex;	// cria o mutex
pthread_cond_t cond;	// cria a condição
int count = 0;

void leBancoDeDados() {
  usleep(100*1000); // 100ms
  printf("Lendo banco de dados, theads: %d\n", count);
}

void *leitor(void *param) 
{

	pthread_mutex_lock(&mutex); // thread entra e trava o mutex
	count++;					// incrementa o numero de threads
	if (count < NUM_THREADS) // até que todas as threads cheguem
	{
		pthread_cond_wait(&cond, &mutex); // coloca a thread para dormir
	}
	pthread_mutex_unlock(&mutex); // primeira thread liberada
	
    leBancoDeDados(); // realiza o acesso ao BD
   
    pthread_mutex_lock(&mutex); // thread trava mutex
		count--;				// decrementa numero de threads
		pthread_cond_signal(&cond); // libera próxima thread

    pthread_mutex_unlock(&mutex); // thread destrava mutex
	
	pthread_exit(NULL);
	
/* código original de *leitor()
  pthread_mutex_lock (&mutex);
  leBancoDeDados();
  pthread_mutex_unlock (&mutex);
  */
}

int main (int argc, char *argv[]) 
{

  pthread_t threads[NUM_THREADS];
  pthread_mutex_init (&mutex,NULL);
  pthread_cond_init(&cond, NULL);
  
  long t;
  for(t=0; t<NUM_THREADS; t++)
    pthread_create(&threads[t],NULL,leitor,NULL);

  pthread_exit(NULL);    

  printf("Programa finalizado com sucesso!\n");
}

/* ANÁLISE DOS TEMPOS */

/*

$ time ./a.out 
Lendo banco de dados, theads: 10
Lendo banco de dados, theads: 9
Lendo banco de dados, theads: 8
Lendo banco de dados, theads: 7
Lendo banco de dados, theads: 6
Lendo banco de dados, theads: 5
Lendo banco de dados, theads: 4
Lendo banco de dados, theads: 3
Lendo banco de dados, theads: 2
Lendo banco de dados, theads: 1

real	0m1.024s
user	0m0.004s
sys	0m0.000s

*/

