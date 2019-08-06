#include <iostream>

using namespace std;

#include <iomanip>

int partition(int *, int, int); 
void quicksort(int *, int, int);


int main()
{
	const int arraySize = 15;
	int a[arraySize] = {2, 61, 15, 14, 13, 11, 89, 68, 45, 37, 100, 2, 13, 34, 60};
	
	cout << "Antes do quicksort" << endl;
	for (int i = 0; i < arraySize; i++)
		cout << setw(4) << a[i];

	quicksort(a, 0, arraySize);

	cout << "\nDepois do quicksort" << endl;
	for (int i = 0; i < arraySize; i++)
		cout << setw(4) << a[i];

	cout << endl;
	

} // end main()


int partition(int *vet, int left, int right) 
{
	int i = left;	int j = right;
	int pivo = vet[left];	

	while(true)
	{
		// procura da direita para a posição do pivo
		while((j > i) && (vet[j] >= pivo)) j--;

		if (i == j) break; // se os indices forem iguais, encerra o looping
		vet[i] = vet[j]; i++; // faz a troca

		// procura da esquerda para a posição do pivo
		while((i < j) && (vet[i] <= pivo)) i++;

		if (i == j) break; // se os indices forem iguais, encerra o looping
		vet[j] = vet[i]; j--; // faz a troca

	} // end while

	vet[i] = pivo;
	cout << "\nPivo: " << pivo << " Posição: " << i << endl;

//	for (int i = 0; i < right; i++)
//		cout << setw(4) << vet[i];
//	cout << endl;


	return i;
} // end partition()

void quicksort(int *vet, int left, int right)
{
	if (right <= left) return;
	int pos = partition(vet, left, right);
	quicksort(vet, left, pos-1);
	quicksort(vet, pos+1, right);

} // quicksort()

void quicksortPartial(int *vet, int left, int right, int k)
{
	if (right <= left) return;
	int pos = partition(vet, left, right);
	quicksort(vet, left, pos-1);
	quicksort(vet, pos+1, right);

}
