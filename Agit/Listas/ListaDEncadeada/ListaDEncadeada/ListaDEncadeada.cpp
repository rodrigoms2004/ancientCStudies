// ListaDEncadeada.cpp : main project file.

#include "stdafx.h"

using namespace std;

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>

using std::string;

#include "ListaDEnc.h"

using ED::ListaDEnc;


int main()
{
	 string str;
	ListaDEnc<string> lista;
	try {
	while (true) {
		cin >> str;
		if (str == "fim") break;
		lista.insere(str);
	}	// end while
/*
	lista.volta_cursor();
	while (lista.tem_proximo()) cout << endl << lista.proximo() << endl;

	cout << "Lista cheia? " << (lista.cheia() ? "Sim" : "Não") << endl;
	cout << "Lista vazia? " << (lista.vazia() ? "Sim" : "Não") << endl; */
	cout << lista.pesquisa("teste") << endl;

	}
	catch (logic_error err) {
		cout << err.what();
	}
   
		
    return 0;
}
