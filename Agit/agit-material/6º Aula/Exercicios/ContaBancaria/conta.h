#ifndef CONTA_H
#define CONTA_H
#include <iostream>

using namespace std;

class Conta
{
    int    m_codigoCorrentista;
    string m_nomeCorrentista;
    string m_agencia;
    string m_cc;
    double m_saldo = 0;
public:
    Conta();
    ~Conta();
    string nomeCorrentista() const;
    void setNomeCorrentista(const string &nomeCorrentista);
    string agencia() const;
    void setAgencia(const string &agencia);
    string cc() const;
    void setCc(const string &cc);
    double consulta() const;
    bool depositar(double valor);
    bool sacar(double valor);
    void imprimir();
    int codigoCorrentista() const;
    void setCodigoCorrentista(int codigoCorrentista);
};

#endif // CONTA_H

