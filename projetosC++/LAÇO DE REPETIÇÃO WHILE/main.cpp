#include <iostream>

using namespace std;

int main()
{
    int cont;

    cont=0;

   //primeira forma
   /* while (cont++ < 10) {
            cout << cont<<endl;

    }*/

    //segunda forma

    /*while (cont<10) {
        cout << cont;
        cont+=3;
    }*/

    //terceira forma
    /*while (cont<10){
        cout << "Digite um numero";
        cin >> cont;

    }*/

    //quarta forma

    while (cont < 10) {
        cout << "Digite um numero";
        cin >> cont;

        if (cont==5){
            break;
        }

    }
    return 0;
}
