#include <iostream>

using namespace std;

int main()
{
    // Para "and" usa-se o sinal "&&" e para ou = or usa-se "or"
    /*
    EXEMPLO :
    IF (num < 3 && >1) {
        cout << "Numero aceito"

    }
    */
    //Para caso verdadeiro ou falso usa-se um encurtamento (!num) falso pois (!num) = 0 = falso. Para verdadeiro (num) = 1 = verdadeiro /*

    int num;
    num = 14;

    if ((num<5 && num>3) or (num> 10)){
        cout << "Esse número é válido" << endl;
    } else {
        cout << "Numero invalido" << endl;
    }
    return 0;
}
