#include <iostream>
#include <stack>

using namespace std;

bool Reversostring (string sentenca, string sentenca2){
    stack <char> cadeia;

    for (char palavra: sentenca){
        cadeia.push(palavra);
    }
    for (char palavra2: sentenca2){
        if (palavra2 != cadeia.top()){
            return false;
        }else if (palavra2==cadeia.top()){
            cadeia.pop();}
    }
    return cadeia.empty();

}

int main(){
    /*Considere uma pilha que armazene caracteres. Faca uma funcao para determinar se ˜
    uma string e da forma XY, onde X e uma cadeia formada por caracteres arbitrarios e Y
    e o reverso de X. Por exemplo, se x = ABCD, entao y = DCBA. Considere que x e y sao˜
    duas strings distintas.*/

    string sentenca, sentenca2;

    cout << "Digite primeira sentenca que deseja:  ";
    cin >> sentenca;
    cout << "Digite a segunda sentenca:   ";
    cin >> sentenca2;
    if (Reversostring(sentenca, sentenca2)){
        cout << "E valido";
    }else {
        cout << "E invalido";}






    return 0;
}
