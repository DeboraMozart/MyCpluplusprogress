#include <iostream>
#include <queue>

using namespace std;
void excluir (queue<int>&fila){
    queue <int>fila2;

    while (!fila.empty()){
        if (fila.front()<0){
            fila2.push(0);
            fila.pop();
        }else{
            int aux = fila.front();
            fila2.push(aux);
            fila.pop();
        }
    }
     while (!fila2.empty()){
        int aux = fila2.front();
        fila.push(aux);
        fila2.pop();

    }
}
int main()
{
    /*Dada uma fila de inteiros, escreva um programa que exclua todos os numeros negativos ´
    sem alterar a posic¸ao dos outros elementos da fila.*/
    queue <int> fila;
    fila.push(-1);
    fila.push (6);
    fila.push(3);
    fila.push(-9);
    fila.push(4);

    excluir(fila);
    while (!fila.empty()){
        cout << fila.front();
        fila.pop();
    }
    return 0;
}
