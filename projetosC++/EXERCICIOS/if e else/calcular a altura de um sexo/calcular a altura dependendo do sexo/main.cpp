#include <iostream>

using namespace std;

int main()
{
    /*6. Tendo	 como	 entrada	 a	 altura	 e	 o	 sexo	 (codificado	 da	 seguinte	 forma:
    1:feminino	 	 2:masculino)	 de	 uma	 pessoa,	 construa	 um	 programa	 que
    calcule	e	imprima	seu	peso	ideal,	utilizando	as	seguintes
    Fórmulas:
    - para	homens:	(72.7	*	Altura)	– 58
    - para	mulheres:	(62.1	*	Altura)	– 44.7	*/

    int sexo;
    double altura, resultado;

    cout << "Qual o seu sexo? [1Fem ou 2Masc] "<< endl;
    cin >> sexo;
    cout << "Qual a sua altura? "<< endl;
    cin >> altura;
    if (sexo == 1){
        resultado = (62.1	*	altura)	- 44.7;
        cout << resultado;
    }else if (sexo == 2){
        resultado = (72.7	*	altura)	- 58;
        cout << resultado;
    }

    return 0;
}
