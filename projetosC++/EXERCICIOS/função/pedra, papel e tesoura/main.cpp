#include <iostream>
#include <ctime>
#include <cstdlib>
#include <random>

using namespace std;
int escolhapc();
int main()
{
    /*10. Aos moldes do jogo par ou ímpar, crie o jogo do Pedra, Papel ou Tesoura, em C++.*/

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution <int>dist(1,3);
    int resp;
    int ganhap = 0; int perdep = 0; int ganhapl = 0; int perdepl = 0; int ganhat = 0; int perdet = 0; int empate = 0;

    string quest;

    do  {
    cout << "[1]Pedra [2]Papel [3]Tesoura"<<endl;
    cin >> resp ;
    int pc = escolhapc ();
    if (pc == 1) {
        cout << "Resporta do computado: Pedra"<<endl;
    }else if (pc == 2) {
        cout << "Resporta do computado: Papel"<<endl;
    }else {
        cout << "Resporta do computado: Tesoura"<<endl;
    }



    switch (resp){

    case 1:
        if (pc == 2) {
            ganhap++;
        }else if (pc == 3) {
            perdep++;
        }
        break;

    case 2:
        if (pc==1){
            ganhapl++;
        }else if (pc==3){
            perdepl++;
        }
        break;
    case 3:
        if (pc==2){
            ganhat++;
        }else if (pc==1){
            perdet++;
        }
        break;

    default:
        if (pc == resp){empate++;
        }break;
    }

    cout << "Voce quer jogar de novo?  "<<endl;
    cin >> quest;

    }while(quest == "sim");
    int totalv = ganhap + ganhapl + ganhat;
    int totald = perdep + perdepl + perdet;
    cout << "Total de vitorias:  " << totalv << endl;
    cout << "Total de derrotas:  " <<totald<<endl;
    cout << "Total de empates:   " << empate;

    return 0;
}
int escolhapc(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution <int>dist(1,3);
    return dist(gen);

}
