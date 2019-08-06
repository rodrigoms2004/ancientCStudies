#include <stdio.h>

main()
{
  char ch;
  printf("Introduza um caractere: ");
  scanf("%c", &ch);
  printf("O caractere '%c' tem ASCII n %d\n", ch, (int) ch);
}