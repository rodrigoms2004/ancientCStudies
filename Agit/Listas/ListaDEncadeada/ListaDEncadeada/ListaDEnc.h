#ifndef _ListaDEnc_H
#define _ListaDEnc_H

#include <stdexcept>

using std::logic_error;


namespace ED {

	template <typename Tipo>
	class ListaDEnc {
	public:
		ListaDEnc();
		~ListaDEnc();

		// Métodos principais
		void insere(Tipo el)				throw (logic_error);
		void insere_pos(Tipo el, int pos)	throw (logic_error);
		void remove(Tipo el)				throw (logic_error);
		void remove_pos(int pos)			throw (logic_error);
		Tipo elemento(int pos)				throw (logic_error);
		int pesquisa(Tipo el);

		// Métodos auxiliares

	private:
		struct Celula {
			Tipo el;
			Celula *prox, *ant;
		};
		Celula *ini, *prox;
		int nelem;
	
	};	// end class

	// construtor
	template <typename Tipo>
	ListaDEnc<Tipo>::ListaDEnc() {
		ini = new Celula;
		ini->ant = ini->prox = prox = ini;
		nelem = 0;
	}

	// destrutor
	template <typename Tipo>
	ListaDEnc<Tipo>::~ListaDEnc() {
		Celula *aux;
		while (ini)  {
			aux = ini;
			ini = ini->prox;
			delete(aux);
		}
	}

	template <typename Tipo>
	void ListaDEnc<Tipo>::insere_pos(Tipo el, int pos) {
		
		Celula *aux;
		aux = ini->prox
			for (int i = 0; i < pos; i++)
				aux = aux->prox;
		Celula *nova = new Celula;
		nova->el = el;
		nova->prox = aux;
		nova->ant = aux->ant;
		aux->ant->prox = nova; // ???
		aux->ant = nova;
		nelem++;
		
		//delete (nova);
	}
	
	template <typename Tipo>
	void ListaDEnc<Tipo>::remove_pos(int pos) {
		Celula *aux;
		aux = aux->ini;	
		for (int i = 0; i < pos; i++)
			aux = aux->prox;
		aux->ant->prox = aux->prox;
		aux->prox->ant = aux->ant;
		delete aux;
		nelem--;
	}

	template <typename Tipo>
	void ListaDEnc<Tipo>::insere(Tipo el) {
		Celula *nova = new Celula;	
		nova->el = el;
		nova->prox = ini;
		nova->ant = ini->ant;
		ini->ant->prox = nova;
		//ini->ant = nova;
		nelem++;
	}

	template <typename Tipo>
	int ListaDEnc<Tipo>::pesquisa(Tipo el) {
		Celula *aux;
		ini->prox;
		int pos = 1;
		while ((aux != ini) && (aux->el != el)) {
			aux = aux->ant;
			pos++;
		}
		if (aux == ini) return (-1);
		return (pos);
	}

}	// end namespace

#endif
