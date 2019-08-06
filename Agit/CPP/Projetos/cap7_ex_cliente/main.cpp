#include <iostream>
#include <datacliente.h>
#include <vector>

using namespace std;

int main()
{
    vector<DataCliente> vdc;
    bool continuar = true;

    while (continuar)
    {
        cout << "Selecione uma opção\n"
             << "1 - Cadastrar novo cliente\n"
             << "2 - Imprimir lista de clientes cadastrados\n"
             << "3 - Sair\n";
        int opcao;
        cin >> opcao;

        if (opcao == 1)
        {
            cout << "Nome: ";
            string nome;
            cin >> nome;
            cout << "Sobrenome: ";
            string sobrenome;
            cin >> sobrenome;
            cout << "Sexo: ";
            char sexo;
            cin >> sexo;
            cout << "Endereço: ";
            string endereco;
            cin >> endereco;

            DataCliente dc(nome, sobrenome, sexo, endereco);
            vdc.push_back(dc);
        }
        else if(opcao == 2)
        {
            /*
            for(std::vector<DataCliente>::iterator it = vdc.begin(); it != vdc.end(); ++it) {
                // std::cout << *it; ...
                cout << "----------\n"
                     << "Cliente\n";
                it->imprimeDados();
                cout << "----------\n";
            }   // end for
            */

            // outro jeito
            /*
            for (int i = 0; i < vdc.size(); ++i)
                vdc[i].imprimeDados();
            */
            /*
            // válido somente em C++ 11 por cópia
            for(DataCliente c : vdc)
                c.imprimeDados();
                */
            // C++ 11, por referencia (mais rápido)
            for(DataCliente &c : vdc)
                c.imprimeDados();
        }
        else if(opcao == 3)
            continuar = false;
        else
            cout << "opção inválida!\n";

    }   // end while

    return 0;
}


/*
DataCliente dc("Rodrigo", "Moraes Silveira", 'M', "XPTO,222");
dc.imprimeDados();

DataCliente dc2;
dc2.setNome("Yris");
dc2.setSobrenome("Castro");
dc2.setSexo('F');
dc2.setEndereco("xpto");
dc2.imprimeDados();
*/
