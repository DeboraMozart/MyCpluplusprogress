#include <iostream>

using namespace std;

int main(){

    /*4. As	ma��s	 custam	 R$	 0,30	 cada	 se	 forem	 compradas	menos	 do	 que	 uma
    d�zia,	 e	 R$	 0,25	 se	 forem	 compradas	 pelo	 menos	 doze.	 Escreva	 um
    programa	 que	 leia	 o	 n�mero	 de	 ma��s	 compradas,	 calcule	 e	 escreva	 o
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
