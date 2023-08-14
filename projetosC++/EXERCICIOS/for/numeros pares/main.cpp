#include <iostream>

using namespace std;

int main()
{
    //2.Fazer um programa para encontrar todos os números pares entre 1 e 100.

    int cont;

    for (cont=0;cont<=100;cont++){
        if (cont%2==0){
            cout << cont << endl;
        }

    }
    return 0;
}
