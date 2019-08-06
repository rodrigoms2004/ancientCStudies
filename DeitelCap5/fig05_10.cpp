// convertendo letras minusculas para letras maiusculas
// usando um ponteiro não-constante para dados não constantes 

#include <iostream>

using namespace std;

#include <cctype>

void convertToUppercase(char *);

int main()
{
	char string[] = "caracteres e $32,98";

	cout << "O string anted da conversão é: " << string;
	convertToUppercase(string);
	cout << "\nO String depois da conversão é: " << string << endl;

	return 0;
}

void convertToUppercase(char *sPtr)
{
	while(*sPtr != '\0')
	{
		if (islower(*sPtr))
			*sPtr = toupper(*sPtr);	// converte para maiúsculas

		++sPtr;	// move sPtr para o próximo caractere
	} // end while
} // end convertToUppercase
