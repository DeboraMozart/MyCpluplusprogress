#include <iostream>

using namespace std;

int main()
{
    //1.Escreva um algoritmo que leia um número do teclado até que encontre um número menor ou igual a 1.
    int num;
    do {
        cout << "Digite um numero";
        cin >> num;
    }while (num >=1);
    return 0;
}
