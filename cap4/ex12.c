#include <stdio.h>

main()
{
  int n1, n2, i;
  
  printf("Introduza doi N: "); 
  scanf("%d %d", &n1, &n2);
  
  for (i = n1; i <= n2; i++)
    printf("%3d -> %c\n", i, (char) i);
}