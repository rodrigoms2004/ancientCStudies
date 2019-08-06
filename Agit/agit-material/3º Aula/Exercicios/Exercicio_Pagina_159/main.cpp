#include <iostream>
#include <limits>
#include "funcoes.h"

bool ValidarEntrada();

int main( )
{
    std::cout << "Testa Fatorial:\n";
    int num ;
    for ( num = 0 ; num < 5 ; ++num )
        std::cout << "Fatorial de " << num << " = "
                  << Fatorial(num) << '\n';
    std::cout << "\nTesta Potencia:\n";
    for ( num = 0 ; num < 5 ; ++num )
        std::cout << "10 elevado a " << num << " = "
                  << Potencia(10, num) << '\n';
    std::cout << "\nTesta PA_TotalTermos:\n";
    int razao;

    for ( razao = 0 ; razao < 4 ; ++razao )
        std::cout << "Total termos entre 1 e 10, razao " << razao << " = "
                  << PA_TotalTermos(1, 10, razao) << '\n';

    for ( razao = -1 ; razao >- 4 ; --razao )
        std::cout << "Total termos entre 10 e 1, razao " << razao << " = "
                  << PA_TotalTermos(10, 1, razao) << '\n';

    std::cout << "Total termos entre 1 e 10, razao " << -1 << " = "
              << PA_TotalTermos(1, 10, -1) << '\n';

    std::cout << "Total termos entre 10 e 1, razao " << 1 << " = "
              << PA_TotalTermos(10, 1, 1) << '\n';

    std::cout << "Total termos entre 10 e 10, razao " << 1 << " = "
              << PA_TotalTermos(10, 10, 1) << '\n';

    std::cout << "Total termos entre 10 e 10, razao " << -1 << " = "
              << PA_TotalTermos(10, 10, -1) << '\n';

    std::cout << "\nTesta ImprimePares:\n";
    ImprimePares(1,11);
    ImprimePares(1,10);
    ImprimePares(2,11);
    ImprimePares(2,10);
    ImprimePares(12,12);
    ImprimePares(11,11);
    ImprimePares(12,11);
    std::cout << "\nTesta DobraValor:\n";
    std::cout << "Ganhando 1 real no primeiro dia de um mes,\n"
              << "e dobrando o valor todos os dias,\n"
              << "no dia 31 ganharei: \n";
    std::cout << int(DobraValor(31)) << "\n";
    std::cout << "O mesmo calculo usando o 'for': \n";
    std::cout << int(DobraValor_for(31)) << "\n";
    std::cout << "\nTesta TotalCombinacoes:\n";
    std::cout << "Usando Fatorial, sei as chances de ganhar:";
    std::cout << "\nNa MegaSena : 1 em "
              << int( TotalCombinacoes(60, 6) ) ;
    std::cout << "\nNa LotoFacil: 1 em "
              << int ( TotalCombinacoes(25, 15) ) ;

    std::cout << "\n\nSolicitando valores ao usuario\n";
    std::cout << "\nInforme numero para calculo de fatorial: ";
    std::cin >> num;

    if ( ValidarEntrada() )
        std::cout << "Fatorial de " << num << " = "
                  << Fatorial(num) << '\n';


    std::cout << "\nInforme base e expoente para calculo de Potencia: " ;
    int base, exp;
    std::cin >> base >> exp ;
    if ( ValidarEntrada() )
        std::cout << base << " elevado a " << exp << " = "
                  << Potencia(base, exp) << '\n';
    std::cout << "\nInforme inicial, final e razao p/calculo"
              << " do total de termos da PA: " ;
    int inicial, final ;
    std::cin >> inicial >> final >> razao ;
    if ( ValidarEntrada() )
        std::cout << "\nTotal de termos nessa PA: " << " = "
                  << PA_TotalTermos(inicial, final, razao) << '\n';
    std::cout << "\nInforme inicial e final p/lista de pares: " ;
    std::cin >> inicial >> final ;
    if ( ValidarEntrada() )
        ImprimePares( inicial, final );
    return 0 ;
}

bool ValidarEntrada()
{
    if ( std::cin.fail() )
    {
        std::cout << "valores incorretos\n";
        std::cin.clear();
        std::cin.ignore( std::numeric_limits<int>::max() , '\n' );
        return false; // entrada inválida
    }
    return true;
}
