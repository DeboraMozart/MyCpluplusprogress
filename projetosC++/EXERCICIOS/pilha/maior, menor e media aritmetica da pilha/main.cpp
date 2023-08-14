#include <iostream>
#include <stack>

using namespace std;
void MaiorMenor(stack <int> pilha){
    int guardar = pilha.top(), manter;
    int maior = guardar;
    int menor = guardar;

    for (int i = 0; i < 5; i++){
        manter = pilha.top();
        pilha.pop();
        if (i == 0){
            guardar = manter;
        }
        if (manter>guardar){
            maior = manter;
        }else if (manter<guardar){
            menor = manter;
        }




    }
    cout << "O maior valor e: "<< maior<<endl;
    cout << " O menor valor e: "<<menor;
}
void media (stack<int>pilha){
    int soma = 0;
    double div;
    for (int i = 0; i < 6; i++){
        soma+=pilha.top();
        pilha.pop();
    }
    div = soma / 6.0;
    cout << "A media aritmetica "<< div<<endl;
}
int main()
{
    /* Dado uma pilha que armazene numeros, escreva uma funcao que fornec¸a o maior, o ˜
    menor e a media aritm ´ etica dos elementos da pilha.*/
    stack <int> pilha;
    for (int i = 0; i < 6; i++){
        pilha.push(i);
    }
    media (pilha);
    MaiorMenor(pilha);



    return 0;
}
