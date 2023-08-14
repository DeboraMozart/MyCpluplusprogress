#include <iostream>

using namespace std;

int main()
{
    /*11. Escreva	 um	 programa	 que	 leia	 o	 valor	 de	 3	 ângulos	 de	 um	 triângulo	 e
    escreva	 se	 o	 triângulo	 é	 Acutângulo,	 Retângulo	 ou	 Obtusângulo.	 Sendo
    que:
    − Triângulo	Retângulo:	possui	um	ângulo	reto.	(igual	a	90º)
    − Triângulo	Obtusângulo:	possui	um	ângulo	obtuso.	(maior	que90º)
    − Triângulo	Acutângulo:	possui	três	ângulos	agudos.	(menor	que	90º)*/

    double ang;

    cout<<"Qual angulo do triangulo";
    cin >>ang;
    if (ang<90) {
        cout << "É um triangulo acutangulo";
    }else if (ang==90) {
        cout << "É um triangulo retangulo";
    }else {
        cout<< "é um triangulo obtusangulo";
    }



    return 0;
}
