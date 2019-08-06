#ifndef _AVLTree_H
#define _AVLTree_H

#include <stdexcept>

using std::logic_error;

namespace ED {

	template <typename Tipo>
	class AVLTree {
	private:
		
		struct Celula {
			Tipo el;
			Celula *esq, *dir;
			unsigned char h; // Altura da subarvore
			char b;	// balanceamento da subarvore
			Celula() {	// Construtor
				esq = dir = NULL;
				h = 1; b = 0;
			}
		};
			Celula *T;
		unsigned int nelem;

		void atualiza(Celula *&x);
		void rotateRight(Celula *&x);
		void rotateLeft(Celula *&x);
		void balanceia(Celula *&x);
		void ins(Celula* &x, Tipo &el);
		void apagaTudo(Celula* &x);
		void inorder_Walk(Celula *x);
		int alt(Celula *x);

	public:
		AVLTree();
		~AVLTree();
		void insere(Tipo el);
		void printTree();
		void removeElemento(Tipo el) ;//throw (logic_error);
		int printH();
		void desalocarArvore();

	};	// end class

	template <typename Tipo>
	AVLTree<Tipo>::AVLTree() {
		T = NULL;
		nelem = 0;
	}	// end construtor

	template <typename Tipo>
	AVLTree<Tipo>::~AVLTree() {
		apagaTudo(T);
	}	// end destrutor

	// metodos privados
	
	template <typename Tipo>
	void AVLTree<Tipo>::atualiza(Celula *&x) {

		unsigned char hesq= x->esq? x->esq->h:0;
		unsigned char hdir= x->dir? x->dir->h:0;
		x->b = hesq - hdir;
		x->h = 1 + (hesq > hdir? hesq : hdir);
	}	// end atualiza
	
	template <typename Tipo>
	void AVLTree<Tipo>::rotateRight(Celula *&x) {
	
		Celula *aux = x; // aux vai apontar para a antiga raiz
		x = x->esq; // A nova raiz passa a ser o filho a esquerda de X
		aux->esq = x->dir; // Fi. esq da antiga raiz passa a ser b
		x->dir = aux; // Fi. dir da nova raiz passa a ser a antiga raiz
		atualiza(aux); // Atualiza a antiga raiz
		atualiza(x); // Atualiza a nova raiz
	}	// end rotateRight

	template <typename Tipo>
	void AVLTree<Tipo>::rotateLeft(Celula *&x) {

		Celula *aux = x; // aux vai apontar para a antiga raiz
		x = x->dir; // A nova raiz passa a ser o filho a direita de X
		aux->dir = x->esq; // Fi. dir da antiga raiz passa a ser b
		x->esq = aux; // Fi. esq da nova raiz passa a ser a antiga raiz
		atualiza(aux); // Atualiza a antiga raiz
		atualiza(x); // Atualiza a nova raiz
	}	// end rotateLeft


	template <typename Tipo>
	void AVLTree<Tipo>::balanceia(Celula *&x) {
		
		if (x->b == 2) {
			if (x->esq->b == -1) rotateLeft(x->esq);
			rotateRight(x);
		}	// end if
		else if (x->b == -2) {
			if (x->dir->b == 1) rotateRight(x->dir);
		rotateLeft(x);
		}	// end if
	}	// end balanceia

	template <typename Tipo>
	void AVLTree<Tipo>::ins(Celula* &x, Tipo &el) {
		
		if (!x) {
			x = new Celula;
			x->el = el;
			nelem++;
		}	// end if
		else {
			if (x->el >= el) ins(x->esq, el);
			else ins(x->dir, el);
			atualiza(x);
			balanceia(x);
		}	//end else
	}	// end ins
	
	template <typename Tipo>
	void AVLTree<Tipo>::apagaTudo(Celula* &x) {
		if (!x) return;		// trata do caso trivial
		
		apagaTudo(x->esq);
		apagaTudo(x->dir);
		delete x;
	}	// end apagaTudo


	template <typename Tipo>
	void AVLTree<Tipo>::inorder_Walk(Celula *x) {
		if (x == NULL) return;
		inorder_Walk(x->esq);
		cout << "Element: " << x->el << endl;
		inorder_Walk(x->dir);
	}	// end inorder_Walk

	template <typename Tipo>
	int AVLTree<Tipo>::alt(Celula *x) {
		if (!x) return 0; // caso trivial

		int hesq = alt(x->esq);
		int hdir = alt(x->dir);
		return (hesq>hdir ? hesq+1 : hdir+1);
	}	// end alt

// metodos publicos

	template <typename Tipo>
	void AVLTree<Tipo>::insere(Tipo el) {
		ins(T, el);
	}	// end insere

	template <typename Tipo>
	void AVLTree<Tipo>::printTree() {
		inorder_Walk(T);

	}	// end printTree

	template <typename Tipo>
	void AVLTree<Tipo>::removeElemento(Tipo el) {
		Celula **p = &T;
			while (*p != NULL)
				if ((*p)->el > el) p = &((*p)->esq);
				else if ((*p)->el < el) p = &((*p)->dir);
				else break;
			
				
				if (*p == NULL) throw logic_error("elemento não encontrado");

				Celula *aux = *p;

				if ((*p)->esq == NULL) *p = (*p)->dir;
				else if ((*p)->dir == NULL) *p = (*p)->esq;
				else {
					p = &((*p)->esq);
					while ((*p)->dir != NULL) p = &((*p)->dir);
					aux->el = (*p)->el;
					aux = *p;
					*p = (*p)->esq;
				}
			delete aux;
			balanceia(T);
			atualiza(T);
			nelem--;
	}	// end removeElemento

	template <typename Tipo>
	int AVLTree<Tipo>::printH() {
		//return hTree(T);
		return alt(T);
	}	// end printH

	template <typename Tipo>
	void AVLTree<Tipo>::desalocarArvore() {
		apagaTudo(T);
		T = NULL;
	}	// end desalocarArvore

	
}	// end namespace



#endif
