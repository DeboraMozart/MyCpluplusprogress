#include <iostream>

using namespace std;

int main()
{
    //1.Escreva um algoritmo que leia um n�mero do teclado at� que encontre um n�mero menor ou igual a 1.
    int num;
    do {
        cout << "Digite um numero";
        cin >> num;
    }while (num >=1);
    return 0;
}
