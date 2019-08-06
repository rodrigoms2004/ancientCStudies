#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n_alunos = 1;
    double nota = 0;
    vector<double> notas;
    while (n_alunos <= 10)
    {
        cout << "Entre com a nota do aluno " << n_alunos << " : ";
        cin >> nota;
        notas.push_back(nota);
        ++n_alunos;
    }   // end while

    for_each(notas.begin(), notas.end(), [](double nota)
    {
        if (nota < 6 || nota > 10)
            cout << "Reprovado, nota: " << nota << endl;
        else
        {
            cout << "Aprovado, nota: " << nota << endl;
        }
    });

    return 0;
}

/*
for_each(vec.begin(), vec.end(),[] (int n)
                        { cout << n << '\n'; }
                        );
                        */
