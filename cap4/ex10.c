#include <stdio.h>

main()
{
  int n;
  
  do {
  printf("Entre com um N: "); scanf("%d", &n);
  } while (n >= 1 && n <= 100);

}