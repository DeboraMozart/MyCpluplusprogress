#include <iostream>
#include <queue>

using namespace std;

int main()
{
    //diferente da pilha na fila o primeiro elemento que entra � o  primeiro a sair. Aprenda as mesmas features da pilha com adi��o de duas a front e back
    queue <string> cartas;

    cartas.push ("Rei de copas");
    cartas.push ("Rei de Espadas");
    cartas.push ("Rei de Ouros");
    cartas.push ("Rei de paus");

    cout <<"Numero de cartas na fila: "<<cartas.size()<<endl;
    cout <<"Primeira carta:  "<<cartas.front()<<endl;
    cout <<"Ultima carta:  "<<cartas.back()<<endl;

    cartas.pop();

    cout <<"Numero de cartas depois da retirada da carta: "<<cartas.size()<<endl;
    cout << "Primeira carta ap�s a retirada: "<<cartas.front()<<endl;

    while(!cartas.empty()){
        cartas.pop();
    }
    cout <<"Numero de cartas depois do loop: "<<cartas.size()<<endl;
    return 0;
}
