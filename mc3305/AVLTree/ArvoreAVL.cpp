// ArvoreAVL.cpp : main project file.

//#include <stdafx.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

#include <iostream>
//using std::cout;
//using std::endl;

#include "AVLTree.h"

using ED::AVLTree;

int main()//array<System::String ^> ^args)
{
	   AVLTree<int> a;
	

		srand(1);

	   for (int i = 0; i < 1024; i++) {
		   a.insere(rand());
	   }	// end for
	   
	   
	   cout << "Expoente = " << 10 << " - altura da arvore: " << a.printH() << endl;
	   cout << "Razao expoente / tamanho da arvore: " << 10 / (double)a.printH() << endl;
	   a.desalocarArvore();

	   for (int i = 0; i < 32767; i++) {
		   a.insere(rand());
	   }	// end for
	   cout << "Expoente = " << 15 << " - altura da arvore: " << a.printH() << endl;
	   cout << "Razao expoente / tamanho da arvore: " << 15 / (double)a.printH() << endl;

	    for (int i = 0; i < 1048575; i++) {
		   a.insere(rand());
	   }	// end for
	   cout << "Expoente = " << 20 << " - altura da arvore: " << a.printH() << endl;
	   cout << "Razao expoente / tamanho da arvore: " << 20 / (double)a.printH() << endl;
  
		for (int i = 0; i < 4194303; i++) {
		   a.insere(rand());
		}	// end for
		cout << "Expoente = " << 22 << " - altura da arvore: " << a.printH() << endl;
	   cout << "Razao expoente / tamanho da arvore: " << 22 / (double)a.printH() << endl;

    return 0;
}
