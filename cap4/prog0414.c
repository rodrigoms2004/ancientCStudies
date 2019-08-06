#include <stdio.h>

main()
{
  int i, j;
  
  for (i = 1; i <= 10; i++)
  {
    for (j = 1; j <= 10; j++)
    {
      printf("%d ", j);
      if (j == i)
	break;	// já depois de escrever j
    } // end for j
    putchar('\n');
  } // end for i
} // end main