#include <iostream>
#include <padrao.h>

using namespace std;

class Calculadora
{
public:
    Calculadora()
    {
        int opcao;
        while(true)
        {
            cout << "1º: Soma.\n";
            cout << "2º: Subtracao.\n";
            cout << "3º: Multiplicacao.\n";
            cout << "4º: Divisao.\n";
            cout << "5º: Soma Vezes.\n";
            cout << "6º: Subtracao Vezes.\n";
            cout << "7º: Multiplicacao Vezes.\n";
            cout << "8º: Divisao Vezes.\n";

            cout << "Digite opcao: ";
            cin >> opcao;

            if(opcao == 1)
            {
                double a, b;
                cout << "Digite 'a' e 'b': ";
                cin >> a >> b;
                cout << "Resultado: " << Padrao::soma(a, b) << '\n';
            }
            else if(opcao == 2)
            {
                double a, b;
                cout << "Digite 'a' e 'b': ";
                cin >> a >> b;
                cout << "Resultado: " << Padrao::sub(a, b) << '\n';
            }
            else if(opcao == 3)
            {
                double a, b;
                cout << "Digite 'a' e 'b': ";
                cin >> a >> b;
                cout << "Resultado: " << Padrao::mult(a, b) << '\n';
            }
            else if(opcao == 4)
            {
                double a, b;
                cout << "Digite 'a' e 'b': ";
                cin >> a >> b;
                cout << "Resultado: " << Padrao::divi(a, b) << '\n';
            }
            else if(opcao == 5)
            {
                cout << "Chamou soma: " << Padrao::somaVezes() << '\n';
            }
            else if(opcao == 6)
            {
                cout << "Chamou subtracao: " << Padrao::subVezes() << '\n';
            }
            else if(opcao == 7)
            {
                cout << "Chamou multiplicacao: " << Padrao::multVezes() << '\n';
            }
            else if(opcao == 8)
            {
                cout << "Chamou divisao: " << Padrao::diviVezes() << '\n';
            }
            int continua;
            cout << "Continua? 0 = Nao 0 <> Sim: ";
            cin >> continua;
            if(continua == 0)
                break;
        }
    }
};


Calculadora c;

int main()
{
    cout << "\n\nMain\n\n" << endl;
    return 0;
}

