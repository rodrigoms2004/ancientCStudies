#include <stdio.h>

main()
{
  int i, n;
  
  printf("Introd. um N: "); scanf("%d", &n);
  for (i = 1; i <= n; i++)
    printf("%d %d\n", i, n-i+1);
}