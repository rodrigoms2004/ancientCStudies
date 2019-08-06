#include <iostream>
#include <padrao.h>
#include <limits>

using namespace std;



class Calculadora
{
public:
    Calculadora()
    {

        int opcao, a, b;
        double resultado = 0.0;

        while(true)
        {
            cout << "Escolha a opção:"
                 << "\n1 - somar"
                 << "\n2 - subtrair"
                 << "\n3 - multiplicar"
                 << "\n4 - dividir"
                 << "\n5 - numero de chamadas somar()"
                 << "\n6 - numero de chamadas subtrair()"
                 << "\n7 - numero de chamadas multiplicar()"
                 << "\n8 - numero de chamadas dividir()"
                 << "\n9 - Sair" << endl;
            cin >> opcao;

            if (opcao >=1 && opcao <= 4)
            {
                cout << "Entre com os dois números: ";
                cin >> a >> b;
            }


            if (opcao == 1)
                resultado = padrao::somar(a, b);

            if (opcao == 2)
                resultado = padrao::subtrair(a, b);

            if (opcao == 3)
                resultado = padrao::multiplicar(a, b);

            if (opcao == 4)
                resultado = padrao::dividir(a, b);

            if (opcao == 5)
                resultado = padrao::getChamadasSomar();


            if (opcao == 6)
                resultado = padrao::getChamadasSubtrair();

            if (opcao == 7)
                resultado = padrao::getChamadasMultiplicar();

            if (opcao == 8)
                resultado = padrao::getChamadasDividir();

            if (opcao == 9)
                break;

            cout << "\n\nRESULTADO: " << resultado << endl << endl;


        }   // end while
    }   // end construtor

};

// chama a costrutora de Calculadora antes de main
Calculadora calc;

int main()
{
    cout << "\n\nMain\n\n";
    return 0;
}


