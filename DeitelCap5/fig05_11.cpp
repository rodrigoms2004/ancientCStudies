// imprimindo um string, um caractere de cada vez,
// usando um ponteiro não-constante para dados constantes
#include <iostream>

using namespace std;

void printCharacteres(const char *);

int main()
{
	char string[] = "imprime os caracteres de um string";
	
	cout << "O string é:\n";
	printCharacteres(string);
	cout << endl;
	return 0;
}

// em printCharacteres, sPtr não pode modificar o caractere
// para o qual ele aponta. sPtr é um ponteiro "somente para leitura"

void printCharacteres(const char *sPtr)
{
	for ( ; *sPtr != '\0'; sPtr++)	// nenhuma inicialização
		cout << *sPtr;
}




