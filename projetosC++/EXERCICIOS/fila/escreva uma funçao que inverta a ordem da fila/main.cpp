#include <iostream>
#include <queue>
#include <stack>

using namespace std;

void ordemcerta (queue<int>fila){
    while(!fila.empty()){
        cout << fila.front();
        fila.pop();
    }
}
void ordeminversa(queue<int>&fila){
    int aux;
    stack<int>pilha;
    while (!fila.empty()){
        aux = fila.front();
        fila.pop();
        pilha.push(aux);
    }
    while(!pilha.empty()){
        aux = pilha.top();
        pilha.pop();
        fila.push(aux);
    }

}
int main()
{
    /*1) Considere uma pilha P vazia e uma fila F não vazia. Utilizando apenas os testes de fila
    e pilha vazias, as operações Enfileira, Desenfileira, Empilha,
    Desempilha, e uma variável aux do TipoItem, escreva uma função que inverta
    a ordem dos elementos da fila.*/
    queue <int> fila;
    for (int i = 1; i < 6; i++){
        fila.push(i);
    }
    ordemcerta(fila);
    cout <<endl;
    ordeminversa(fila);
    while (!fila.empty()){
        cout << fila.front();
        fila.pop();

    }

    return 0;
}
