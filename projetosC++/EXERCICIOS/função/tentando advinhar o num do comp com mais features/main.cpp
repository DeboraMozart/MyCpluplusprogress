#include <iostream>
#include <random>
#include <cstring>

using namespace std;
int numpc ();

int main()
{
    /*12. Vamos incrementar o jogo anterior? Fa�a com que o programa diga dizer quantas tentativas voc� levou para acertar. Fa�a
    com o que o computador sorteie um n�mero de 1 at� 100. A cada vez que voc� chutar, ele deve dizer se voc� chutou abaixo do
    valor real, acima ou se acertou. Ao final, diz o n�mero de tentativas que voc� teve e se bateu o record ou n�o. Ah, ao final
    de cada rodada, o programa pergunta se voc� quer jogar novamente ou n�o, exibindo o record atual.*/
    random_device rd;
    mt19937 gen (rd());
    uniform_int_distribution <int>dist(1,100);
    int resp;
    int cont = 0;
    string quest;
    int pc = numpc();

    comeco:
    cout << pc<<endl;
    do {
        cout << "Digite o numero:  ";
        cin >> resp;


        if (pc==resp){
            cout << "Parabens! Voce ganhou"<<endl;
        }else if (resp < pc){
            cout << "O numero que voce digitou esta abaixo do valor real "<<endl;
            cont++;

        }else if (resp > pc) {
            cout << "O numero que voce digitou esta acimado valor real"<<endl;
            cont++;

        }

    }while (pc!=resp);
    cout << "Numero de tentativas:  "<<cont<<endl;
    cout << "Quer tentar de novo?  "<<endl;
    cin >> quest;
    if (quest == "sim"){
        goto comeco;

    }else {
        cout << "Fim de jogo";
    }



    return 0;
}
int numpc (){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int>dist(1,100);
    return dist(gen);



}
