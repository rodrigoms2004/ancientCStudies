#include <iostream>
#include <fstream>
#include <vector>

using namespace std;


void error(string error_msg, string filename);

struct Leitura {
    int hora;
    double temperatura;
    Leitura(int h, double t): hora(t), temperatura(t){}
};


int main()
{

    ifstream ist;
    vector<Leitura> temps;
    int hora;
    double temperatura;
    while(ist >> hora >> temperatura) {
        if (hora < 0 || 23 < hora) error("Hora fora dointervalo", "");
            temps.push_back(Leitura(hora,temperatura));
    }




    ofstream ost;
    for (int i = 0; i < temps.size(); ++i)
        ost << '(' << temps[i].hora << ',' << temps[i].temperatura << ")\n";


    /*
    cout << "Inform, filename: ";
    string nome;

    cin >> nome;

    ifstream ist(nome.c_str()); // fluxo de entrada

    if(!ist) error("cannot open file ", nome);
    //cout << "Hello World!" << endl;
*/

    return 0;
}

void error(string error_msg, string filename)
{
    cout << error_msg << " " << filename << endl;
}

