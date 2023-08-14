#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>
using namespace std;
int escolhauser ();
int main()
{
    /*09. Crie um jogo de par ou ímpar. Você deve escolher 0 para par ou 1 para ímpar, em seguida fornece um número.
     O computador gera um número de 0 até 10, soma os valores e diz quem ganhou, além de mostrar o placar e perguntar se quer
     jogar mais uma rodada. Como fazer o jogo Par ou Ímpar em C++*/
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    int resp,num,res;
    int pont1 = 0;
    int pont2 = 0;
    char questao;

    comeco:
    cout << "Escolha entre [0]par ou [1]impar:  ";
    cin >> resp;
    cout << "Digite o seu numero:  ";
    cin >> num;
    cout << "Numero do computador:  "<<escolhauser();
    res = num + escolhauser();
    if (res%2==resp){
        pont1++;

    }else {
        pont2++;
    }
    std::cout << "Sua pontuacao:  "<<pont1;
    std::cout << "Pontuacao do computador:  "<<pont2;
    std::cout << "Voce quer continuar?  ";
    std::cin >> questao;
    if (questao == "sim"){
        goto comeco;
    }else {
        cout << "Fim do jogo";
    }



     return 0;
}
int escolhauser (){
    int max=10;
    int min = 1;

    return min + (std::rand () % (max-min+1));



}
