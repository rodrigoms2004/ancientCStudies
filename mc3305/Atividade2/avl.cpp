#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

typedef struct No *Apontador;

typedef struct No {
	int chave;
	int bal; // hD(no)-hE(no)
	Apontador dir,esq;
	} NoArvore;

bool alt_yes;
Apontador raiz;
int altura=0;
int h=0;

void insere(Apontador novo);
NoArvore* insereReg(int chave, Apontador p, Apontador novo);
NoArvore* caso1(Apontador p);
NoArvore* caso2(Apontador p);
void remove(int chave, Apontador p);
NoArvore* busca(int chave, Apontador p);
void simetrico(Apontador p);
void preordem(Apontador p);
void posordem(Apontador p);
int calculaAltura(Apontador p);
void listaNoEFilhos(Apontador p);

main(){

/*
	for(int i=1; i<=10; i++){
		Apontador novo = (Apontador) malloc(sizeof(NoArvore));
		novo->bal = 0;
		novo->chave = i;
		novo->esq = NULL;
		novo->dir = NULL;
		insere(novo);
	}
*/

	Apontador novo;
	int i = 208; // RA 11070208
	for (int j = i ; j <= i+15; j++)
	{	
		novo = (Apontador) malloc (sizeof(NoArvore));
		novo->bal = 0;
		novo->chave = j;
		novo->esq = NULL;
		novo->dir = NULL;
		insere(novo);
		
		//preordem(novo); cout << "\n";
		
		posordem(novo); cout << " ";
	} // end for
	
	
}

void insere(Apontador novo) {
	//cout << endl << "INSERINDO: " << novo->chave << endl;
	alt_yes = false;

	raiz = insereReg(novo->chave, raiz, novo);
	//cout << "ÁRVORE RESULTANTE: ";
	//listaNoEFilhos(raiz);
}

// insere um nó
NoArvore* insereReg(int chave, Apontador p, Apontador novo) {
	if (p == NULL) {
		p = novo;
		alt_yes = true;
	} else if (chave < p->chave) {
		p->esq = insereReg(chave, p->esq, novo);
		if (alt_yes) { // houve mudança na árvore
			switch (p->bal) { // atualiza p->bal
				case 1:
					p->bal = 0;
					alt_yes = false;
					break;
				case 0:
					p->bal = -1;
					break;
				case -1: // operação de balanceamento
					p = caso1(p);
					break;
			}
		}
	} else if (chave > p->chave) {
		p->dir = insereReg(chave, p->dir, novo);
		if (alt_yes) { // houve mudança na árvore
			switch (p->bal) { // atualiza p->bal
				case 1: // operação de balanceamento
					p = caso2(p);
					break;
				case 0:
					p->bal = 1;
					break;
				case -1:
					p->bal = 0;
					alt_yes = false;
					break;
			}
		}
	} else cout << "Erro! Chave já existente!";
	return p;
}

NoArvore* caso1(Apontador p) {
	Apontador ptu = p->esq;
	if (ptu->bal == -1) {
		p->esq = ptu->dir;
		ptu->dir = p;
		p->bal = 0;
		p = ptu;
	} else {
		Apontador ptv = ptu->dir;
		ptu->dir = ptv->esq;
		ptv->esq = ptu;
		p->esq = ptv->dir;
		ptv->dir = p;
		if (ptv->bal == -1) {
			p->bal = 1;
		} else {
			p->bal = 0;
		}
		if (ptv->bal == 1) {
			ptu->bal = -1;
		} else {
			ptu->bal = 0;
		}
		p = ptv;
	}
	p->bal = 0;
	alt_yes = false;
	return p;
}

NoArvore* caso2(Apontador p) {
	Apontador ptu = p->dir;

	if (ptu->bal == 1) {
		p->dir = ptu->esq;
		ptu->esq = p;
		p->bal = 0;
		p = ptu;
	} else {
		Apontador ptv = ptu->esq;
		ptu->esq = ptv->dir;
		ptv->dir = ptu;
		p->dir = ptv->esq;
		ptv->esq = p;
		if (ptv->bal == 1) {
			p->bal = -1;
		} else {
			p->bal = 0;
		}
		if (ptv->bal == -1) {
			ptu->bal = 1;
		} else {
			ptu->bal = 0;
		}
		p = ptv;
	}
	p->bal = 0;
	alt_yes = false;
	return p;
}

// remove um nó. IMPLEMENTAR!
void remove(int chave, Apontador p) {
	
}

// procura uma chave na lista
NoArvore* busca(int chave, Apontador p) {
	if (p == NULL) {
		return NULL;
	} else if (chave < p->chave) {
		return busca(chave, p->esq);
	} else if (chave > p->chave) {
		return busca(chave, p->dir);
	} else
		return p;
}

// lista todas chaves em modo simétrico
void simetrico(Apontador p) {
	if (p != NULL) {
		simetrico(p->esq);
		cout << p->chave;
		simetrico(p->dir);
	}
}

// lista todas chaves em modo pré-ordem
void preordem(Apontador p) {
	if (p != NULL) {
		cout << p->chave;		
		preordem(p->esq);
		preordem(p->dir);
	}
}

// lista todas chaves em modo pós-ordem
void posordem(Apontador p) {
	if (p != NULL) {
		posordem(p->esq);
		posordem(p->dir);
		cout << p->chave;
	}
}
	
// calcula a altura da árvore
int calculaAltura(Apontador p){	
	if (p==NULL){
		return 0;
	} else {
		int esq = calculaAltura(p->esq);
		int dir = calculaAltura(p->dir);
		if (esq>dir) return esq+1;
		else return dir+1;
	}
}

void listaNoEFilhos(Apontador p) {
	if (p != NULL) {
		int esq = 0, dir = 0;
		if (p->esq != NULL) esq = p->esq->chave;
		if (p->dir != NULL) dir = p->dir->chave;
		
		cout << "Nó: " << p->chave << ", esq: " << esq << ", dir: " << dir << ", bal: " << p->bal << endl;
		listaNoEFilhos(p->esq);
		listaNoEFilhos(p->dir);
	}
}
