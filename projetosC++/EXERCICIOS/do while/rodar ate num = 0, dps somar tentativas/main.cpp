#include <iostream>

using namespace std;

int main()
{
    /*2.Crie um programa que leia um número do teclado até que encontre um número igual a zero. No final, mostre a soma dos
    números digitados.*/
    int num,soma;
    do {
        cout << "Digite um numero";
        cin >> num;
        soma = soma + num;
    }while (num !=0);
    cout << "Soma: "<<soma;
    return 0;
}
