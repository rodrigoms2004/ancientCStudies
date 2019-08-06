#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
#include "aluno.h"

using namespace std;

bool validarCin();

int main()
{
    string nome;
    double nota;
    vector<Aluno> alunos;
    while(true)
    {
        int continuar;
        cout << "Entre com o nome e a nota: ";
        cin >> nome >> nota;
        if (!validarCin()) continue;

        Aluno alunoTemp(nome, nota);
        alunos.push_back(alunoTemp);

        cout << "Deseja continuar? (0) = Não, (1) = Sim: ";
        cin >> continuar;
        if (!validarCin()) continue;

        if(continuar)
            continue;
        else
        {
            std::sort (alunos.begin(), alunos.end(),greater<Aluno>()); // ordena em ordem decrescente
            for (int i = 0; i < alunos.size(); ++i)
            {
                cout << "Nome: " << alunos[i].getNome() << " nota: " << alunos[i].getNota() << endl;
            }
            break;
        }

    }

    return 0;
}

bool validarCin()
{
    if (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<int>::max(), '\n');
        cout << "\n\nENTRADA INVALIDA.\n\n";
        return false;
    }
    return true;
}
