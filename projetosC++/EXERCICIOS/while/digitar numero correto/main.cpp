#include <iostream>

using namespace std;

int main()
{
    /*5.Faça um programa que peça ao usuário um número entre 12 e 20. Se a pessoa digitar um número diferente, mostrar a mensagem
    "entrada inválida" e solicitar o número novamente. Se digitar correto mostrar o número digitado.*/


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
