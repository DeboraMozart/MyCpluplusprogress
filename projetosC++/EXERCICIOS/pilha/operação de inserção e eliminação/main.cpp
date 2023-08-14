#include <iostream>
#include <stack>

using namespace std;

bool ValidarSequencia(string& sequencia){
    stack <char> pilha;

    for (char c: sequencia){//No caso do loop for (char c = sequencia), a vari�vel sequencia � uma string, que n�o pode ser atribu�da diretamente a uma vari�vel do tipo char. Isso resultaria em uma incompatibilidade de tipo e um erro de compila��o. "for (char c : sequencia)" Essa sintaxe permite que o loop itere corretamente sobre cada caractere da sequ�ncia, atribuindo-o � vari�vel de itera��o c. Dessa forma, voc� pode processar individualmente cada caractere dentro do corpo do loop.
    if (c == 'I'){
        pilha.push(c);
    }else if (c == 'E'){
        if (pilha.empty()){
            return false;
        }
        pilha.pop();
    }}
    return pilha.empty();

}

int main()
{
    /*Uma sequencia de operacoes insercao (I) e eliminacao (E) numa pilha �e dita valida se �
    ela tem igual numero de Is e Es e todas as operacoes podem ser efetuadas na pilha, ou �
    seja, a eliminacao so pode acontecer se a pilha nao estiver vazia. Formule uma regra �
    que permita determinar se uma sequencia (ex: IIEE) � valida ou nao.*/

    string sequencia;
    cout << "Digite a sequencia de opera��es [I]PARA INSECAO E [E]PARA ELIMINACAO:   ";
    cin >> sequencia;

    if (ValidarSequencia(sequencia)){
        cout << "A sequencia e valida";

    }else {
        cout << "A sequencia e invalida";
    }

    return 0;
}
