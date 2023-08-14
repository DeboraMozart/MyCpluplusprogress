#include <iostream>
#include <list>
#include <random>

using namespace std;

int main()
{
    /*3. Exercício de interseção de duas listas:
   - Crie duas listas, cada uma com números inteiros.
   - Implemente um algoritmo para encontrar os elementos que estão presentes nas duas listas.
   - Armazene os elementos em uma terceira lista.
   - Imprima os elementos da lista de interseção.*/

    list <int> lista1, lista2, lista3;

    //gerando numeros aleatorios
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution <int> dist (1,20);

    //adicionando valores nas listas
    for (int i = 0; i < 6; i++){
        lista1.push_back(dist(gen));
        lista2.push_back(dist(gen));
    }

    //exibindo lista 1 e lista2
    cout << "Lista 1"<< endl;
    for (const int verificar: lista1){
        cout << verificar<<" ";
    }

    cout <<"Lista 2"<<endl;
    for (const int verificar: lista2){
        cout << verificar<<" ";
    }

    //criando iterators para percorrer as listas
    auto it1 = lista1.begin();
    auto it2 = lista2.begin();

    //adicionando numeros em comum na terceira lista
    while(it1 != lista1.end() && it2 != lista2.end()){
        if (*it1 == *it2) {   //usando ponteiros para acessar o conteudo da lista
            lista3.push_back(*it1);
            ++it1;
            ++it2;
        }else if (*it1 < *it2){
            ++it1;
        }else {
            ++it2;
        }
    }

    //exibindo numeros em comum
    cout <<endl<<"Numeros em comum"<<endl;
    for (const int verificar: lista3){
        cout << verificar<< " ";
    }
    return 0;
}
