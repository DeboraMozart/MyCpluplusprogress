#include <iostream>
#include <stack>
#include <string>

using namespace std;

void inverter(string texto){
    stack<char>trocar;
    string InverterPalavra;
    for (char palavra: texto){
        if (palavra != ' ' && palavra != '.'){
            trocar.push(palavra);
        }else {
            while (!trocar.empty()){
                InverterPalavra += trocar.top();
                trocar.pop();
            }
            if (palavra == ' ') {
                InverterPalavra += ' ';
            }else if (palavra == '.'){
                InverterPalavra += '.';
            }
        }

    }
    cout << InverterPalavra;
}

int main()
{
    /*Escreva um algoritmo, usando uma Pilha, que inverte as letras de cada palavra de um
    texto terminado por ponto (.) preservando a ordem das palavras. Por exemplo, dado o
    texto:
    ESTE EXERCICIO E MUITO FACIL. ´
    A saıda deve ser:
    ETSE OICICREXE E OTIUM LICAF*/

    string texto;
    cout << "Digite seu texto:  ";
    getline(cin, texto);

    inverter(texto);

    return 0;
}
