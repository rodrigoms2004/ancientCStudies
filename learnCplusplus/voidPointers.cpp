#include <iostream>

using namespace std;

enum Type
{
	INT,
	FLOAT,
	STRING,
};

void Print(void *pValue, Type eType)
{
	switch (eType)
	{
		case INT:
			cout << *static_cast<int*>(pValue) << endl;
			break;
		case FLOAT:
            		cout << *static_cast<float*>(pValue) << endl;
            		break;
       		 case STRING:
            		cout << static_cast<char*>(pValue) << endl;
            		break;
	} // end switch
} // end Print()

int main(int argc, char *argv[])
{
	int nValue = 5;
	float fValue = 7.5;
	char *szValue = "Mollie";

	Print(&nValue, INT);
	Print(&fValue, FLOAT);
	Print(szValue, STRING);

	return 0;
} // end main()

/*

&nValue = ptr = *ptr_ptr = **ptr_ptr_ptr 	= 0x7fff4dfcceac
&ptr = ptr_ptr = *ptr_ptr_ptr 				= 0x7fff4dfccea0
&ptr_ptr = ptr_ptr_ptr 						= 0x7fff4dfcce98
&ptr_ptr_ptr = 0x7fff4dfcce90
nValue = *ptr = **ptr_ptr = ***ptr_ptr_ptr 	= 5


int nValue = 5;
int *ptr = &nValue;
int **ptr_ptr = &ptr;
int ***ptr_ptr_ptr = &ptr_ptr;  



*/
