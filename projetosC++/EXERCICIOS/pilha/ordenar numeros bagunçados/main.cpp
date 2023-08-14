#include <iostream>
#include <stack>

using namespace std;

void ordenar(stack <int> pilha){
    int vetor [5];
    int comparacao, i;
    for (i = 0; i < 5; i++){
        if (i == 0){
            comparacao = pilha.top();
            pilha.pop();
        }
        if (pilha.top()>comparacao){
            comparacao = pilha.top();
            pilha.pop();
            vetor [i] = comparacao;
        }
    }
    for (i = 0; i < 5; i++){
        cout << vetor [i];
    }

}

int main()
{
    /*Dado uma pilha que armazene numeros, escreva uma funcao para ordenar os valores ˜
    da pilha em ordem crescente.
    */
    std::stack <int> pilha;
    int num, tam;
    for (int i = 0; i < 5; i++){
        cout <<"Digite um numero: ";
        cin >> num;
        pilha.push(num);
    }
    tam = pilha.size();
    ordenar(pilha);





    return 0;
}
