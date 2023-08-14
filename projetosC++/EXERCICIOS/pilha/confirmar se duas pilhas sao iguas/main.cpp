#include <iostream>
#include <stack>

using namespace std;
bool verificar (stack <char>pilha1, stack <char>pilha2){
    for (int i = 0; i < 3; i++){
        if (pilha1.top() == pilha2.top()){
            pilha1.pop();
            pilha2.pop();
        }else {
            return false;
        }
    }
}
int main()
{
    stack <char> pilha1;
    stack <char>pilha2;

    pilha1.push('a');
    pilha1.push('c');
    pilha1.push('c');
    pilha2.push('a');
    pilha2.push('b');
    pilha2.push('c');

    if (verificar(pilha1,pilha2)){
        cout << "Sao iguais";
    }else {
        cout << "Nao sao iguais";
    }
    return 0;
}
