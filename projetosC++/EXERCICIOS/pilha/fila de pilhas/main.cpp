#include <iostream>
#include <stack>
#include <queue>

using namespace std;



int main()
{
    /*Como voce implementaria uma fila de pilhas? Escreva rotinas para implementar as
    operacoes corretas de insercao e remocao de nu˜meros inteiros na pilha e de insercao e
    remocao de pilhas na fila.*/
    stack <int> pilha1, pilha2, pilha3;
    queue <stack<int>>fila;
    stack <int> pilhaaux;
    for (int i = 0; i < 6; i++){
        pilha1.push(i);
        pilha2.push(i);
        pilha3.push(i);
    }
    fila.push (pilha1);
    fila.push (pilha2);
    fila.push (pilha3);
    while (!fila.empty()){
        stack <int> pilha = fila.front();
        cout << endl;
        fila.pop();
        while (!pilha.empty()){

            int aux = pilha.top();
            pilhaaux.push(aux);
            pilha.pop();
        }
        while (!pilhaaux.empty()){
            cout << pilhaaux.top();
            pilhaaux.pop();
        }

    }

    return 0;
}
