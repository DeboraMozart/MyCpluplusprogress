#include <iostream>

using namespace std;

int main()
{
    //4.Fa�a um programa que mostre a tabuada de um n�mero N (N ser� lido do teclado).
inicio:
    intj66 cont,num,resultado;
    char op;
    cont = 0;



    while (cont++<10){
            if (cont==1){
            cout << "Digite o numero que deseja multiplicar: ";
            cin>>num;}
        resultado = num * cont;
        cout << num << "*" << cont << "=" <<resultado<<endl;
    }
    cout << "Ainda deseja continuar[s/n]";
    cin >> op;

    if (op=='s') {
        goto inicio;
    }else {
        cout << "fim";
    }
    return 0;
}
