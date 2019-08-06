#include <iostream>
#include <fstream>


using namespace std;


void error(string error_msg, string filename);

int main()
{
    cout << "Inform, filename: ";
    string nome;

    cin >> nome;

    ifstream ist(nome.c_str()); // fluxo de entrada

    if(!ist) error("cannot open file ", nome);
    //cout << "Hello World!" << endl;
    return 0;
}

void error(string error_msg, string filename)
{
    cout << error_msg << " " << filename << endl;
}

