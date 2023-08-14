#include <iostream>

using namespace std;
void contador (int num, int cont);
int main()
{
    //fazer um fatorial
    int num;
    cout << "Digite um numero:  ";
    cin >> num;
    int cont = num-1;
    contador (num,cont);
    return 0;
}
void contador (int num, int cont){
    if (cont > 0){
            num = num * cont;
            cout << num<<" * "<<cont<<" = "<<num<<endl;
        contador (num,--cont);
    }


}
