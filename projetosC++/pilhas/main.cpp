#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack <string> cartas;
    cartas.push ("Rei de copas");//push: usado para colocar as cartas
    cartas.push ("Rei de espadas");
    cartas.push ("Rei de ouros");
    cartas.push ("Rei de paus");
    cout << "Tamanho da pilha de cartas: "<<cartas.size()<<endl;//cartas.size(): mostra a quantidade de elementos dentro da pilha
    cout<<"Primeira carta colocada: "<<cartas.top()<<endl;//exibe a primeira carta colocada
    cartas.pop();//retira a ultima carta colocada
    cout << "Tamanho da pilha de cartas depois da retirada: "<<cartas.size()<<endl;

//    carta.empty();//retorna verdadeiro ou falso em relação se a pilha está vazia ou nao

    cout <<"Ela esta vazia ou nao: "<< cartas.empty()<<endl;//0 para verdadeiro e 1 para falso, neste caso nao mas se fosse colocada antes da introdução dos elementos da pilha o retorno seria 1

    while(!cartas.empty()){
        cartas.pop();

    }
    cout << "Tamanho da pilha de cartas depois do loop: "<<cartas.size();
    return 0;
}
