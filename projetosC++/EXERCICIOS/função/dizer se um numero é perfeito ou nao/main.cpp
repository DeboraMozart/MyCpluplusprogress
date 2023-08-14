#include <iostream>

using namespace std;
bool perf (int n);
int main()
{

    /*05. Um número é dito ser perfeito quando ele é igual a soma de seus divisores.
    Por exemplo, o seis é perfeito, pois: 6 = 1 + 2 + 3
    Programa um software que pede um número ao usuário e diga se ele é perfeito ou não.*/
    int n;


    cout << "Digite o numero:  ";
    cin >> n;

    if (perf(n)){
        cout << n <<"  Its a perfect number";

    }else {
        cout << n << "  Itsn't a perfect number";
    }


    return 0;
}
bool perf (int n){
    int soma = 0;

    for (int i = 1; i <= n/2; i++){
        if (n%i==0){
            soma+=i;

        }


    }
    return soma==n;
}
