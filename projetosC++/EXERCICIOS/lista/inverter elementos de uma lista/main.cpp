#include <iostream>
#include <list>

using namespace std;
void inverter (list <int> &lista){
    list <int>lista2;
    for (int i = 0; i < 10; i++){
        lista2.push_front(lista.back());
        lista.pop_back();
    }
    while(!lista2.empty()){
        cout<<lista2.front();
        lista2.pop_front();
    }
}
int main()
{
    /*Exerc�cio de invers�o de elementos em uma lista:

    Crie uma lista com os n�meros de 1 a 10.
    Implemente um algoritmo para inverter a ordem dos elementos na lista.
    Imprima os elementos da lista ap�s a invers�o.*/

    list <int> lista;
    for (int i = 0; i < 10; i++){
        lista.push_front(i);
    }
    inverter (lista);

    return 0;
}
