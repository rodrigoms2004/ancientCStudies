#include <stdio.h>

#define NUM 10

void inic(int s[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		s[i] = 0;
}

main()
{
	int v[NUM], i;

	
	inic(v,NUM);
	
	for (i = 0; i < NUM; i++)
		v[i] = i;
	
	for (i = NUM-1; i >= 0; i--)
		printf("Elementos: %d\n", v[i]);


}
