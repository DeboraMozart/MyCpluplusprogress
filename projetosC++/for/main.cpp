#include <iostream>

using namespace std;

int main()
{
    /*for (inicializa��o;condi��o;incremento ou decremento){
        comando;
        comando;
        comando...

    }

    */
    int x,y,z;
    for (x=0,y=0,z=0;x<=10 || z<=6;x++,y+=2,z+=2){
        cout << x << " - ";
        cout << y << " - ";
        cout << z << endl;


    }
    return 0;
}
