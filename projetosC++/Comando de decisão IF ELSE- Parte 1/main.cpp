#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    //COMANDO DE IF E ELSE, GO TO
    int num1, num2, resu;
    char escolha;

    //para voltar a algum ponto referenciado pelo "goto" basta escrever uma palavra e em seguida colocar ":"
    //para limpar a tela para a chegada de novas informa��es usamos "system ("cls"); al�m de adicionar a biblioteca dela"

    comeco:
    system ("cls");
    cout << "Escreva a primeira nota: ";
    cin >> num1;
    cout << "Escreva a segunda nota: ";
    cin >> num2;

    resu = num1 + num2;

    if (resu==100) {
        cout << "Parab�ns! Voc� tirou nota m�xima";
    } else if (resu < 60) {
        cout << "Voc� est� de recupera��o";
    } else {
        cout << "Voc� passou!";
    }

    cout << "Voc� ainda quer continuar: [s/n] ";
    cin >> escolha;
    if (escolha=='s') {
        goto comeco;
    }else {
        cout << "Fim do somat�rio";
    }

    return 0;
}
