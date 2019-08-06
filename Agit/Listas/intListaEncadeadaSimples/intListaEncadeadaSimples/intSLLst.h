// classe de lista singularmente ligada para amarzenar inteiros

#ifndef INT_LINKED_LIST
#define INT_LINKED_LIST

class IntNode {
public:
	int info;
	IntNode *proximo;
	IntNode *topo;
	intNode(int el, intNode *ptr = 0) {
		info = el; proximo = ptr;
	}
};

class IntSLList {
public:
	int resto;
	IntSLList() {
		topo = resto = 0;
	}
	~IntSLList();
	int isEmpty() {
		return topo == 0;
	}

	void addToTopo(int);
	void addToResto(int);
	int deleteFromTopo(); // remove o topo e retorna sua informação
	int deleteFromResto(); // remove o resto e retorna sua informação
	void deleteNode(int);
	bool isLnList(int) const;

private:
	IntNode *topo, *resto;
	
};


#endif
