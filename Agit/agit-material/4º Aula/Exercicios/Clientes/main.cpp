#include <iostream>
#include <vector>
#include <string>

using namespace std;


struct Cliente
{
private:
    string m_nome;
    string m_sobrenome;
    char   m_sexo = 'M';
    string m_endereco;
public:
    string getNome()
    {
        return m_nome;
    }
    string getSobrenome()
    {
        return m_sobrenome;
    }
    char   getSexo()
    {
        return m_sexo;
    }
    string getEndereco()
    {
        return m_endereco;
    }

    void setNome(string nome)
    {
        m_nome = nome;
    }
    void setSobrenome(string sobrenome)
    {
        m_sobrenome = sobrenome;
    }
    void   setSexo(char sexo)
    {
        if(sexo != 'M' && sexo != 'F')
            m_sexo = ' ';
        else
            m_sexo = sexo;
    }
    void setEndereco(string endereco)
    {
         m_endereco = endereco;
    }

    void imprimir()
    {
        cout << "Nome: " << m_nome << '\n';
        cout << "Sobrenome: " << m_sobrenome << '\n';
        cout << "Sexo: " << m_sexo << '\n';
        cout << "Endereco: " << m_endereco << "\n\n";
    }
};

int main()
{
    vector<Cliente> clientes;
    while(true)
    {
        cout << "1º: Cadastrar novo cliente.\n";
        cout << "2º: Imprimir lista de clientes cadastrados\n";
        cout << "3º: Sair\n\n";
        cout << "Digite a opcao: ";
        int opcao;
        cin >> opcao;
        if(opcao == 1)
        {
            string nome, sobrenome, endereco;
            char sexo;

            cout << "Digite nome: ";
            cin >> nome;
            cout << "Digite sobrenome: ";
            cin >> sobrenome;
            cout << "Digite endereco: ";
            cin >> endereco;
            cout << "Digite sexo: ";
            cin >> sexo;

            Cliente temp;
            temp.setNome(nome);
            temp.setSobrenome(sobrenome);
            temp.setEndereco(endereco);
            temp.setSexo(sexo);

            clientes.push_back(temp);
        }
        else if(opcao == 2)
        {
            for(Cliente &c : clientes)
            {
                c.imprimir();
            }
        }
        else if(opcao == 3)
        {
            cout << "\n\nFim\n\n";
            break;
        }
        else
        {
            cout << "Opcao invalida.\n";
            continue;
        }
    }
    return 0;
}

