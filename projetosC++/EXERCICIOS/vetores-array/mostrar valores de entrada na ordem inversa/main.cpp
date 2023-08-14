#include <iostream>

using namespace std;

int main()
{
    //3. Faça um programa que leia 10 valores reais e os apresente na ordem inversa entrada.

    int vetor [10], cont;

    for (cont = 0; cont < 10; cont++){
        cout << "Digite um numero:  ";
        cin >> vetor[cont];
    }

   for (cont = 9; cont >= 0; cont--){
        cout << vetor[cont]<< endl;
    }
    return 0;
}
