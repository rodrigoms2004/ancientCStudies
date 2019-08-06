#include "datacliente.h"
#include <iostream>
#include <string>

using namespace std;



DataCliente::DataCliente(string nome, string sobrenome, char sexo, string endereco)
{
    m_nome = nome;
    m_sobrenome = sobrenome;
    m_sexo = sexo;
    m_endereco = endereco;
}

// get methods

DataCliente::DataCliente()
{

}

string DataCliente::getNome()
{
    return m_nome;
}

string DataCliente::getSobrenome()
{
    return m_sobrenome;
}

char DataCliente::getSexo()
{
    return m_sexo;
}

string DataCliente::getEndereco()
{
    return m_endereco;
}

// set methods

void DataCliente::setNome(string nome)
{
    m_nome = nome;
}

void DataCliente::setSobrenome(string sobrenome)
{
    m_sobrenome = sobrenome;
}

void DataCliente::setSexo(char sexo)
{
    if (sexo != 'M' && sexo != 'F')
        m_sexo = ' ';
    else
        m_sexo = sexo;
}

void DataCliente::setEndereco(string endereco)
{
    m_endereco = endereco;
}

void DataCliente::imprimeDados()
{
    cout << "Nome: "        << m_nome << '\n'
         << "Sobrenome: "   << m_sobrenome << '\n'
         << "Sexo: "        << m_sexo << '\n'
         << "Endereço: "    << m_endereco << '\n';
}



