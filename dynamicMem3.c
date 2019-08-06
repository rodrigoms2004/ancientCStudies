#include <stdio.h>
#include <stdlib.h>

int main() {
	int n1, n2, i, *ptr, sum = 0;

	printf("Enter number of elements: ");
	scanf("%d", &n1);
	ptr = (int*)malloc(n1*sizeof(int)); // memory allocated using malloc
	printf("Address of previously allocated memory: ");
	for (i = 0; i < n1; ++i)
		printf("%u\t", ptr+i);

	printf("\nEnter new size of array: ");
	scanf("%d", &n2);
	ptr = realloc(ptr, n2);

	for (i = 0; i < n2; ++i)
		printf("%u\t", ptr+i);

	
	free(ptr);
	return 0;
}
