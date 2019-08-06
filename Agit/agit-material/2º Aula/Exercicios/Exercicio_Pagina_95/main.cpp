#include <iostream>
#include <limits>

int main()
{
    int continuar = 1;
    while ( continuar )
    {
        int inicial, final, razao, result ;
        std::cout << "\ninforme os números inicial, final e a razão\n" ;
        std::cin >> inicial >> final >> razao ;

        if ( std::cin.fail( ) )
        {
            std::cout << "valores incorretos: tente outra vez\n";
            std::cin.clear( );
            std::cin.ignore(std::numeric_limits<int>::max(), '\n');
        }
        else
        {
            if ( razao == 0 )
                std::cout << "razao não pode ser zero - tente outra vez\n";
            else
            {
                if ( inicial > final )
                {
                    std::swap( inicial, final );
                }

                if ( razao < 0 )
                {
                    razao = -razao; // "razao" passa de negativo para positivo
                    std::cout << "razao alterada para : " << razao << "\n";
                }

                for ( result = 0 ; inicial <= final ; inicial += razao )
                    result += inicial ; // executa se condição verdadeira
                std::cout << "resultado da soma: " << result << "\n";
                std::cout << "\ndeseja realizar novo calculo?\n"
                          << " (0 para encerrar, qualquer outro numero "
                          << "para continuar)\n";
                std::cin >> continuar ;

                if ( std::cin.fail() )
                {
                    std::cout << "entrada incorreta - " <<
                                 "entendida como encerramento\n" ;
                    continuar = 0 ; //
                }
            }
        }
    }
    std::cout << "\nfim de processamento\n";
    return 0;
}
