#include <iostream>
#include <stack>

using namespace std;
void Inverter(stack <char>&pilha){
    int tam = pilha.size();
    stack <char>invertendo;
    char inter;
    for (int i = 0; i < tam; i++){
        inter = pilha.top();
        pilha.pop();
        invertendo.push(inter);

    }
     for (int i = 0; i < tam; i++){
        inter = invertendo.top();
        invertendo.pop();
        pilha.push(inter);

    }



}

int main()
{
    /*Desenvolva uma func¸ao para inverter a posicao dos elementos de uma pilha P*/
    stack <char> pilha;
    pilha.push('a');
    pilha.push ('b');
    pilha.push ('c');
    pilha.push('d');

    Inverter(pilha);
    while (!pilha.empty()){
        cout << pilha.top();
        pilha.pop();
    }
    return 0;
}
