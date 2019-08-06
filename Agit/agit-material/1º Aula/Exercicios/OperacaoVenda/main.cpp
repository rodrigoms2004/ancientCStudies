HERIKLYMA@HOTMAIL.COM

#include <iostream>

using namespace std;

int main()
{
    int valor_pago;
    int valor_imposto;
    int valor_produto;
    int valor_venda;
    int finalizar;

    while(1)
    {
        cout << "Digite o valor pago: ";
        cin  >> valor_pago;
        if(cin.fail())
        {
            cout << "Entrada invalida.\n";
            break;
        }
        cout << "Digite o valor do produto: ";
        cin  >> valor_produto;
        if(cin.fail())
        {
            cout << "Entrada invalida.\n";
            break;
        }
        cout << "Digite o valor do imposto: ";
        cin  >> valor_imposto;
        if(cin.fail())
        {
            cout << "Entrada invalida.\n";
            break;
        }

        valor_venda = valor_produto + valor_imposto;
        if(valor_pago == valor_venda)
            cout << "Volte sempre!!!\n";
        else if(valor_pago < valor_venda)
            cout << "Falta dinheiro!!!\n";
        else if(valor_pago > valor_venda)
        {
            int troco = valor_pago - valor_venda;
            cout << "Troco: " << troco << '\n';
            cout << "Volte sempre!!!\n";
        }

        cout << "Nova venda? 0 = Nao ou 0 != Sim: ";
        cin  >> finalizar;

        if(cin.fail())
        {
            cout << "Entrada invalida.\n";
            break;
        }

        if(finalizar == 0)
            break;
    }
    return 0;
}

