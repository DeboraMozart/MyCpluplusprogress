#include <iostream>

using namespace std;

typedef struct {
    string nome;
    string cidade;
    int idade;

}Cadastro;

int main()
{
    /*Simulação de cadastro de usuario de 5 pessoas. Para cada usuário o algoritmo devera solicitar os seguintes dados:
    nome completo;
    idade;
    cidade natal.
    Finalmente, o algoritmo devera exibir os dados da seguinte maneira:

    Usuário____ é nascido(a) em ____ e tem _____ anos.
    */

    Cadastro usuarios[5];

    for (int i = 0; i < 5; i++){
        cout << "Digite seu nome: ";
        getline (cin, usuarios[i].nome);
        cout << endl<< "Digite sua cidade: ";
        getline (cin, usuarios[i].cidade);
        cout << endl<< "Digite a sua idade: ";
        cin >> usuarios[i].idade;
        cin.ignore();
        cout << endl;

    }
    for (int i = 0; i < 5; i++){
        cout << "Usuario "<<usuarios[i].nome<<" e nascido(a) em "<< usuarios[i].cidade<< " e tem "<<usuarios[i].idade<<" anos"<<endl;
    }


    return 0;
}
