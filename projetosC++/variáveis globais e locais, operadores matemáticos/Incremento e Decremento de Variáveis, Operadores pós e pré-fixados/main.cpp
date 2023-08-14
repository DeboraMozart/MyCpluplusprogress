#include <iostream>

using namespace std;

int main()
{
    //INCREMETO: ADIÇÃO AO NUMERO PRINCIPAL
    //1ª FORMA
    int cont=10;

    //cont = cont + 1;

    //2ª FORMA

    //cont+=1;

    // 3ª FORMA, AQUI SÓ É POSSÍVEL ADCIONAR 1

    cont++;
    cout << "primeira forma: " << cont;

    //O DECREMENTO É A RETIRADA DE UM NUMERO

    cont = cont - 1;
    cont-= 25;
    cont--;
    cout << "decremento: " << cont;

    // incremento e decremento pode ser usado por outros operadores matemáticos


    //pré-fixado altera o numero e depois mostra o valor antigo
    ++cont;
    cout <<"pré-fixado"<< ++cont;
    //pos-fixado mostra primeiro o valor original e depois o valor mudado
    cont++;
    cout<<"pós-fixado"<<cont++;
    return 0;
}
