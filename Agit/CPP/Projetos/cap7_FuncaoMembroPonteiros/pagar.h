#ifndef PAGAR_H
#define PAGAR_H
#include <data.h>

class Pagar
{
public:
    float VALOR;
    Data * DiaAtual;
    Data * DiaPagar;
    Pagar();
    ~Pagar();
};

#endif // PAGAR_H
