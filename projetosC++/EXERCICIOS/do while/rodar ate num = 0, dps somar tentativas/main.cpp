#include <iostream>

using namespace std;

int main()
{
    /*2.Crie um programa que leia um n�mero do teclado at� que encontre um n�mero igual a zero. No final, mostre a soma dos
    n�meros digitados.*/
    int num,soma;
    do {
        cout << "Digite um numero";
        cin >> num;
        soma = soma + num;
    }while (num !=0);
    cout << "Soma: "<<soma;
    return 0;
}
