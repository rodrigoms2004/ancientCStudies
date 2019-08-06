#include <stdio.h>

#define DIM 3
#define ESPACO ' '

void inic(char s[][DIM]) /* Omitir uma dimensão */
{
  int i, j;
  for (i = 0; i < DIM; i++)
    for (j =0; j < DIM; j++)
      s[i][j] = ESPACO;
}

void mostra(char s[DIM][DIM])  /* Ambas as Dimensões */
{
  int i, j;
  for (i = 0; i < DIM; i++)
  {
    for (j = 0; j < DIM; j++)
      printf("%c %c", s[i][j], j == DIM-1?' ':'|');
    if (i != DIM-1) printf("\n--------\n");
    putchar('\n');
  }  // end for i
}

main()
{
  char Velha[DIM][DIM];
  int posx, posy;
  char ch = 'O'; // Caractere para jogar
  int n_jogadas = 0;

  inic(Velha);
  while(1)  // laço infinito
  {
    mostra(Velha);
    printf("\nIntroduza a Posição de Jogo Linha Coluna: ");
    scanf("%d %d", &posx, &posy);
    posx--; posy--; // pois os índices do vetor começam em 0
    
    if (Velha[posx][posy]==ESPACO)// casa livre
      {
	Velha[posx][posy] = ch = (ch == 'O') ? 'X' : 'O';
	n_jogadas++;
      } // end if
    else
      printf("Posição já ocupada\nJogue Novamente!!!\n");
    if (n_jogadas == DIM*DIM)
    break; // acabar o Programa 
  } // end while
  mostra(Velha);
}


