#include <iostream>

using namespace std;

int main()
{
    //5.Some os elementos pares da matriz e escreva o resultado na tela.

    int matriz [3][3],l,c,res;
    res=0;
    for(l=0;l<3;l++){
        for (c=0;c<3;c++){
            cin>> matriz[l][c];
        }
    }

    for(l=0;l<3;l++){
        for (c=0;c<3;c++){
            if ( matriz[l][c]%2==0){
                res = res + matriz [l][c];
            }
        }
    }
    cout << "Resultado:  "<<res;
    return 0;
}
