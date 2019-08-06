// Usando subscritos de ponteiro com arrays
#include <iostream>

using namespace std;

int main()
{
	int b[] = {10, 20, 30, 40}, i, offset;
	int *bPtr = b;	// configurar bPtr para apontar para array b

	cout << "Array b impresso com:\n"
	     << "Notação de subscrito de array\n";
	for (i = 0; i < 4; i++)
		cout << "b[" << i <<  "] = " << b[ i ] << '\n';

	cout << "\nNotação de ponteiro/deslocamento onde\n"
    	     << "o ponteiro é o nome do array\n";
	for (offset = 0; offset < 4; offset++)
		cout << "*(b + " << offset << ") = "
		     << *(b + offset) << '\n';

	cout << "\nNotação ponteiro/subscrito\n";
	for (i = 0; i < 4; i++)
		cout << "bPtr[" << i << "] = " << bPtr[i] << '\n';

	cout << "\nNotação ponteiro/deslocamento\n";
	for (offset = 0; offset < 4; offset++)
		cout << "*(bPtr + " << offset << ") = "
		     << *(bPtr + offset) << '\n';

	return 0;

}
