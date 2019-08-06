#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    cout << "=== a.testando stringz\n";
    string nome;
    nome = "Maria";
    cout << nome << "\n" ; // imprime [Maria]
    nome = nome + " da Silva" ;
    std::cout << nome << "\n" ; // imprime [Maria da Silva]
    // === b. vector :
    std::cout << "\n=== b. testando vector\n";
    // um vetor para armazenar o total de vendas em um trimestre:
    const unsigned int trimestres_ano = 4 ; // total de trimestres no ano...

    // declara o vetor, que conterá uma série de objetos do tipo double:
    std::vector <double> vendas_trimestres; // tipo em uso: double

    // define a quantidade de elementos do vetor
    // (usando uma variável ou uma constante):
    vendas_trimestres.resize( trimestres_ano ); // vetor para 4 elementos

    // pede ao usuário que informe o total de vendas de cada trimestre:
    std::cout << "informe total de vendas de cada trimestre:\n";
    unsigned int index ;
    for ( index = 0 ; index < trimestres_ano ; index = index + 1 )
    {
    std::cout << "informe o trimestre : " << index + 1 << "\n";
    std::cin >> vendas_trimestres [ index ] ; // entrada para cada um
    }

    // imprime cada trimestre e totaliza os valores para o ano inteiro:
    std::cout << "\nimprimindo os valores informados:\n";
    double total_ano = 0;
    for ( index = 0 ; index < trimestres_ano ; index = index + 1 )
    {
    std::cout << vendas_trimestres [ index ] << "\n" ;
    total_ano = total_ano + vendas_trimestres [ index ] ;
    }

    // imprime o total do ano:
    std::cout << "\ntotal vendas no ano : " << total_ano << "\n" ;


    return 0;
}   // end main

