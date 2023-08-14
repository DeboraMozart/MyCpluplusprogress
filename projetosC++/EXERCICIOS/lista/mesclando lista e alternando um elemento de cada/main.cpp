#include <iostream>
#include <list>
#include <random>

using namespace std;

int main()
{
    /*4. Exercício de mesclagem de listas:
   - Crie duas listas, cada uma com 5 números inteiros.
   - Crie uma terceira lista vazia.
   - Insira os elementos das duas primeiras listas na terceira lista, alternando um elemento de cada lista.
   - Imprima os elementos da terceira lista.
*/
    list <int> lista, lista1, lista2;

    //gerando numeros aleatorios
    random_device rd;
    mt19937 gen (rd());
    uniform_int_distribution <int> dist (1,20);

    //implentando numeros aleatorios nas listas

    for (int i = 0; i < 6; i++){
        lista1.push_back(dist(gen));
        lista2.push_back(dist(gen));
    }

    //mostrando as listas originais
    cout << "Lista 1"<< endl;
    for (const int elemento: lista1){
        cout << elemento<< " ";
    }
    cout << endl<< "Lista 2"<< endl;
    for (const int elemento: lista2){
        cout << elemento<< " ";
    }

    //implementando as duas listas na terceira
    for (int i = 0; i < 6; i++){
        lista.push_back(lista1.front());
        lista1.pop_front();
        lista.push_back(lista2.front());
        lista2.pop_front();
    }
    while(!lista.empty()){
        cout << lista.front()<<endl;
        lista.pop_front();
    }



    return 0;
}
