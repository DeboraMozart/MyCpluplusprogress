#include <iostream>

using namespace std;

int main()
{
    /*5.Altere o programa anterior permitindo ao usu�rio informar as popula��es e as taxas de crescimento iniciais.
    Valide a entrada e permita repetir a opera��o.*/

    int a;
    int b;
    int ataxa;
    int res, years;
    years = 0;
    res = 0;
    cout << "Digite a quantidade da popula��o de A:  ";
    cin >> a;
    cout << "Digite a taxa de crescimento de A:  ";
    cin >> ataxa;
    cout << "Digite a quantidade da popula��o de B:  ";
    cin >> b;

    res = (a * ataxa )/ 100;
    cout << "Quantidade de adi��o de pessoas por ano:  "<< res;
    do {
        a += res;
        years++;
    }while (b>=a);
    cout << "Anos:  "<< years;





    return 0;
}
