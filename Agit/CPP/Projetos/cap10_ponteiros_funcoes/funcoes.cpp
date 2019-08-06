#include "funcoes.h"
#include <limits>
#include <iostream>

using namespace std;

// Função que oferece dois retornos.
// Essa função pega uma entrada no teclado.
// - o retorno formal (bool) indica se a operação foi bem sucedida
// - e o parâmetro ponteiro devolve o valor digitado.


bool validar_entrada(int *param_ptr)
{
    // Imprime linhas para exibir conteúdo e endereço do parâmetro
    // (apenas para teste, já que isto não tem nada a ver
    // com o objetivo da função):

    std::cout << "\n-validar_entrada: testando conteudo\n"
              << "e endereco do parametro 'param_ptr'\n";
    std::cout << "conteudo de 'param_ptr' = " << param_ptr << '\n';
    std::cout << "endereco de 'param_ptr' = " << &param_ptr << '\n';
    std::cout << "conteudo inicialmente APONTADO por 'param_ptr' = "
              << *param_ptr << '\n';

    // Agora sim, faz o trabalho real desta função
    std::cout << "\n-validar_entrada: entre com um numero inteiro: ";
    std::cin >> *param_ptr ; // alterando a memória APONTADA

    if( std::cin.fail())
    {
        std::cout << "entrada invalida\n";

        // Limpar erros:
        std::cin.clear();

        // Ignora "new-lines" pendentes no buffer
        std::cin.ignore(std::numeric_limits<int>::max(),'\n');

        return false;   // entrada inválida
    }   // end if
    return true;    // entrada válida
}
