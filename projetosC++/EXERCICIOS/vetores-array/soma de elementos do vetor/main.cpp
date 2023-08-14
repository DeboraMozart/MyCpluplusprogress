#include <iostream>

using namespace std;

int main()
{
    //1. Faça um programa que leia 5 valores inteiros, armazeno-os em um vetor, calcule e apresente a soma destes valores
    int cont,soma;
    int vetor[5];
    soma = 0;

    for (cont = 0; cont < 5;cont++){
        cout <<"Digite um numero  ";
        cin >> vetor[cont];
        soma = soma + vetor[cont];
    }
    cout << soma;

    for (cont=0;cont<5;cont++){
        cout << vetor[cont];

    }





    return 0;
}
