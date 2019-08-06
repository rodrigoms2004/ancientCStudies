#include <stdio.h>

main()
{
  int i;
  char ch;
  
  for (i = 0; i <= 255; i++)
  {
    printf("%3d -> %c\n", i, (char) i);
    if (i%20 == 0) 
    {
      do 
      {
	printf("Precione c ou C para continuar...");
	scanf(" %c", &ch);
      } while (ch != 'c' && ch != 'C');
      
    } // end if

  } // end for

} // end main()