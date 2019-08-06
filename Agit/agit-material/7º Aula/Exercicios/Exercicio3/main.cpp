#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

struct Aluno
{
    string m_nome;
    double m_nota;
    bool operator < (const Aluno &a) const
    {
        return this->m_nota < a.m_nota;
    }
    bool operator > (const Aluno &a) const
    {
        return this->m_nota > a.m_nota;
    }
};

int main()
{    
    map<double, string> notas;

    while(true)
    {
        double nota;
        string nome;
        cout << "Digite o nome: ";
        cin >> nome;
        cout << "Digite a nota: ";
        cin >> nota;

        notas.insert(map<double, string>::value_type(nota, nome));

        int continua;
        cout << "Continua ? (0 == Nao): ";
        cin >> continua;
        if(continua == 0)
            break;
    }


    for(map<double, string>::iterator it = notas.begin();
        it != notas.end(); ++it)
        cout << "Nome: " << it->second << " | Nota: " << it->first << '\n';

    return 0;
}

