#include "funcoes.h"
#include <limits>
#include <iostream>

using namespace std;


bool validar_entrada(int & param_ref) // 'param_ref' é uma referencia
{
    // Imprime linhas para exibir conteúdo e endereço do parâmetro
    // (apenas para teste, já que isto não tem nada a ver
    // com o objetivo da função):
    std::cout << "\n-validar_entrada: testando conteudo\n"
              << "e endereco do parametro referencia 'param_ref'\n";
    std::cout << "conteudo inicial de 'param_ref' = " << param_ref
              << '\n';
    std::cout << "endereco de 'param_ref' = " << &param_ref << '\n';

    // Agora sim, faz o trabalho real desta função:
    std::cout << "\n-validar_entrada: entre com um numero inteiro: ";
    std::cin >> param_ref ; // alterando a memória referenciada
    if ( std::cin.fail() )
    {
        std::cout << "entrada invalida\n";
        // Limpa erros:
        std::cin.clear();
        // Ignora "newlines" pendentes no buffer:
        std::cin.ignore( std::numeric_limits<int>::max() , '\n' );
        return false ; // entrada inválida
    }
    return true;
}
