#include <iostream>

using namespace std;

int main()
{
    /*6.Fa�a um programa que pe�a dois n�meros, base e expoente, calcule e mostre o primeiro n�mero elevado ao segundo n�mero.
    N�o utilize a fun��o de pot�ncia da linguagem.*/

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
