#include "vetor.h"



Vetor::Vetor()
{
    m_numero_elementos = 0;
}

Vetor::~Vetor()
{
    if(m_vetor != 0)
        delete []m_vetor;
}

Conta &Vetor::operator [](unsigned int index)
{
    return m_vetor[index];
}

unsigned int Vetor::size()
{
    return m_numero_elementos;
}

void Vetor::resize(unsigned int tamanho)
{
    Conta *temp = new Conta[tamanho];
    for(int i = 0; (i < m_numero_elementos) && (i < tamanho); ++i)
        temp[i] = m_vetor[i];
    if(m_vetor != 0)
        delete []m_vetor;
    m_vetor = temp;
    m_numero_elementos = tamanho;
}

void Vetor::push_back(const Conta &c)
{
    Conta *temp = new Conta[m_numero_elementos + 1];
    for(int i = 0; i < m_numero_elementos; ++i)
        temp[i] = m_vetor[i];
    if(m_vetor != 0)
        delete []m_vetor;
    temp[m_numero_elementos] = c;
    m_vetor = temp;
    ++m_numero_elementos;
}
















