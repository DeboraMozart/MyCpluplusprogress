#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    /*7. Escreva	um	programa	para	ler	o	número	de	lados	de	um	polígono	regular
    e	a	medida	do	lado	(em	cm).	Calcular	e	imprimir	o	seguinte:
    − Se	o	número	de	lados	for	igual	a	3	escrever	TRIÂNGULO	e	o	valor	da
    área
    − Se	o	número	de	lados	for	igual	a	4	escrever	QUADRADO	e	o	valor	da
    sua	área.
    − Se	o	número	de	lados	for	igual	a	5	escrever	PENTÁGONO.*/

    int lados;
    double medida,resultado;

    cout << "Quantos lados tem o poligono regular";
    cin >> lados;
    cout << "Qual a medida do lado";
    cin >> medida;

    if (lados == 3){
            cout << "O poligono é um triangulo"<< endl;
            resultado = (medida*medida) * sqrt(3) / 4;
            cout <<"a area é:" << resultado;
    } else if (lados==4){
            resultado = medida * medida;
            cout << "O poligono é um quadrado"<< endl;
            cout <<"a area é:" << resultado;

    }else if (lados==5) {
            cout << "O poligono é um pentagono"<< endl;
            resultado = ((medida*medida) * sqrt(3) / 4)*5;
            cout <<"a area é:" << resultado;
    }else if (lados < 3){
            cout << "Nao e um poligono";
    }else {
            cout << "Poligono nao identificado";
    }


    return 0;
}
