#include <iostream>

using namespace std;

int main()
{
    //2. Altere o programa anterior para calcular e apresentar a média dos valores entrados e aqueles que são maiores e menores que a média.

    int soma, cont, vetor[5],maior,menor;
    double media;
    soma = 0;


    for (cont = 0; cont < 5; cont++){
        cout << "Digite um numero  ";
        cin >> vetor[cont];
        soma = soma + vetor[cont];
        if (cont == 1){
            maior = vetor [cont];
            menor = vetor [cont];

        }
        if (vetor[cont] > maior){
            maior = vetor [cont];

        }
        if (vetor[cont]<menor){
            menor = vetor[cont];
        }
    }
    media = soma/2;
    cout << "Media "<< media;
    cout << "menor  " << menor;
    cout << "Maior  " << maior;


    return 0;
}
