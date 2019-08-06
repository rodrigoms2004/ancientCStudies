#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define TAMANHO_VETOR 10

int main()
{

    vector<int> teste;

    teste.resize(TAMANHO_VETOR);

    for(int i = 0; i < TAMANHO_VETOR; i++)
        teste[i] = i + 10;

    for(int i = 0; i < TAMANHO_VETOR; i++)
        cout << teste[i] << ' ';
    return 0;
}

