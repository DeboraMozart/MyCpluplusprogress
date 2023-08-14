#include <iostream>
#include <list>
#include <random>

using namespace std;


int main()
{
    /*Exerc�cio de remo��o de elementos duplicados em uma lista:

    Crie uma lista com valores inteiros aleat�rios.
    Implemente um algoritmo para remover os elementos duplicados da lista, mantendo apenas uma ocorr�ncia de cada valor.*/
    list <int>lista;

    //gerando valores inteiros obrigatorios
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution <int> dist (1,10);

    //preenchendo a lista com valores aleatorios
    for (int i = 0; i < 20; i++){
        lista.push_front(dist(gen));
    }

    //imprimindo a lista original
    for (const int elemento: lista){ // refer�ncia constante const int& para percorrer os elementos da lista durante a itera��o nos loops for. Dessa forma, podemos acessar diretamente o valor de cada elemento da lista sem a necessidade de usar ponteiros.
        cout << elemento<<" ";
    }
    cout << endl;
    //Ordenando a lista para facilitar a remo��o de duplicatas

    lista.sort();

    //Removendo os elementos duplicados
    lista.unique();

    //imprimindo a lista sem duplicatas
    for (const int elemento: lista){
        cout<<elemento<<" ";
    }



    return 0;
}
