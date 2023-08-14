#include <iostream>

using namespace std;

int main(){

    /*4. As	maçãs	 custam	 R$	 0,30	 cada	 se	 forem	 compradas	menos	 do	 que	 uma
    dúzia,	 e	 R$	 0,25	 se	 forem	 compradas	 pelo	 menos	 doze.	 Escreva	 um
    programa	 que	 leia	 o	 número	 de	 maçãs	 compradas,	 calcule	 e	 escreva	 o
    valor	total	da	compra.*/

    int num;
    double resultado;


    cout << "Digite a quantidade de maca que foi comprada: ";
    cin >> num;

    if (num<12) {
        resultado = num * 0.30;
        cout << resultado;
    } else {
        resultado = num * 0.25;
        cout << resultado;
    }


}
