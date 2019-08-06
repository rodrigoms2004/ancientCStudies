/*
Montar uma lista ligada de estruturas, onde cada
estrutura contém um int indetificador e um ponteiro
para a próxima estrutura. Depois imprimir o indice da
estrutura e acessar o indice da próxima estrutura e
imprimir o indice dela na tela também.
*/

#include <stdio.h>
#include <stdlib.h>

#define nElementos 10


struct lista
{
	int id;
	struct lista * prox;
};

typedef struct lista Lista;

Lista* lst_cria(void);
Lista* lst_insereMetodo1(Lista* l, int i);
void lst_insereMetodo2(Lista** l, int i);
void lst_imprime(Lista* l);
bool lst_vazia(Lista* l);

void main()
{
	Lista* l; 		// declara lista não inicializada
	l = lst_cria();	// cria e inicializa lista como vazia
	int i;
	
	for (i = 0; i < nElementos; i++)
		l = lst_insereMetodo1(l, i);


	for (i = 0; i < nElementos; i++)
		lst_insereMetodo2(&l, i);
	
	lst_imprime(l);
	
	
}	// end main




/* função de criação: retorna uma lista vazia */
Lista* lst_cria(void)
{
	return NULL;
	
}	// end lst_cria()

/* inserção no início: retorna a lista atualizada */
Lista* lst_insereMetodo1(Lista* l, int i) 
{
	Lista* novo = (Lista*)malloc(sizeof(Lista));
	novo->id = i;
	novo->prox = l;
	return novo;
	
}	// end lst_insereMetodo1()

void lst_insereMetodo2(Lista** l, int i)
{
	Lista* novo = (Lista*)malloc(sizeof(Lista));
	novo->id = i;
	novo->prox = *l;
	*l = novo;
	
}	// end lst_insereMetodo2()

/* percorre os elementos da lista */
void lst_imprime(Lista* l)
{
	Lista* p;
	
	for (p = l; p != NULL; p = p->prox)
		printf("ID de lista %d\n", p->id);
		
}	// end lst_imprime()

/* retorna true se vazia e false se não vazia */
bool lst_vazia(Lista* l)
{
	return (l == NULL)
	
}	// lst_vazia()
