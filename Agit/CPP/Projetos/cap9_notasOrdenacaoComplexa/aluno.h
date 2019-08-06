#ifndef ALUNO_H
#define ALUNO_H

#include <string>

using namespace std;

class Aluno
{
    string m_nome;
    double m_nota;

public:
    Aluno(string nome, double nota);
    bool operator<(const Aluno &aluno) const;
    bool operator>(const Aluno &aluno) const;
    double getNota();
    void setNota(double nota);
    string getNome();
};

#endif // ALUNO_H
