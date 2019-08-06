#ifndef VETOR_H
#define VETOR_H

#include <conta.h>

class Vetor
{
    Conta *m_vetor = 0;
    unsigned int m_numero_elementos;
public:
    Vetor();
    ~Vetor();
    Conta &operator [] (unsigned int index);
    unsigned int size();
    void resize(unsigned int tamanho);
    void push_back(const Conta &c);
};

#endif // VETOR_H
