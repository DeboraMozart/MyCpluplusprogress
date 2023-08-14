#include <iostream>

using namespace std;

int main()
{
    //3.Ler um valor inteiro (aceitar somente valores entre 1 e 10) e escrever a tabuada de 1 a 10 do valor lido.

    int cont,valor,res;

    while (true){
        cout << "Digite um valor: ";
        cin >> valor;
        if (valor>=1 & valor<=10) {
            break;
        }
    }
    for (cont = 0; cont <= 10; cont++){
        res = valor * cont;
        cout << valor << " * " << cont << " = " << res << endl;
    }
    return 0;
}
