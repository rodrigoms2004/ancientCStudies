// Copiando um string usando notação de array e notação de ponteiro.
#include <iostream>

using namespace std;

void copy1(char *, const char *);
void copy2(char *, const char *);

int main()
{
	char string1[10], *string2 = "Olá !",
	     string3[10], string4[] = "Tchau !";

	copy1(string1, string2);
	cout << "string1 = " << string1 << endl;

	copy2(string3, string4);
	cout << "string3 = " << string3 << endl;

	return 0;

}	// end main

// copia s2 para s1 usando notação de array
void copy1(char *s1, const char *s2)
{
	for (int i = 0; (s1[i] = s2[i]) != '\0'; i++)
		;	// não faz nada no corpo do for
}

void copy2(char *s1, const char *s2)
{
	for ( ; (*s1 = *s2) != '\0'; s1++, s2++)
		;	// não faz nada no corpo do for

}

