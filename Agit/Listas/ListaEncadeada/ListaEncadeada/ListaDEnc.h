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
		void insere(Tipo el);				throw (logic_error);
		void insere_pos(Tipo el, int pos)	throw (logic_error);
		void remove(Tipo el)				throw (logic_error);
		void remove_pos(int pos)			throw (logic_error);
		Tipo elemento(int pos)				throw (logic_error);
		int pesquisa(Tipo el);

		// Métodos auxiliares

	private:
		struct Celula {
			Tipo el;
			Celula *prox, *ant, *pc;
		};
		Celula *ini;
		using int nelem;
	
	};	// end class

	// construtor
	template <typename Tipo>
	ListaDEnc<Tipo>::ListaDEnc() {
		ini = new Celula;
		ini->ant = ini->prox = pc = ini;
		nelem = 0;
	}

	// destrutor
	template <typename Tipo>
	ListaDEnc<Tipo>::~ListaDEnc() {
	//
	}

	template <typename Tipo>
	ListaDEnc<Tipo>::insere_pos(Tipo el, int pos) {
		
		Celula *aux = new Celula;
		aux = ini->prox
			for (int i = 0; i < pos; i++)
				aux = aux->prox;
		Celula *nova = new Celula;
		nova->prox = aux;
		nova->ant = aux->ant;
		aux->ant->prox = nova;
	}


}	// end namespace

#endif
