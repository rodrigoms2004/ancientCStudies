// ListaSequencial.cpp : main project file.

#include "stdafx.h"

using namespace System;

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include "ListaSeq.h"
using ED::ListaSeq;


int main(array<System::String ^> ^args)
{
    string str;
	ListaSeq<string> lista(100);
	while (true) {
		cin >> str;
		if (str == "fim") break;
		lista.insere(str);
	}	// end while

	lista.volta_cursor();
	while (lista.tem_proximo()) cout << endl << lista.proximo() << endl;

	cout << "Lista cheia? " << (lista.cheia() ? "Sim" : "Não") << endl;
	cout << "Lista vazia? " << (lista.vazia() ? "Sim" : "Não") << endl;
	cout << lista.pesquisa("teste") << endl;



    return 0;
}
