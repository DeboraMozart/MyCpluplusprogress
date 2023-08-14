#include <iostream>
#include <queue>

using namespace std;
void intercalar (queue <int> &fila1, queue <int> &fila2){
    queue <int> filarecebe;
    while (!fila1.empty() && !fila2.empty()){
        filarecebe.push(fila1.front());
        fila1.pop();
        filarecebe.push(fila2.front());
        fila2.pop();
    }
    while(!filarecebe.empty()){
        cout << filarecebe.front() << "  ";
        filarecebe.pop();
    }
}
int main()
{
    /* Fac¸a uma func¸ao para intercalar filas: a func¸ ˜ ao recebe as duas filas e retorna a fila com ˜
    os elementos das duas filas intercalados conforme a ordem com que elas se dispoe na ˜
    fila.*/
    queue <int> fila1, fila2;
    for (int i = 0; i < 6; i++){
        fila1.push(i);
        fila2.push(i+5);
    }
    intercalar (fila1, fila2);

    return 0;
}
