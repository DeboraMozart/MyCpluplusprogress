#include <iostream>

using namespace std;

int main()
{
    /*5.Fa�a um programa que pe�a ao usu�rio um n�mero entre 12 e 20. Se a pessoa digitar um n�mero diferente, mostrar a mensagem
    "entrada inv�lida" e solicitar o n�mero novamente. Se digitar correto mostrar o n�mero digitado.*/


    inicio:
    int cont, num;
    cont = 0;

    cout << "Digite um numero";
    cin >> num;

    if (num > 12  &  num < 20) {
        cout << "numero digitado"<< num;
    }


    while (num < 12  ||  num > 20) {
        cout << "Entrada invalida"<<endl;
        goto inicio;
    }



    return 0;
}
