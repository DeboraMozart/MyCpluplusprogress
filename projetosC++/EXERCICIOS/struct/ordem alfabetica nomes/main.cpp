#include <iostream>

using namespace std;
struct People {
    string nome;
    int endereco;
    int telefone;
};
void BubbleSort (People pessoas[], int tam){
    for (int i = 0; i < tam - 1; i++){
        for (int j = 0; j < tam - i - 1; j++){
            if (pessoas[j].nome > pessoas[j+1].nome){
                swap(pessoas[j].nome,pessoas[j+1].nome);
            }
        }
    }
}
int main(){
    /*Utilizando uma estrutura, fac¸a um programa que permita a entrada de nome, enderec¸o e
    telefone de 5 pessoas e os imprima em ordem alfabetica.*/

    //criando o array para acessar as informações da struct
    People pessoas[5];

    //dividindo o tamanho do array pelo tamanho de um elemento para obter a quantidade exata do array
    int tam = sizeof (pessoas)/sizeof (pessoas[0]);

    //inserindo os dados
    for (int i = 0; i < tam; i++){
        cout << "Digite o nome: ";
        cin >> pessoas[i].nome;
        cout <<endl;
        cout << "Digite o endereco: ";
        cin >> pessoas[i].endereco;
        cout << endl;
        cout << "Digite o numero de telefone: ";
        cin >> pessoas[i].telefone;
    }
    //chamando a funcao bubble sort para ordenar os nomes
    BubbleSort (pessoas, tam);
    //exibindo a funcao em ordem alfabetica
    for (int i = 0; i < tam; i++){
        cout << pessoas[i].nome;
    }
    return 0;
}
