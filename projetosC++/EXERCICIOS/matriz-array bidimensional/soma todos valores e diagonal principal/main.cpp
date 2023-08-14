#include <iostream>

using namespace std;

int main()
{
    /*2.Crie um programa que receba valores do usuário para preencher uma matriz, e em seguida, exiba a soma dos valores dela
    e a soma dos valores da primeira diagonal,ou seja, diagonal principal.*/

    int matriz [3][3], soma, l,c,somaD;

    soma = 0;
    somaD = 0;



    for (l=0;l<3;l++){
        for (c=0;c<3;c++){
            cin >> matriz [l][c];
            soma = soma + matriz [l][c];

        }
    }
    cout << "EXIBICAO DA MATRIZ"<<endl<<endl;
     for (l=0;l<3;l++){
        for (c=0;c<3;c++){
            cout << matriz [l][c]<<"  ";

        }
        cout <<endl;
    }

    for (l=0;l<3;l++){
        for (c=0;c<3;c++){
            if (l==c){
                somaD=somaD + matriz [l][c];

            }
        }

    }
    cout << "Soma dos elementos"<<soma<<endl;
    cout << "Res  "<< somaD;
    return 0;
}
