int strlen(char *s); // retorna tamanho da string
int isnull(char *s); // verifica se a string está vazia
char *strcpy(char *dest, char *orig); // copia uma string em outra
char *strcat(char *dest, char *orig); // copia uma string no final de outra string
int strcountc(char *s, char ch); // devolve o numero de ocorrencias do caractere ch na string s
int strcountd(char *s); // devolve o numero de digitos ne string s
int indchr(char *s, char ch); // devolve o índice da primeira ocorrência do caractere ch na string s
int strpal(char *s); // verifica se a string é um palíndromo, palavra que pode ser lida da mesma forma da esquerda para a direita e da direita para a esquerda
char *strrev(char *s); // devolve a string invertida
int strcmp(char *s1, char *s2);	// compara as strings s1 e s2 alfabeticamente
char *strpad(char *s); // coloca um caractere em branco após cada um dos caracteres da string s
char *strdelc(char *s, char ch); // apaga todas as ocorrencias do caractere ch na string s

