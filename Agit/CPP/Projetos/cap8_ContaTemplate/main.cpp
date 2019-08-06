#include <iostream>
#include <conta.h>
#include <vector>
#include <limits>

#include <vetor.h>

using namespace std;

bool validarCin();
//Conta *getConta(vector<Conta> &vc, int &codigoCodigoCorrentista);
Conta *getConta(vetor<Conta> &vc, int &codigoCodigoCorrentista);

int construidos = 0;
int destruidos = 0;

int main()
{
    {
        //vector<Conta> contas;
        vetor<Conta> contas;
        int codigoCliente = 0;
        string nome;
        string agencia;
        string conta;

        while(true)
        {
            cout << "Selecione a opção:"
                 << "\n1 - Cadastrar conta"
                 << "\n2 - Consultar conta"
                 << "\n3 - Imprimir todas as contas"
                 << "\n4 - Sair" << endl;
            int opcao;
            cin >> opcao;
            if (!validarCin()) continue;
            // Cadastra conta
            if (opcao == 1)
            {
                cout << "Entre Nome, Agencia, Conta corrente :";
                cin >> nome >> agencia >> conta;
                if (!validarCin()) continue;

                Conta contaCliente;
                contaCliente.setNome(nome);
                contaCliente.setAgencia(agencia);
                contaCliente.setCC(conta);
                contaCliente.setCondigoCorrentista(++codigoCliente);

                contas.push_back(contaCliente);
            }   // end if

            // consultar
            if (opcao == 2)
            {
                double valor = 0.0;
                cout << "\nInforme o número da conta: ";
                int n_conta;
                cin >> n_conta;
                if (!validarCin()) continue;
                Conta *contaConsultada = getConta(contas, n_conta);
                while (true)
                {
                    cout << "\n1 - Ver saldo"
                         << "\n2 - Efetuar saque"
                         << "\n3 - Efetuar deposito"
                         << "\n4 - Voltar" << endl;
                    int opcao;
                    cin >> opcao;
                    if (!validarCin()) continue;

                    if(opcao == 1)
                    {
                        cout << "Saldo atual: " << contaConsultada->consultar();
                    }

                    if(opcao == 2)
                    {
                        cout << "Informe o valor do saque: ";
                        cin >> valor;
                        contaConsultada->sacar(valor);
                    }
                    if(opcao == 3)
                    {
                        cout << "Informe o valor do deposito: ";
                        cin >> valor;
                        contaConsultada->depositar(valor);
                    }
                    if(opcao == 4)
                    {
                        break;
                    }



                }   // end while
            }   // end if

            // imprimir todas as contas, usa C++ 11
            if (opcao == 3)
            {
                for (int i = 0; i < contas.size(); i++)
                //for (Conta c: contas)
                    contas[i].imprimir();
            }   // end if

            // sair
            if (opcao == 4)
            {
                break;
            }   // end if


        }   // end while
    }
    cout << "Construidos: " << construidos << '\n';
    cout << "Destruidos: " << destruidos << '\n';

    return 0;
}

bool validarCin()
{
    if (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<int>::max(), '\n');
        cout << "\n\nENTRADA INVALIDA.\n\n";
        return false;
    }
    return true;
}

/*
Conta* getConta(vector<Conta> &vc, int &codigoCodigoCorrentista)
{
    for (int i = 0; i < vc.size(); ++i)
        if (vc[i].condigoCorrentista() == codigoCodigoCorrentista)
            return &vc[i];

}   // end getConta
*/


Conta *getConta(vetor<Conta> &vc, int &codigoCodigoCorrentista)
{
    for (int i = 0; i < vc.size(); ++i)
        if (vc[i].condigoCorrentista() == codigoCodigoCorrentista)
            return &vc[i];


}   // end getConta

