#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    /*5. Escreva	 um	 programa	 para	 ler	 3	 valores	 inteiros	 (considere	 que não
    serão	lidos	valores	iguais)	e	escrevê-los	em	ordem	crescente.*/

    int n1,n2,n3;

    cout << "Escreva o primeiro valor: ";
    cin >> n1;
    cout << "Escreva o segundo valor: ";
    cin >> n2;
    cout << "Escreva o terceiro valor: ";
    cin >> n3;

    if (n1<n2&& n2<n3){
        cout <<n1<<n2<<n3;
    }else if (n2<n1 && n1<n3){
        cout << n2 << n1 << n3;
    }else {
        cout << n3 << n2 << n1;
    }
    return 0;
}
