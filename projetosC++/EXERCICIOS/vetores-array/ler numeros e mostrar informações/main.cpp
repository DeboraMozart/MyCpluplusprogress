#include <iostream>

using namespace std;

int main()
{
    /*4. Fa�a um programa que leia 10 n�meros inteiros, armazene-os em um vetor, solicite um valor de
    refer�ncia inteiro e:
    a) imprima os n�meros do vetor que s�o maiores que o valor refer�ncia
    b) retorne quantos n�meros armazenados no vetor s�o menores que o valor de refer�ncia
    c) retorne quantas vezes o valor de refer�ncia aparece no vetor*/

    int vetor[10],cont,valor,cont2,res1,res2;
    cont2 = 0;
    res1 =0;
    res2=0;
    for (cont=0;cont<10;cont++){
        cout << "Digite um numero:  ";
        cin >> vetor [cont];
    }
    cout << "Digite um valor de referencia:  ";
    cin >> valor;

    for (cont = 0;cont<10;cont++){
        if (vetor[cont]>valor){
            cont2=cont2+1;
        }else if (vetor[cont]<valor){
            res1 = res1 + 1;
        }else if (vetor[cont]==valor) {
            res2= res2+1;
        }

    }
    cout << "Quantidade de numeros maiores:  "<<cont2<<endl;
    cout <<"Quantidade de numeros menores:  "<<res1<<endl;
    cout<<"Quantidade de vezes que aparece o mesmo num do valor:  "<<res2;




    return 0;
}
