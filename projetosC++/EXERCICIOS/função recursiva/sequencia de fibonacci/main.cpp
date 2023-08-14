#include <iostream>

using namespace std;
void fibonacci (int num,int cont = 1);
int main()
{
    /*Sequencia de fibonacci: cada numero seguinte é a soma dos dois anteriores. AVISO: A sequencia começa com o numero 1!!
    ex: 0 – 1 – 1 – 2 – 3 – 5 – 8 – 13 – 21 – 34 – 55 – 89 – 144*/
    int num = 0;

    return 0;
}
void fibonacci (int num,int cont){
    string resp;
    num = num + cont;
    cout << "Quer continuar?  ";
    cin >> resp;
    if (resp == "sim"){
        cont = num;
        fibonacci (int num, int cont);

    }

}
