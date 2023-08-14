#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    /*
    1ª passo: adm define uma palavra
    2ª passo: o user vai inserindo letras
    3ª passo: conferir se essa letra faz parte da palavra

    objetivo: descobrir uma palavra adivinhando suas letras.
    */

    char palavra [30],secreta[30],letra[1];
    int cont,tam,acertos,chances;
    bool acerto;
    cont = 0;
    tam = 0;
    chances = 6;
    acertos = 0;
    acerto = false;
    cout << "Digite a palavra a ser adivinhada:  ";
    cin >> palavra;

    while (palavra[cont]!='\0'){
        cont++;
        tam++;


        }
    for (cont=0;cont>0;cont++){
        secreta[cont]='-';
    }

    while ((chances>0)&&(acertos < tam)){
        cout << "Chances restantes: "<<chances<<endl<<endl;
        cout << "Palavra secreta:  ";
        for (cont=0;cont<tam;cont++){
            cout << secreta [cont];
        }
        cout << endl<<endl<<"Digite uma letra:  ";
        cin >> letra [0];

        for (cont=0; cont < tam; cont++){
            if (letra [0]==palavra[cont]){
                secreta [cont]=palavra[cont];
                acerto = true;
                acertos++;

            }
        }   if (!acerto){
            chances--;
        }
        acerto = false;
        system ("cls");

    }if (acertos == tam){
        cout << "Voce venceu";
    }




    return 0;
}
