#include <iostream>

using namespace std;
int soma (int n1, int n2);
void soma ();

int main()
{
    //� possivel criar duas ou mais fun��es com o mesmo nome, contanto que tenham argumentos diferentes
    soma (20,30);
    soma();

    return 0;
}
int soma (int n1, int n2){
    int res = n1 + n2;
    cout << "O resultado da soma de " << n1 << " + " << n2<< " = " << res<<endl;
}
void soma (){
    int n1 = 10;
    int n2 = 20;
    int res = n1 + n2;
    cout << "O resultado da soma de " << n1 << " + " << n2<< " = " << res;
}
