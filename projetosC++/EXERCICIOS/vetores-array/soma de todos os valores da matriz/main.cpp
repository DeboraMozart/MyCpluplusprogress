#include <iostream>

using namespace std;

int main()
{
    /*1.Crie um programa que preencha todos os valores de uma matriz 2x2, e em seguida exiba todos os valores e a soma de todos
    os valores.*/

    int l,c,matriz[2][3],soma;
    soma=0;
    for (l=0;l<2;l++){
        for (c=0;c<3;c++){
            cin >> matriz[l][c];
            soma = soma + matriz [l][c];
        }
        cout << endl;
    }
    for (l=0;l<2;l++){
        for (c=0;c<3;c++){
            cout << matriz[l][c] << "  ";

        }
        cout << endl;
    }
    cout << "Soma: "<<soma;

    return 0;
}
