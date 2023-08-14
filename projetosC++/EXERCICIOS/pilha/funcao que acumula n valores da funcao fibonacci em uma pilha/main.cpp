#include <iostream>
#include <stack>

using namespace std;
void fibonacci (int numuser){
    stack <int> pilha, pilha2;
    int vetor[numuser];
    int valor = 0;
    int res;
    res = numuser + 2;
    for (int i = 0; i != res; i++){
    if (i == 0 || i == 1){  // Use operador "||" para verificar se i é igual a 0 ou 1
        vetor[0] = 0;
        vetor[1] = 1;
    }
    // Restante do código...
}

    for (int i = 2; i != res; i++){
        valor = vetor [i - 1] + vetor [i - 2];
        vetor [i] = valor;
        pilha.push (valor);
    }
    while (!pilha.empty()){
        int aux = pilha.top();
        pilha2.push(aux);
        cout << pilha2.top();
        pilha2.pop();
        pilha.pop();
    }

}


int main()
{
    int numuser;
    cout << "Quantos numeros voce quer:   ";
    cin >> numuser;
    fibonacci(numuser);
    return 0;
}
