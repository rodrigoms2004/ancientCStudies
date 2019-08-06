#include <stdio.h>

main()
{
  // A..Z -> 65..90
  
  int i, j, n;
  int asciiCode = 65;
  
  printf("Introd. um N de ramos: "); scanf("%d", &n);
  
  
  for (i = 0; i < n; i++)
  {
    for (j = 0; j <= i; j++) 
    {
      printf("%c", (char) asciiCode);
    } // end for j
    
    putchar('\n');
    asciiCode++;
    
    if (asciiCode > 90) 
      asciiCode = 65;
  } // end for i

} // end main()