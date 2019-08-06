#include <stdio.h>

main()
{
  int i, j, n;
  printf("Introd. um N de ramos: "); scanf("%d", &n);
  
  for (i = 0; i < n; i++)
  {
    for (j = 0; j <= i; j++)
      printf("*");
    putchar('\n');
  }

}