#include <iostream>
#include <limits>

using namespace std;

#define NUM_NOTAS 10

bool temErro();
void imprimeArray(int a[], int tamanho);
int maiorNota(int notas[], int tamanho);

int main()
{
    int notas[NUM_NOTAS];
    int nota, count = 0;
    while (count < NUM_NOTAS) {
        cout << "Entre com a nota " << count << " :";
        cin >> nota;
        if(temErro()) {
            cout << "Entre com uma nota válida!" << endl;
            continue;
        } else {
            if (nota < 0 || nota > 10) {
                cout << "Entre com uma nota entre 0 e 10: " << endl;
                continue;
            } else
            {
                notas[count] = nota;
            }   // end else
        }   // end else
        count++;
    }   // end while

    imprimeArray(notas, NUM_NOTAS);
    cout << "Maior nota: " << maiorNota(notas, NUM_NOTAS) << endl;

    //cout << "Hello World!" << endl;
    return 0;
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


void imprimeArray(int a[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
        cout << a[i] << endl;
}

int maiorNota(int notas[], int tamanho)
{
    int maiorNota = notas[0];
    for (int i = 0; i < tamanho; i++)
    {
        if(maiorNota < notas[i])
            maiorNota = notas[i];
    }   // end for
    return maiorNota;
}

/*
int a[] = {1, 2, 3, 4, 5};

for (int *ptr = a;*ptr != NULL; ++ptr) {
    cout << *ptr << ' ';
}
*/
