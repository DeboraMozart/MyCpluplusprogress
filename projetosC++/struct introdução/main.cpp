#include <iostream>

using namespace std;

struct Carro{
    string nome;
    string cor;
    int potencia;
    int velocidademaxima;

};

int main()
{
    //é possivel mais de um elemento fazer parte da struct
    Carro car1, car2;

    car1.nome = "Tornado";
    car1.cor = "Vemelho";
    car1.potencia = 450;
    car1.velocidademaxima = 350;

    car2.nome = "Luxo";
    car2.cor = "Verde";
    car2.potencia = 250;
    car2.velocidademaxima = 550;



    cout << "Nome:...............  "<<car1.nome << endl;
    cout << "Cor:................  "<<car1.cor << endl;
    cout << "Potencia:...........  "<<car1.potencia << endl;
    cout << "Velocidade maxima:..  "<<car1.velocidademaxima << endl<<endl;

    cout << "Nome:...............  "<<car2.nome << endl;
    cout << "Cor:................  "<<car2.cor << endl;
    cout << "Potencia:...........  "<<car2.potencia << endl;
    cout << "Velocidade maxima:..  "<<car2.velocidademaxima << endl;
    return 0;
}
