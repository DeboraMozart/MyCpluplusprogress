#include <iostream>
#include <queue>

using namespace std;
void concatenar (queue <int> &fila1, queue <int> &fila2){
    while (!fila2.empty()){
        fila1.push(fila2.front());
        fila2.pop();
    }

}
int main()
{
    /*Escreva uma func¸ao que, dado duas filas, concatene as duas filas. Retorne a fila concatenada em F1. F2 deve ficar vazia*/
    queue <int> fila1, fila2;
    for (int i = 0; i < 6; i++){
        fila1.push(i);
        fila2.push(i+5);
    }
    concatenar(fila1, fila2);
    while (!fila1.empty()){
        cout << fila1.front();
        fila1.pop();
    }
    return 0;
}
