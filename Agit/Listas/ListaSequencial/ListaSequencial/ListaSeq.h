#ifndef _ListaSeq_H
#define _ListaSeq_H

#include <stdexcept>

using std::logic_error;

namespace ED {

	template <typename Tipo>
	class ListaSeq {
	public:
		ListaSeq(int size);
		~ListaSeq();

		// Métodos principais
		void insere(Tipo el)				throw(logic_error);
		void insere_pos(Tipo el, int pos)	throw(logic_error);
		void remove(Tipo el)				throw(logic_error);
		void remove_pos(int pos)			throw(logic_error);
		Tipo elemento(int pos)				throw(logic_error);
		int pesquisa(Tipo el);

		// Métodos auxiliares
		void volta_cursor();
		bool tem_proximo();
		Tipo proximo();
		bool vazia();
		bool cheia();

	private:
			Tipo *vetor;
			int ult, pos, nelem, size;

	};	// end class

	// Construtor
	template <typename Tipo>
	ListaSeq<Tipo>::ListaSeq(int size) {
		vetor = new Tipo[size];
		pos = ult = -1;
		nelem = 0;
	}

	// Destrutor
	template <typename Tipo>
	ListaSeq<Tipo>::~ListaSeq() {
		delete [] vetor;
	}

	template <typename Tipo>
	void ListaSeq<Tipo>::insere(Tipo el) {
		if (nelem == size) throw logic_error("Lista cheia");
		ult++;
		vetor[ult] = el;
	}

	template <typename Tipo>
	void ListaSeq<Tipo>::insere_pos(Tipo el, int pos) {
		if (nelem == size) throw logic_error("Lista cheia");
		if ((pos < 0) || (pos > ult))
			throw logic_error("Posição inválida");
		
		for (int i = ult; i >= pos; i--)
			vetor[i+1] = vetor[i];
		ult++;
		vetor[pos] = el;
		nelem++;
	}
	
	template <typename Tipo>
	void ListaSeq<Tipo>::remove(Tipo el) {
		if (nelem==0) throw logic_error("Lista vazia");
		for (int p = 0; p <= ult; p++)
			if (vetor[p] == el) break;
		if (p > ult) throw logic_error("Não está na lista");
		for (i = p; i < ult; i--)
			vetor[i] = vetor [i+1];
		ult--;
		nelem--;
	// conquer bad fur day
	}
	
	template <typename Tipo>
	void ListaSeq<Tipo>::remove_pos(int pos) {
		if (nelem == 0) throw logic_error("Lista vazia");
		if ((pos < 0) || (pos > ult))
			throw logic_error("Posição inválida");

		for (int i = pos; i < ult; i++)
			vetor[i] = vetor[i+1];
		ult--;
		nelem--;
	}
	
	template <typename Tipo>
	int ListaSeq<Tipo>::pesquisa(Tipo el) {
		for (int i = 0; i <= ult; i++)
			if (vetor[i] == el) return (i);
		return (-1);
	}
	
	template <typename Tipo>
	void ListaSeq<Tipo>::volta_cursor() {
		pos = -1;
	}
	
	template <typename Tipo>
	bool ListaSeq<Tipo>::tem_proximo() {
		return (pos != ult);	
	}
	
	template <typename Tipo>	
	Tipo ListaSeq<Tipo>::proximo() {
		if (pos == ult) throw logic_error("Não há próximo");

		pos++;
		return (vetor[pos]);
	}

	template <typename Tipo>
	bool ListaSeq<Tipo>::vazia() {
		return (nelem == 0);
	}
	
	template <typename Tipo>
	bool ListaSeq<Tipo>::cheia() {
		return (nelem == size);
	}

}	// end namespace


#endif 