#include <iostream>
#include <vector>
#include <limits>
#include <conta.h>
#include <vetor.h>

using namespace std;


int construidos = 0;
int destruidos  = 0;

bool validarCin()
{
    if(cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<int>::max(), '\n');
        cout << "\n\nENTRADA INVALIDA.\n\n";
        return false;
    }
    return true;
}

int main()
{
    {
        int    codigoCorrentista = 0, opcao;
        string nomeCorrentista;
        string agencia;
        string cc;
        Vetor contas;
        while(true)
        {
            cout << "1: Cadastrar nova conta\n";
            cout << "2: Consultar conta (Deverá informar o código)\n";
            cout << "3: Imprimir todas as contas\n";
            cout << "4: Sair\n";

            cout << "Digite a opcao: ";
            cin  >> opcao;
            if(!validarCin()) continue;

            if(opcao == 1)
            {
                cout << "Digite nome, agencia, cc: ";
                cin >> nomeCorrentista >> agencia >> cc;
                if(!validarCin()) continue;
                Conta c;
                c.setAgencia(agencia);
                c.setCc(cc);
                c.setNomeCorrentista(nomeCorrentista);
                c.setCodigoCorrentista(++codigoCorrentista);

                contas.push_back(c);
            }
            else if(opcao == 2)
            {
                int codigo;
                cout << "Digite o codigo: ";
                cin  >> codigo;
                if(!validarCin()) continue;
                Conta *temp = 0;


                for(int i = 0; i < contas.size(); ++i)
                {
                    if(contas[i].codigoCorrentista() == codigo)
                    {
                        temp = &contas[i];
                        break;
                    }
                }

                if(temp == 0)
                {
                    cout << "Conta nao localizada.\n";
                    continue;
                }

                cout << "1: Ver saldo \n";
                cout << "2: Efetuar saque (Informar valor)\n";
                cout << "3: Efetuar deposito (Informar valor)\n";
                cout << "Digite a opcao: ";
                cin  >> opcao;
                if(!validarCin()) continue;
                if(opcao == 1)
                {
                    cout << "\n\nSaldo: " << temp->consulta() << "\n\n";
                }
                else if(opcao == 2)
                {
                    double v;
                    cout << "Digite valor: ";
                    cin >> v;
                    if(!validarCin()) continue;
                    if(temp->sacar(v))
                        cout << "\nSucesso.\n";
                    else
                        cout << "\nFalha.\n";
                }
                else if(opcao == 3)
                {
                    double v;
                    cout << "Digite valor: ";
                    cin >> v;
                    if(!validarCin()) continue;
                    if(temp->depositar(v))
                        cout << "\nSucesso.\n";
                    else
                        cout << "\nFalha.\n";
                }
            }
            else if(opcao == 3)
            {
                for(int i = 0; i < contas.size(); ++i)
                    contas[i].imprimir();
            }
            else if(opcao == 4)
            {
                break;
            }

        }
    }

    cout << "construidos: " << construidos << '\n';
    cout << "destruidos: " << destruidos << '\n';
    return 0;
}

