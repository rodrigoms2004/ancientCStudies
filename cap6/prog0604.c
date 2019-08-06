#include <stdio.h>

void inic(int s[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		s[i] = 0;
}

main()
{
	int v[10], i;

	
	inic(v,10);
	
	for (i = 0; i < 10; i++)
		v[i] = i;
	
	for (i = 0; i < 10; i++)
		printf("Elementos: %d\n", v[i]);


}
