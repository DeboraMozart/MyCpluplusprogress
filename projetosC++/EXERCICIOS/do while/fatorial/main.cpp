#include <iostream>

using namespace std;

int main()
{
    /*7.Faça um programa que calcule o fatorial de um número inteiro fornecido pelo usuário. Ex.: 5!=5.4.3.2.1=120*/
    int num,cont;
    cout << "Digite um numero:  ";
    cin >> num;
    cont = num;
    do {
        cont--;
        num = num * cont;
    }while (cont>=1);
    cout << num;
    return 0;
}
