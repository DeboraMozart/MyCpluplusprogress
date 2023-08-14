#include <iostream>

using namespace std;

int main()
{
    /*6. Faça um programa que leia e armazene dois vetores a e b com 5 elementos cada e apresente o resultado
    de:
    ∑(a[cont]+b[4-cont])
    i=0*/

    int vetora [5], vetorb[5], soma=0,cont;

    for (cont = 0;cont < 5; cont++){
        cout << "Digite um numero para vetor a:   ";
        cin >> vetora [cont];
        cout << "Digite um numero para vetor b:   ";
        cin >> vetorb [cont];

    }
    for (cont = 0; cont < 5; cont++){
        soma = soma +  vetora[cont] + vetorb[4-cont];

    }
    cout << soma;

    return 0;
}
