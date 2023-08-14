#include <iostream>

using namespace std;

int main()
{
    /*5. Dados dois vetores x e y em um espaço de 10 dimensões, determine o produto escalar desses vetores
    usando um laço. */

    int vetorx [10],vetory[10],cont,res;

    for (cont = 0;cont < 10;cont++){
        cout << "Digite um numero para vetor x:  ";
        cin >> vetorx[cont];
        cout << "Digite um numero para vetor y:  ";
        cin >> vetory[cont];

    }
    for (cont = 0;cont < 10;cont++){
        res = vetorx[cont]*vetory[cont];
        cout << "Resultado da posicao "<<cont<<":  "<<res;

    }



    return 0;
}
