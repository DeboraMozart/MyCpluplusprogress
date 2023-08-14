#include <iostream>
#include <random>

using namespace std;
int numpc ();

int main()
{
    /*11. Crie um jogo onde o computador sorteia um número de 1 até 10, e você tenta adivinhar qual é.*/
    random_device rd;
    mt19937 gen (rd());
    uniform_int_distribution <int>dist(1,10);
    int resp;
    int pc = numpc();

    do {
        cout << "Digite o numero:  ";
        cin >> resp;
        if (pc==resp){

            cout << "Parabens! Voce ganhou";
        }

    }while (pc!=resp);
    return 0;
}
int numpc (){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int>dist(1,10);
    return dist(gen);



}
