#ifndef DATACLIENTE_H
#define DATACLIENTE_H

#include <iostream>
#include <string>

using namespace std;

struct DataCliente {

private:
  string m_nome;
  string m_sobrenome;
  char m_sexo = 'M'; // somente no C++ 11
  string m_endereco;
public:
  DataCliente();
  DataCliente(string nome, string sobrenome, char sexo, string endereco);

  // get
  string getNome();
  string getSobrenome();
  char getSexo();
  string getEndereco();

  // set
  void setNome(string nome);
  void setSobrenome(string sobrenome);
  void setSexo(char sexo);
  void setEndereco(string endereco);


  void imprimeDados();

};


#endif // DATACLIENTE_H
