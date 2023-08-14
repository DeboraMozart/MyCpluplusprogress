#include <iostream>

using namespace std;

int main()
{
    /*4.Supondo que a população de um país A seja da ordem de 80000 habitantes com uma taxa anual de crescimento de 3% e que a
      população de B seja 200000 habitantes com uma taxa de crescimento de 1.5%.
      Faça um programa que calcule e escreva o número de anos necessários para que a população do país A ultrapasse ou iguale a
      população do país B, mantidas as taxas de crescimento.*/
   int a = 80000;
   int b = 200000;
   int cont=0;

      /*80000 - 100
        x   -   3
        x=2400

        200000 - 100
            x   -   1.5

            x = 3000*/

    do {
        cont++;
        a = a + 2400;

    }while (a<=b);
    cout << "Anos necessários para chegar em B: "<<cont;

    return 0;
}
