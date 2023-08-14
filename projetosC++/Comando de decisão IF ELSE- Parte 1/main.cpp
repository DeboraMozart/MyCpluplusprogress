#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    //COMANDO DE IF E ELSE, GO TO
    int num1, num2, resu;
    char escolha;

    //para voltar a algum ponto referenciado pelo "goto" basta escrever uma palavra e em seguida colocar ":"
    //para limpar a tela para a chegada de novas informações usamos "system ("cls"); além de adicionar a biblioteca dela"

    comeco:
    system ("cls");
    cout << "Escreva a primeira nota: ";
    cin >> num1;
    cout << "Escreva a segunda nota: ";
    cin >> num2;

    resu = num1 + num2;

    if (resu==100) {
        cout << "Parabéns! Você tirou nota máxima";
    } else if (resu < 60) {
        cout << "Você está de recuperação";
    } else {
        cout << "Você passou!";
    }

    cout << "Você ainda quer continuar: [s/n] ";
    cin >> escolha;
    if (escolha=='s') {
        goto comeco;
    }else {
        cout << "Fim do somatório";
    }

    return 0;
}
