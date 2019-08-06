#include <stdio.h>

int x_toupper(char ch)
{
	if (ch >= 'a' && ch <= 'z') /* se minuscula */
		return ch + 'A' - 'a';
	else
		return ch;	/* devolve a própria */
}

/* Escreve todos os caracteres em maiusculas */

main() 
{
	char c;
	while(1) /* Termina com CTRL+C */
	{
		c = getchar();
		putchar(x_toupper(c));
	}
}
