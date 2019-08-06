#include <iostream>

using namespace std;

int main()
{
    double altura, peso, imc;

    cout << "Digite sua altura: ";
    cin >> altura;
    cout << "Digite seu peso: ";
    cin >> peso;
    imc = peso / (altura * altura);

    if(imc < 17)
        cout << "Muito abaixo do peso.\n";
    else if(imc >= 17 && imc <= 18.49)
        cout << "Abaixo do peso.\n";
    else if(imc >= 18.5 && imc <= 24.99)
        cout << "Peso normal.\n";
    else if(imc >= 25.0 && imc <= 29.99)
        cout << "Acima do peso.\n";
    else if(imc >= 30.0 && imc <= 34.99)
        cout << "Obesidade morbida I.\n";
    else if(imc >= 35.0 && imc <= 39.99)
        cout << "Obesidade morbida II (Severa).\n";
    else if(imc >= 40)
        cout << "Obesidade morbida III.\n";


    cout << "Seu IMC eh de: " << imc << '\n';

    return 0;
}

