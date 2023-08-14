#include <iostream>

using namespace std;

int main()
{
    /*6.Faça um programa que peça dois números, base e expoente, calcule e mostre o primeiro número elevado ao segundo número.
    Não utilize a função de potência da linguagem.*/

    int base, ex, multi;
    cout << "Qual a base:  ";
    cin >> base;
    cout << "Qual o expoente:  ";
    cin >> ex;

   multi = 1;
    do {
        multi = base * multi;
        ex--;
    }while (ex>=1);
    cout << "resultado:   "<< multi;
    return 0;
}
