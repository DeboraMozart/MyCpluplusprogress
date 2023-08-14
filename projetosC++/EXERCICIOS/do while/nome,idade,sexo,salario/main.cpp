#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int main()
{
    /*3.Faça um programa que leia e valide as seguintes informações: Nome: maior que 3 caracteres; Idade: entre 0 e 150;
    Salário: maior que zero; Sexo: 'f' ou 'm'; Estado Civil: 's', 'c', 'v', 'd';*/

    int idade;
    double sal;
    char sexo;
    char nome[3];
    char ec;

    do {
        cout << "Qual a sua idade:  ";
        cin >> idade;

    }while(idade>150 || idade<0);
    do {
        cout << "Qual o seu salario: ";
        cin >> sal;

    }while(sal<0);

    do {
        cout << "Qual o seu sexo: ";
        cin >> sexo;
    }while(sexo != 'f' && sexo != 'm');

    do {
        cout << "Qual o seu estado civil: ";
        cin >> ec;
    }while(ec != 'c' && ec != 's' && ec != 'v' && ec != 'd');


    return 0;
}
