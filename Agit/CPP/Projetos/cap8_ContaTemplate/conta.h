#ifndef CONTA_H
#define CONTA_H

#include <string>

using namespace std;

class Conta
{
private:
    int m_condigoCorrentista;
    string m_nome;
    string m_agencia;
    string m_CC; // conta corrente
    double m_saldo;

public:
    Conta();
    ~Conta();


    int condigoCorrentista() const;
    void setCondigoCorrentista(const int &condigoCorrentista);

    string nome() const;
    void setNome(const string &nome);

    string agencia() const;
    void setAgencia(const string &agencia);

    string CC() const;
    void setCC(const string &CC);

    double consultar() const;

    bool depositar(double valor);
    bool sacar(double valor);

    void imprimir();

};

#endif // CONTA_H
