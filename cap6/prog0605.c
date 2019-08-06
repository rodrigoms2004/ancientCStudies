#include <stdio.h>

const int num = 10;

void inic(int s[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		s[i] = 0;
}

main()
{
	int v[num], i;

	
	inic(v,num);
	
	for (i = 0; i < num; i++)
		v[i] = i;
	
	for (i = num-1; i >= 0; i--)
		printf("Elementos: %d\n", v[i]);


}
