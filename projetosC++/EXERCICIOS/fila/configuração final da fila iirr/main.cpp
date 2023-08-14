#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
    /* Dada as operacoes de fila insere I e remove R, escreva a configurac¸ ˜ ao final da fila ap ˜ os´
    as seguintes operac¸oes: I(10), I(20), R, I(30), I(45), I(21), R, R.*/
    queue <int> fila;
    queue <char> fila2;
    string resp;
    int escolha, num;
    do {
        cout << "[1]Para inserir"<< endl << "[2]Para remover";
        cin >> escolha;
        switch (escolha){

        case 1:
            cout << "Escolha um numero:  ";
            cin >> num;
            fila.push(num);
            fila2.push('I');
            break;

            case 2:
            fila.pop();
            fila2.push('R');
            break;
        }
        cout << "Quer continuar? "<<endl;
        cin >> resp;
    }while (resp == "sim");

    while (!fila2.empty()){
        cout << fila2.front();
        fila2.pop();
    }


    return 0;
}
