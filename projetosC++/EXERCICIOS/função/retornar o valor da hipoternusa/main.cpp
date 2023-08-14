#include <iostream>
#include <cmath>
using namespace std;

double soma (int l1, int l2);

int main()
{
    /*01. Crie um programa que recebe dois lados menores de um triângulo retângulo e uma função retorna o valor da hipotenusa.*/
    //variaveis
    int l1,l2;




    cout << "Digite o primeiro lado  ";
    cin >> l1;
    cout << endl<<"Digite o segundo lado  ";
    cin >> l2;

    cout << soma(l1,l2);
    return 0;
}
double soma (int l1, int l2){

    double res1,res2,res3;
    return sqrt (l1*l1+l2*l2);

}
