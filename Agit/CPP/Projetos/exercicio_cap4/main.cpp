#include <iostream>
#include <limits>

using namespace std;

enum Meses {Janeiro = 1, Fevereiro, Marco, Abril,
            Maio, Junho, Julho, Agosto,
            Setembro, Outubro, Novembro };

void imprimeMes(Meses mes);
bool temErro();

int main()
{

    bool continuar = true;

    while (continuar)
    {
        int mes_var;
        Meses mes;
        cout << "Entre com o mês:" << endl;
        cin >> mes_var;

        if(temErro()){
            cout << "Mês inválido" << endl;
            continue;
        }  else {
            if(mes_var < 1 || mes_var > 12) {
                cout << "Mês inválido" << endl;
                continue;
            } else {
                mes = (Meses) mes_var;
                imprimeMes(mes);
                //cout << mes << endl;
            }
        }
        cout << "Deseja continuar? Qualquer numero ou 0 para finalizar" << endl;
        cin >> continuar;
        if(temErro()) {
            cout << "entrada invalida" << endl;
            continue;
        }


    }   // end while


    //cout << "Hello World!" << endl;
    return 0;
}


void imprimeMes(Meses mes)
{

    switch (mes) {
    case 1:
        cout << "Janeiro" << endl;
        break;
    case 2:
        cout << "Fevereiro" << endl;
        break;
    case 3:
        cout << "Março" << endl;
        break;
    case 4:
        cout << "Abril" << endl;
        break;
    case 5:
        cout << "Maio" << endl;
        break;
    case 6:
        cout << "Junho" << endl;
        break;
    case 7:
        cout << "Julho" << endl;
        break;
    case 8:
        cout << "Agosto" << endl;
        break;
    case 9:
        cout << "Setembro" << endl;
        break;
    case 10:
        cout << "Outubro" << endl;
        break;
    case 11:
        cout << "Novembro" << endl;
        break;
    case 12:
        cout << "Dezembro" << endl;
        break;

    }   // end switch
}

bool temErro()
{
    if(std::cin.fail()) {
        // como houve falha é preciso limpar os flags de erro de "cin":
        std::cin.clear();
        // e desprezar as quebras de linha pendentes no buffer de "cin":
        std::cin.ignore(std::numeric_limits<int>::max(), '\n');
        return true;
    }
    return false;
}
