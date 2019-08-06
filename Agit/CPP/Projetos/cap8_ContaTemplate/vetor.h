#ifndef VETOR_H
#define VETOR_H

#include <conta.h>

template <class Tipo> class vetor
{
private:
    Tipo *m_vetor = 0;
    unsigned int m_numero_elementos;

public:

    vetor()
    {
        m_numero_elementos = 0;
    }

    ~vetor()
    {
        if (m_vetor)    // se o vetor estiver alocado, deleta
            delete [] m_vetor;
    }

    Tipo &operator[](unsigned int index)
    {
        return m_vetor[index];
    }

    unsigned int size()
    {
        return m_numero_elementos;
    }

    void resize(unsigned int tamanho)
    {

        Tipo* temp = new Tipo[tamanho];
        for (int i = 0; (i < m_numero_elementos) && (i < tamanho); ++i)
            temp[i] = m_vetor[i];

        // limpa o vetor principal
        if(m_vetor != 0);
        delete []m_vetor;

        m_vetor = temp;
        m_numero_elementos = tamanho;

    }

    void push_back(const Tipo &c)
    {
        // ponteiro temporario com o numero de elementos guardado mais um.
        Tipo *temp = new Tipo[m_numero_elementos + 1];

        // armazena os valores já armazenados de m_vetor em temp
        // m_numero_elementos não foi incrementado ainda, mas objeto Conta tem mais um elemento
        for (int i = 0; i < m_numero_elementos; ++i)
            temp[i] = m_vetor[i];

        // limpa o vetor principal
        if(m_vetor != 0);
        delete []m_vetor;

        // grava a nova conta em temp, m_numero_elementos já foi incrementado
        temp[m_numero_elementos] = c;

        // envia os dados ao m_vetor, temp agora é o vetor, não precisa ser deletado
        // se fizer delete []temp apaga m_vetor também
        m_vetor = temp;

        // o vetor com novos elementos
        ++m_numero_elementos;
    }

};


#endif // VETOR_H
