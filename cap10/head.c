#include <stdio.h>
#include <stdlib.h>

#define MAX_LIN 80
#define SINAL '-'

void Erro_Fatal(int num_erro, char *string);


int main(int argc, char *argv[])
{
	FILE *fp = stdin;	// stdin por padrão
	char s[MAX_LIN];	// String 
	int i = 0;				// nenhuma linha foi processada ainda
	int n_lins = 10;	// 10 linhas: por padrão
	
	switch(argc)
	{
		case 1: break;
		case 2: 
			if (argv[1][0] == SINAL)
				n_lins = atoi(argv[1]+1);
			else
				if ((fp = fopen(argv[1], "r")) == NULL)
					Erro_Fatal(2, argv[1]);
			break;
		case 3:
			if (argv[1][0] != SINAL)
				Erro_Fatal(1, "");
			else
				{
					n_lins = atoi(argv[1]+1);
					if ((fp = fopen(argv[1], "r")) == NULL)
						Erro_Fatal(2, argv[1]);
				}	// end else
				break;
		default: Erro_Fatal(1, "");
	}	// end switch

	while(fgets(s, MAX_LIN+1, fp) != NULL && i++ < n_lins)
		printf(s);	// ou fputs(s, stdout);
		
	fclose(fp);
	

}	// end main



void Erro_Fatal(int num_erro, char *string)
{
	switch(num_erro)
	{
		case 1: // mostrar sintaxe
			fprintf(stderr, "Sintaxe:\n\nhead [-n] [Arq]\n\n");
			break;
		case 2: // Erro de abertura no arquivo
			fprintf(stderr, "Imp. Abrir o arquivo '%s'\n", string);
			break;
	}	// end switch
	exit(num_erro);

}	// end Erro_Fatal


