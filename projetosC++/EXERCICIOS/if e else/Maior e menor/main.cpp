#include <iostream>

using namespace std;

int main()
{
    /*1. Escreva	 um	 programa	 para	 ler	 2	 valores	 (considere	 que	 	 não	 serão
informados	valores	iguais)	e	escrever	o	maior	deles.*/
    int num1, num2, maior, menor;

    cout << "Escreva o primeiro valor: ";
    cin >> num1;
    cout <<"Escreva o segundo valor: ";
    cin >> num2;

    if (num1>num2){
        cout << num1 <<endl<<"O primeiro valor é maior";
    }else {
        cout << num2<< endl << "O segundo numero é maior";
    }
    return 0;
}
