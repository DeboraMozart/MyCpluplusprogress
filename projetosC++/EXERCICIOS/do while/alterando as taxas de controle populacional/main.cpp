#include <iostream>

using namespace std;

int main()
{
    /*5.Altere o programa anterior permitindo ao usuário informar as populações e as taxas de crescimento iniciais.
    Valide a entrada e permita repetir a operação.*/

    int a;
    int b;
    int ataxa;
    int res, years;
    years = 0;
    res = 0;
    cout << "Digite a quantidade da população de A:  ";
    cin >> a;
    cout << "Digite a taxa de crescimento de A:  ";
    cin >> ataxa;
    cout << "Digite a quantidade da população de B:  ";
    cin >> b;

    res = (a * ataxa )/ 100;
    cout << "Quantidade de adição de pessoas por ano:  "<< res;
    do {
        a += res;
        years++;
    }while (b>=a);
    cout << "Anos:  "<< years;





    return 0;
}
