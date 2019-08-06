#ifndef VETOR_H
#define VETOR_H

#include <conta.h>

class vetor
{
private:
    Conta *m_vetor = 0;
    unsigned int m_numero_elementos;

public:
    vetor();
    ~vetor();
    Conta & operator[] (unsigned int index);
    unsigned int size();
    void resize(unsigned int tamanho);
    void push_back(const Conta &c);
};


// Modifique o std::vector<Conta> da sua main por vetor e teste
#endif // VETOR_H
