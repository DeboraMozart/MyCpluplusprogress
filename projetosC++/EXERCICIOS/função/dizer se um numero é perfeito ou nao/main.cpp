#include <iostream>

using namespace std;
bool perf (int n);
int main()
{

    /*05. Um n�mero � dito ser perfeito quando ele � igual a soma de seus divisores.
    Por exemplo, o seis � perfeito, pois: 6 = 1 + 2 + 3
    Programa um software que pede um n�mero ao usu�rio e diga se ele � perfeito ou n�o.*/
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
