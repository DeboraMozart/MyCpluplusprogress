#include <iostream>
#include <queue>

using namespace std;
void reverso (queue<int>&fila){
    int aux;
    queue <int> fila2;
    while (!fila.empty()){
        aux = fila.front();
        fila.pop();
        fila2.push(aux);
    }
    while (!fila2.empty()){
        aux = fila2.front();
        fila2.pop();
        fila.push(aux);
    }

}
int main()
{
    /*Implemente a funcao ˜reverso, que reposiciona os elementos na fila de tal forma que o
    inıcio da fila torna-se o fim, e vice-versa*/
    queue<int>fila;
    for (int i = 0; i < 6; i++){
        fila.push(i);
    }
    reverso(fila);
    while (!fila.empty()){
        cout << fila.front();
        fila.pop();
    }

    return 0;
}
