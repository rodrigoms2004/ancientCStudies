#include "aluno.h"

Aluno::Aluno(string nome, double nota)
{
    m_nome = nome;
    m_nota = nota;
}

bool Aluno::operator<(const Aluno &aluno) const
{
    return m_nota < aluno.m_nota;
}

bool Aluno::operator>(const Aluno &aluno) const
{
    return m_nota > aluno.m_nota;
}

double Aluno::getNota()
{
    return m_nota;
}

void Aluno::setNota(double nota)
{
    m_nota = nota;
}

string Aluno::getNome()
{
    return m_nome;
}

