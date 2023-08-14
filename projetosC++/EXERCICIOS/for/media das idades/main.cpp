#include <iostream>

using namespace std;

int main()
{
    /*4.Leia várias idades e calcule a média entre as idades (usar uma variável para idade).*/
    int cont,idade,media,soma;
    char esc;

    soma=0;
    for (cont=0;esc != 'n';cont++) {
       cout << "Digite a sua idade";
       cin >> idade;
       soma = soma + idade;
       cout << "Você ainda quer continuar? [s/n] ";
       cin >> esc;

    }
    media=soma/2;
    cout << "resultado: " << media;
    return 0;
}
