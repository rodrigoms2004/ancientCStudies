#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMS 49		/* Total de No's do Jogo */
#define MIN_APOSTA 6 	/* Aposta minima - 6 No's */
#define NUM_LIN 7	/* No de numeros apresentados por linha no volante */

/* Declaração das Funções */
void Inic_Random();
void Inic(int v[NUMS]);
int Ler_Ns_Apostar();
void Gerar(int *v, int n);
void Apresentar(int res[]);

/*
 * Inicia o gerador de numeros aleatorios com um numero que depende
 * da hora que se executa a função
 */

void Inic_Random()
{
	long ultime;
	time(&ultime);
	srand((unsigned) ultime);
}

/* Inicia com ZERO o cvetor de controle dos numeros selecionados */
void Inic(int v[])
{
	int i;
	for (i = 0; i < NUMS; i++)
		v[i] = 0;
}

/*
  Lê o numero de numeros a apostar. Aceita valores entre MIN_APOSTA e NUMS.
  Aceita o valor ZERO para indicar que se quer terminar o Prog
*/

int Ler_Ns_Apostar()
{
	int n;
	do 
	{
		printf("Quantos No's quer apostar (0 - Terminar): ");
		scanf("%d", &n);	
	} // end do  while
	while ((n < MIN_APOSTA || n > NUMS) && n != 0);
}

/*
  Gera n números aleatórios e coloca a respectiva posição do vetor com o    valor 1 que indica que esse numero foi selecionado
*/

void Gerar(int *v, int n)
{
	int i, indice;
	for (i = 0; i <= n; i++)
	{
		indice = rand()%NUMS; /* devolve um numero aleatorio entre 0 						e NUMS-1 */
		if (v[indice] == 0)	/* não foi selecionado */
			v[indice] = 1;
		else			/* este numero já tinha sido selecionado */
			i--;		/* logo decrementa-se o contador 						para voltar a calcular mais uma vez 						o i-ésimo numero aleatorio */
	} // end for
}

/*
Apresenta o formato do volante colocando XX nos numeros selecionados para a aposta
*/

void Apresentar(int res[])
{
	int i;
	for (i = 0; i < NUMS; i++)
	{
		if (res[i] == 0)
			printf(" %2d", i+1);
		else
			printf(" XX");
		if ((i+1)%NUM_LIN == 0) putchar('\n');
	} // end for
	putchar('\n');
}

main()
{
	int vetor[NUMS];
	int n_nums; // Numero de numeros para jogar o jogo 6..49
	
	Inic_Random();
	while(1)
	{
		Inic(vetor);
		if ((n_nums = Ler_Ns_Apostar()) == 0) break;
		Gerar(vetor, n_nums);	// Gerar os numeros a apostar
		Apresentar(vetor);		
	}
}
