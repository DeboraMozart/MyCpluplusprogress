#include <iostream>
#include <stack>
#include <queue>

using namespace std;

void inverter (queue<int>&fila){
    stack <int> pilha;
    int aux;
    for (int i = 0; i < 6; i++){
        aux = fila.front();
        fila.pop();
        pilha.push(aux);
    }
    for (int i = 0; i < 6; i++){
        aux = pilha.top();
        pilha.pop();
        fila.push(aux);
    }
}

int main()
{
    /* Considere uma pilha P vazia e uma fila F nao vazia. Utilizando apenas as funcoes da fila ˜e da pilha, escreva uma funcao que
    inverta a ordem dos elementos da fila.*/
    queue <int> fila;
    for (int i = 0; i < 6; i++){
        fila.push(i);
    }
    inverter (fila);
    while (!fila.empty()){
        cout << fila.front();
        fila.pop_front();
    }

    return 0;
}
