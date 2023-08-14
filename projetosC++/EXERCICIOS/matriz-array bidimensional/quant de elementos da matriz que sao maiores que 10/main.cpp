#include <iostream>

using namespace std;

int main()
{
    /*3.Faça um programa em Linguagem C que leia uma matriz 6 x 6, conte e escreva quantos valores maiores que 10 ela possui.*/

    int matriz [6][6],l,c,cont;
    cont=0;

    for (l=0;l<6;l++){
        for (c=0;c<6;c++){
            cin>>matriz[l][c];
            if (matriz[l][c]>10){
                cont=cont + 1;
            }
        }
    }
    cout << "Quantidade de numeros maiores que 10   "<<cont;


    return 0;
}
