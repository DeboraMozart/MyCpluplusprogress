#include <iostream>
#include <stack>

using namespace std;
bool verificar (stack <int>pilha1, stack<int>pilha2){
    if (pilha1.size()<pilha2.size()){
        return true;
    }else {
        return false;
    }
}
int main()
{
    /* Desenvolva uma func¸ao para testar se uma pilha P1 tem mais elementos que uma pilha ˜
    P2.*/
    stack <int> pilha1;
    stack <int>pilha2;
    int i;
    for (i = 0; i < 7; i++){
        pilha1.push(i);
    }
    for (i = 0; i < 6; i++){
        pilha2.push(i);
    }
    if (verificar(pilha1,pilha2)){
        cout << "Pilha 1 é menor que pilha 2";
    }else {
        cout << "Pilha 1 é maior que pilha 2";
    }

    return 0;
}
