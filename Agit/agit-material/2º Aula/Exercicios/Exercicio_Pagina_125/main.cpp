#include <limits>
#include <vector>
#include <string>
#include <iostream>

int main()
{
    std::vector< int > vec;
    std::string str;
    std::cout << "progressao com caracteres\n";

    const char inicial_min = 'A';
    const char final_max = 'Z';
    bool continuar = true;

    while ( continuar )
    {
        bool valores_validos = true;
        char inicial, final;
        int razao ;
        std::cout << "\nInforme Inicial, Final e Razao.\n"
                  << "Limites: " << inicial_min
                  << " <= Inicial <= Final <= " << final_max << ".\n"
                  << "Razao: maior que zero \n"
                  << "e menor ou igual a (Final-Inicial+1).\n" ;
        std::cin >> inicial >> final >> razao ;

        if ( std::cin.fail( ) )
        {
            std::cout << "valores incorretos\n";
            std::cin.clear( );
            std::cin.ignore(std::numeric_limits<int>::max(), '\n');
            valores_validos = false;
        }

        if ( valores_validos )
        {
            inicial = char(toupper(inicial));
            final = char(toupper(final));
            if ( razao <= 0 )
            {
                std::cout << "Razao deve ser maior que zero.\n";
                valores_validos = false;
            }
            if ( inicial < inicial_min )
            {
                std::cout << "Inicial deve ser maior ou igual a "
                          << inicial_min << ".\n";

            }
            if ( final > final_max )
            {
                std::cout << "Final deve ser menor ou igual a "
                          << final_max << ".\n";
                valores_validos = false;
            }
            if ( inicial > final )
            {
                std::cout << "Inicial deve ser menor ou igual a Final.\n";
                valores_validos = false;
            }
            if ( razao > (final-inicial+1) )
            {
                std::cout << "Razao nao pode ser maior que "
                          << " (Final-Inicial+1).\n";
                valores_validos = false;
            }
        }

        if ( valores_validos )
        {
            unsigned int quant_num = (final-inicial+razao) / razao ;

            vec.resize( quant_num );
            str.resize( quant_num );

            unsigned int index;
            char r = char(razao);
            for ( index = 0 ; inicial <= final ; inicial = inicial + r )
            {
                vec[ index ] = inicial; // Conversão de "char" para "int": segura.
                str[ index ] = inicial; // Alimenta a string (OK: 'inicial' é "char").
                index = index + 1;
            }

            int soma = 0;
            for ( index = 0; index < vec.size() ; index = index + 1 )
            {
                soma = soma + vec[ index ];
                std::cout << vec[ index ] << "\n";
            }
            std::cout << "\nTotal de numeros no intervalo: "
                      << quant_num << "\n";
            std::cout << "Resultado da soma: " << soma << "\n";
            std::cout << "String: " << str << "\n";
            std::cout << "\ndeseja realizar novo calculo?\n"
                      << "(0 para encerrar, 1 para continuar)\n\n";
            std::cin >> continuar ;


            if ( std::cin.fail() )
            {
                std::cout << "entrada incorreta - entendida como "
                          << "encerramento\n" ;
                continuar = false ;
            }
            std::cout << "\n";
        }
        else
            std::cout << "Tente outra vez\n";
    }
    std::cout << "fim de processamento\n";
    return 0;
}
