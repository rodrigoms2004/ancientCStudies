#include "conta.h"
//#include <string>
#include <iostream>

using namespace std;

extern int construidos;
extern int destruidos;

int Conta::condigoCorrentista() const
{
    return m_condigoCorrentista;
}

void Conta::setCondigoCorrentista(const int &condigoCorrentista)
{
    m_condigoCorrentista = condigoCorrentista;
}

string Conta::nome() const
{
    return m_nome;
}

void Conta::setNome(const string &nome)
{
    m_nome = nome;
}

string Conta::agencia() const
{
    return m_agencia;
}

void Conta::setAgencia(const string &agencia)
{
    m_agencia = agencia;
}

string Conta::CC() const
{
    return m_CC;
}

void Conta::setCC(const string &CC)
{
    m_CC = CC;
}


double Conta::consultar() const
{
    return m_saldo;
}

Conta::Conta()
{
    m_saldo = 0;
    ++construidos;


}

Conta::~Conta()
{
    --destruidos;
}

bool Conta::depositar(double valor)
{
    if (valor < 0)
        return false;
    m_saldo += valor;
    return true;
}

bool Conta::sacar(double valor)
{
    if (valor < 0 || valor > m_saldo)
        return false;
    m_saldo -= valor;
    return true;

}

void Conta::imprimir()
{
    cout << "Código: " << m_condigoCorrentista
         << "\nNome: " << m_nome
         << "\nAgencia: " << m_agencia
         << "\nConta: "   << m_CC
         << "\nSaldo: "   << m_saldo << endl;
}
