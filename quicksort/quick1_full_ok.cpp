#include <iostream>

using namespace std;

#include <iomanip>

struct particaoLimites
{
	int i;
	int j;
};


void printArray(int *A, int n)
{
	for (int i = 0; i < n; i++)
		cout <<  setw(4) <<  A[i];
	cout << endl;
}

struct particaoLimites particao(int *A, int esq, int dir)
{
	struct particaoLimites p;
	p.i = esq; p.j = dir;

	int pivo = A[(p.i + p.j) / 2]; // obtem o pivo 
	do 
	{
		// percorre da esquerda para o pivo
		while (pivo > A[p.i]) p.i++;
		// percorre da direita para o pivo
		while (pivo < A[p.j]) p.j--;
		
		if (p.i <= p.j)
		{
			// faz a troca
			int aux = A[p.i];
			A[p.i] = A[p.j];
			A[p.j] = aux;
			p.i++;
			p.j--;
		} // end if
	}while (p.i <= p.j);

	//cout << "p.i = " << p.i << " p.j = " << p.j << endl;

	
	return p;
} // end particao

void ordena(int* A, int esq, int dir)
{
	struct particaoLimites p = particao(A, esq, dir);

	if (esq < p.j) ordena(A, esq, p.j);
	if (p.i < dir) ordena(A, p.i, dir);

} // end ordena

void quicksort(int *A,  int n)
{
	ordena(A, 1, n);
} // end quicksort


int main()
{

	const int arraySize = 15;
        int a[arraySize] = {2, 61, 15, 14, 13, 11, 89, 68, 45, 37, 100, 2, 13, 34, 60};

	
	cout << "Antes da ordenação" << endl;
	printArray(a, arraySize);

	quicksort(a, arraySize);

	cout << "Depois da ordenação" << endl;
	printArray(a, arraySize);

} // end main()
