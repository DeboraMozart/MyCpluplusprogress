#include <iostream>

using namespace std;

int main()
{
    /*4.Faça um programa em Linguagem C que lê uma matriz de 3 x 3 elementos usando um comando for, multiplica cada elemento por
    5 e imprime o resultado.*/

    int matriz [3][3],l,c,resu;

        for(l=0;l<3;l++){
            for(c=0;c<3;c++){
                cin >> matriz[l][c];
            }
        }
         for(l=0;l<3;l++){
            for(c=0;c<3;c++){
                cout << 5 * matriz[l][c]<< endl;
            }
        }
    return 0;
}
