#include <stdio.h>
#include <ctype.h>	// usa a função isdigit()
//#include "stringfunc.h"
#include <string.h>

int strlen(char *s)
{
	int i = 0;
	while (s[i] != '\0') // ou for (i = 0; s[i] != '\0'; i++) ;
		i++;			 // linha inexistente com loop for
	return i;
}

int isnull(char *s) 
{
	return (s[0] == '\0'); // ou (strlen(s) == 0);
}

char *strcpy(char *dest, char *orig)
{
	int i;
	for (i = 0; orig[i] != '\0'; i++)
		dest[i] = orig[i];
		
	dest[i] = '\0';
	return dest;
}

char *strcat(char *dest, char *orig)
{
	int i, len;
	for (i = 0, len=strlen(dest); orig[i] != '\0'; i++, len++)
		dest[len] = orig[i];
	dest[len] = '\0';
	return dest;
}


int strcountc(char *s, char ch)
{
	int i, conta;
	for (i = conta = 0; s[i] != '\0'; i++)
		if (s[i] == ch)	/* Se for o caractere que procuramos */
			conta++;	/* Incrementar o contador */
		return conta;	
}

int strcountd(char *s)
{
	int i, conta;
	for (i = conta = 0; s[i] != '\0'; i++)
		if (isdigit(s[i]))	/* Se o caractere for um digito */
			conta++;		/* Incrementa o contador */
		return conta;
}

int indchr(char *s, char ch)
{
	int i;
	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == ch)
			return i;
		return -1;
}

int strpal(char *s)
{
	int i, j;
	for (i = 0, j = strlen(s)-1; i < j; i++, j--)
		if (s[i] != s[j])	/* Se os caracteres não forem iguais */
			return 0;		/* não é palíndromo */
		return 1;
}

char *strrev(char *s)
{
	int i, len;
	char aux;
	for (i = 0, len = strlen(s)-1; i < len; i++, len--)
	{
		aux = s[i];
		s[i] = s[len];
		s[len] = aux;	
	}
	return s;
}

int strcmp(char *s1, char *s2)
{
	/*
		< 0	se s1 é alfabeticamente menor que s2
		0	se s1 e s2 são iguais
		> 0	se s1 é alfabeticamente maior que s2
	*/
	int i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

char *strpad(char *s)
{
	int i = strlen(s);
	s[2*i] = s[i];	/* Colocar o delimitador na nova posição */
	for (i--; i >= 0; i--)
	{
		s[2*i] = s[i];
		s[2*i+1] = ' ';
	}
	return s;
}

char *strdelc(char *s, char ch)
{
	int i, j;
	for (i = j = 0; s[i] != '\0'; i++)
		if (s[i] != ch)
			s[j++] = s[i];
		s[j] = '\0';
		return s;
}


