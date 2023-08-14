#include <iostream>

using namespace std;

int main()
{
    //7.Crie um programa que faça a soma de duas matrizes 3x3.

    int matriz[3][3],matrizB[3][3],l,c,soma[3][3];

    cout << "Matriz A";
    for (l=0;l<3;l++){
        for (c=0;c<3;c++){
            cin >> matriz [l][c];

        }

    }

    for (l=0;l<3;l++){
        for (c=0;c<3;c++){
             cout << matriz [l][c]<<" ";

        }
        cout << endl;
    }
    cout << "Matriz B";

    for (l=0;l<3;l++){
        for (c=0;c<3;c++){
            cin >> matrizB [l][c];

        }

    }

    for (l=0;l<3;l++){
        for (c=0;c<3;c++){
            cout << matrizB [l][c]<< " ";

        }
        cout << endl;
    }
    cout<< endl<<endl;
    for (l=0;l<3;l++){
        for (c=0;c<3;c++){
            soma[l][c] = matriz[l][c] + matrizB [l][c];
            cout <<soma[l][c]<<" ";
        }

        cout <<endl;
    }

    return 0;
}
