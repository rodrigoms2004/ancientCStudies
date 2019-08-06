#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int nValue = 5;
	int *ptr = &nValue;
	int **ptr_ptr = &ptr;
	int ***ptr_ptr_ptr = &ptr_ptr;	

	cout << "nValue = " << nValue << endl;
	cout << "&nValue = " << &nValue << endl;
	
	cout << "ptr = " << ptr << endl;
	cout << "*ptr = " << *ptr << endl;
	cout << "&ptr = " << &ptr << endl;

	cout << endl << endl;

	cout << "ptr_ptr = " << ptr_ptr << endl;
	cout << "*ptr_ptr = " << *ptr_ptr << endl;
	cout << "**ptr_ptr = " << **ptr_ptr << endl;
	cout << "&ptr_ptr = " << &ptr_ptr << endl;

	cout << endl << endl;

	cout << "ptr_ptr_ptr = " << ptr_ptr_ptr << endl;
	cout << "*ptr_ptr_ptr = " << *ptr_ptr_ptr << endl;
	cout << "**ptr_ptr_ptr = " << **ptr_ptr_ptr << endl;
	cout << "***ptr_ptr_ptr = " << ***ptr_ptr_ptr << endl;
	cout << "&ptr_ptr_ptr = " << &ptr_ptr_ptr << endl;



}
