#include "conta.h"

extern int construidos;
extern int destruidos;

void Conta::imprimir()
{
    cout << "\nCodigo: " << m_codigoCorrentista
         << "\nNome: " << m_nomeCorrentista
         << "\nAgencia: " << m_agencia
         << "\nCC: " << m_cc
         << "\nSaldo: " << m_saldo << "\n\n";
}

bool Conta::depositar(double valor)
{
    if(valor <= 0)
        return false;
    m_saldo += valor;
    return true;
}

bool Conta::sacar(double valor)
{
    if(valor <= 0 || valor > m_saldo)
        return false;
    m_saldo -= valor;
    return true;
}



int Conta::codigoCorrentista() const
{
    return m_codigoCorrentista;
}

void Conta::setCodigoCorrentista(int codigoCorrentista)
{
    m_codigoCorrentista = codigoCorrentista;
}
Conta::Conta()
{
    ++construidos;
}
Conta::~Conta()
{
    ++destruidos;
}

string Conta::nomeCorrentista() const
{
    return m_nomeCorrentista;
}

void Conta::setNomeCorrentista(const string &nomeCorrentista)
{
    m_nomeCorrentista = nomeCorrentista;
}

string Conta::agencia() const
{
    return m_agencia;
}

void Conta::setAgencia(const string &agencia)
{
    m_agencia = agencia;
}

string Conta::cc() const
{
    return m_cc;
}

void Conta::setCc(const string &cc)
{
    m_cc = cc;
}

double Conta::consulta() const
{
    return m_saldo;
}

