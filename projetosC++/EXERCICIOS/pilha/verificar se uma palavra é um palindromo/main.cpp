#include <iostream>
#include <stack>

using namespace std;
bool palindromo (string palavra){
    stack <char> verificar;
    for (char letra: palavra){
        verificar.push(letra);
    }
    for (char letra: palavra){
        if (letra == verificar.top()){
            verificar.pop();
        }else {
            return false;
        }
    }
    return verificar.empty();
}

int main()
{
    /* Considere uma pilha que armazene caracteres. Escreva uma funcao que verifique se ˜
    uma palavra e um palındromo.*/

    string palavra;
    cout << "Digite uma palavra: ";
    cin >> palavra;

    palindromo (palavra);

    if (palindromo(palavra)){
        cout << "As palavra e palindromo";
    }else {
        cout << "A palavra nao e um palindromo";
    }

    return 0;
}
