#include <iostream>

using namespace std;

int main()
{
    /*10. Escreva	 um	 programa que	 leia	 as	 medidas	 dos	 lados	 de	 um	 triângulo	 e
    escreva	se	ele	é	Equilátero,	Isósceles	ou	Escaleno.	Sendo	que:
    − Triângulo	Equilátero:	possui	os	3	lados	iguais.
    − Triângulo	Isóscele:	possui	2	lados	iguais.
    − Triângulo	Escaleno:	possui	3	lados	diferentes.*/

    int a,b,c;

    cout << "Qual a medida do lado A: ";
    cin >> a;
    cout << "Qual a medida do lado B: ";
    cin >> b;
    cout << "Qual a medida do lado c: ";
    cin >> c;

    if ((a==b ) || (a==c)){
        cout << "Esse é um triangulo isoceles";
    }else if ((a!=b) && (a!=c) && (b!=c)) {
        cout << "Esse é um triangulo escaleno";
    }else {
        cout<<"Esse é um triangulo equilatero";
    }

    return 0;

}
