#include "employee.h"
#include <cstring>
#include <cassert>
#include <iostream>

using namespace std;

// Inicializa o membro de dados static
int Employee::count = 0;

// Define a função membro static que retorna
// o número de objetos Employee instanciados
int Employee::getCount() { return count; }

// Construtor aloca dinamicamente o espaço para
// o primeiro e o ultimo nomes e usa strcopy para copiar
// o primeiro e o ultimo nomes para o objeto
Employee::Employee(const char *first, const char *last)
{
    firstName = new char[ strlen(first) + 1 ];
    assert(firstName != 0); // assegura-se que a memória foi alocada
    strcpy(firstName, first);

    lastName = new char[ strlen(last) + 1 ];
    assert(lastName != 0); // assegura-se que a memória foi alocada
    strcpy(lastName, last);

    ++count;    // incrementa o contador de empregados static
    cout << "Construtor para Employee " << firstName
         << ' ' << lastName << " chamado." << endl;
}

// Destruidor desaloca a memórias alocada dinamicamente
Employee::~Employee()
{
    cout << "~Employee() chamado para " << firstName
         << ' ' << lastName << endl;
    delete [] firstName;    // recupera a memória
    delete [] lastName;    // recupera a memória
    --count;    // decrementa contador de empregados static
}

// Retorna primeiro nome de Employee
const char *Employee::getFirstName() const
{
    // Const antes do tipo de retorno evita que o cliente modifique
    // dados private. Os clientes devem copiar o string retornado antes que o
    // destruidor delete a memória para evitar um ponteiro indefinido
    return firstName;
}

const char *Employee::getLastName() const
{
    // Const antes do tipo de retorno evita que o cliente modifique
    // dados private. Os clientes devem copiar o string retornado antes que o
    // destruidor delete a memória para evitar um ponteiro indefinido
    return lastName;
}


