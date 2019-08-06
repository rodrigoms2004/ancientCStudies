#include <iostream>
#include <limits>
#include <string>
#include <vector>


using namespace std;

bool temErro();

int main()
{
    std::vector<int> vec;
    std:string str;

    const char inicial_min = 'A' ;
    const char final_max = 'Z' ;


    int continuar = 1;
    // flag para continuidade do programa
    while ( continuar ) // enquanto for verdadeiro...
    {

        char inicial, final;
        int razao;
        std::cout << "\ninforme inicial, final e a razão\n" ;
        std::cin >> inicial >> final >> razao ;
        inicial = char(toupper(inicial));
        final = char(toupper(final));
        if ( inicial < inicial_min ) {
            cout << "valor inicial abaixo do minimo, tente novamente\n";
        } else if ( final > final_max ) {
            cout << "valor final acima do máximo, tente novamente\n";
        } else if ( inicial > final ) {
        cout << "valor inicial maior que valor final, tente novamente\n";
        } else
            if(temErro()){
            cout << "Entrada inválida!";
            continue;
        } else {
            unsigned int quant_num = (final-inicial+razao) / razao ;
            vec.resize(quant_num);
            str.resize(quant_num);

            unsigned int index;
            char r = char(razao);
            for (index = 0; inicial <= final; inicial += r)
            {
                vec[index] = inicial;   // conversao de char para int: segura
                str [ index ] = inicial ; // Alimenta a string (OK: 'inicial' é char).
                index++;
            }   // end for

            int soma = 0;
            for (index = 0; index < vec.size(); index++)
            {
                // somar vec [ index ] a um acumulador
                soma += vec[index];
                // imprimir vec[ index ]
                cout << vec[index] << endl;
            }   // end for

            cout << "Numeros do intervalo: " << quant_num << endl
                 << "Somatoria dos numeros: " << soma << endl
                 << "String: " << str << endl;

        }   // end else



        std::cout << "\ndeseja realizar novo calculo?\n"
        << " (0 para encerrar, qualquer outro numero "
        << "para continuar)\n";
        std::cin >> continuar ; // o usuário pode ter digitado zero...
        if(temErro())
        {
            cout << "Entrada invalida!";
            continue;
        }

    }   // end while

    return 0;
}   // endl;



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
