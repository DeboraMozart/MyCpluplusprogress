#include <iostream>

using namespace std;

int main()
{
    //INCREMETO: ADI��O AO NUMERO PRINCIPAL
    //1� FORMA
    int cont=10;

    //cont = cont + 1;

    //2� FORMA

    //cont+=1;

    // 3� FORMA, AQUI S� � POSS�VEL ADCIONAR 1

    cont++;
    cout << "primeira forma: " << cont;

    //O DECREMENTO � A RETIRADA DE UM NUMERO

    cont = cont - 1;
    cont-= 25;
    cont--;
    cout << "decremento: " << cont;

    // incremento e decremento pode ser usado por outros operadores matem�ticos


    //pr�-fixado altera o numero e depois mostra o valor antigo
    ++cont;
    cout <<"pr�-fixado"<< ++cont;
    //pos-fixado mostra primeiro o valor original e depois o valor mudado
    cont++;
    cout<<"p�s-fixado"<<cont++;
    return 0;
}
