#include <iostream>
#include <queue>
using namespace std;
void MenorMaior (queue <int>fila){
    int guardar, maior = 0, menor = 0;

    for (int i = 0; i < 6; i++){
        if (i==0){
            guardar = fila.front();
        }
        if (guardar < fila.front()){
            maior = fila.front();

        }else if (guardar > fila.front()){
            menor = fila.front();
        }

        fila.pop();
    }

    cout << "Maior: "<<maior<<" Menor: "<<menor<<endl;

}
void Media (queue<int>fila){
    int soma = 0 ;
    double res = 0, tam = fila.size();
    while(!fila.empty()){
        soma += fila.front();
        fila.pop();
    }
    res = soma / tam;
    cout << "Media: "<<res;
}
int main()
{
    /*Considere uma lista contendo numeros inteiros. Escreva uma funcao que calcule o maior, ˜
    o menor e a media aritm ´ etica dos seus elementos.*/

    queue <int>fila;
    for (int i = 0; i < 6; i++){
        fila.push(i);
    }
    MenorMaior(fila);
    Media (fila);

    return 0;
}
