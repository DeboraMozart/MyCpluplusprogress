#include <iostream>
#include <list>
#include <random>

using namespace std;

int main()
{
    /*Exercício de contagem de elementos em lista:
    - Crie uma lista com valores repetidos.
    - Solicite ao usuário um número.
    - Conte quantas vezes o número aparece na lista.
    - Imprima a quantidade de ocorrências encontradas.*/

    list <int> lista;
    int i = 0, num;

    //gerando numeros aleatorios
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution <int> dist(1,20);

    //inserindo os valores na lista
    for (int o = 0; o < 6; o++){
        lista.push_back(dist(gen));
    }


    //usuario escolhe um numero
    cout << "Digite um numero: ";
    cin >> num;

    //verificando se o numero tem na lista
    for(const int elemento: lista){
        if (num==elemento){
            i++;
        }
    }
    cout << "Esse numero aparece "<<i<<" vezes";

    //exibindo lista
    for(const int elemento: lista){
            cout << elemento<< " ";
        }
        cout << endl;
    return 0;
}
