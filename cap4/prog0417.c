#include <stdio.h>

main()
{
  int i, j, n;
  char ch;
  
  printf("Introd. um N: "); scanf("%d", &n);
  printf("Introd. um Char: "); scanf(" %c", &ch);
  
  for (i = 1; i <= n; i++)
  {
    for (j = 0; j <= n; j++)
      putchar(ch);
    putchar('\n');
  }
  
}