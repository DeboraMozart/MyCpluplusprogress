#include <iostream>
#include <list>
#include <random>

using namespace std;

bool PesquisaBinaria (auto lista, int num){
    int esquerda = 0;
    int direita = lista.size() - 1;

    while (esquerda<=direita){
        int meio = (esquerda+direita)/2;

        if (lista[meio]==num){
            return true;
        }
        if (lista[meio]>num){
            esquerda = meio + 1;
        }
        else {
            direita = meio - 1;
        }
        return false;
    }

}

int main()
{
    /* Exerc�cio de pesquisa bin�ria em uma lista ordenada:
   - Crie uma lista com n�meros inteiros em ordem crescente.
   - Solicite ao usu�rio um valor para buscar na lista.
   - Implemente um algoritmo de pesquisa bin�ria para encontrar o valor na lista.
   - Informe ao usu�rio se o valor foi encontrado ou n�o.*/

    list <int> lista;
    int num;


    cout << sizeof(o);

    //criando numeros aleatorios
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution <int> dist(1,20);

   //adicionando na lista
    for (int i = 0; i < 10; i++){
        lista.push_back(dist(gen));
    }

    //ordenando a lista
    lista.sort();

    //input do numero do usuario
    cout << "Digite o numero: ";
    cin >> num;
    cout << endl;



    if (PesquisaBinaria (lista, num)){
        cout << "Tem o numero";
    }else {
        cout << "Esse numero nao esta presente";
    }




    return 0;
}
