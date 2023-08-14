#include <iostream>

using namespace std;

int main()
{
    //3.Crie um programa para ler 3 notas e mostrar a média delas.
    int cont, nota, soma;
    double media;
    cont,soma = 0;

    while (cont++<3) {
        cout << "Digite a "<<cont<<"nota";
        cin >> nota;
        soma = soma + nota;
        media = soma/3;
    }
    cout << media;
    return 0;
}
