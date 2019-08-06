#include <stdio.h>
#include "stringfunc.h"

main()
{
	printf("%d\n", strlen(""));
	printf("%d\n", strlen("strlen"));
	
	char str[] = "strteste";
	
	strpad(str);
	puts(str);
	
	strrev(str);
	puts(str);
	
	//printf("%d\n", 	indchr(str, 's'));
}
