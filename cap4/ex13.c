#include <stdio.h>

main()
{
  int x1, x2, i1, i2;
  i1 = i2 = 5;
  
  x1 = ++i1;
  x2 = i2++;

  printf("x1 = %d \n x2 = %d\n", x1, x2);
}