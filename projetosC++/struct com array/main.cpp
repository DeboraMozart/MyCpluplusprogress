#include <iostream>

using namespace std;

struct Carro{
    string nome;
    string cor;
    int potencia;
    int velocidademaxima;
    int velocidade;

    //insere as variaveis do elemento
    void Insere (string structnome, string structcor, int structpotencia, int structvelocidade, int structvelocidademaxima){
        nome = structnome;
        cor = structcor;
        potencia = structpotencia;
        velocidade= structvelocidade;
        velocidademaxima = structvelocidademaxima;
    }

    //exibe as variaveis do elemento
    void Mostra (){
        cout << "Nome:...............  "<<nome << endl;
        cout << "Cor:................  "<<cor << endl;
        cout << "Potencia:...........  "<<potencia << endl;
        cout << "Velocidade atual:...  "<<velocidade << endl;
        cout << "Velocidade maxima:..  "<<velocidademaxima << endl<<endl;
    }

    //mudar a velocidade e verificar
    void MudaVel (int novavel){
        velocidade = novavel;
        if (velocidade > velocidademaxima){
            velocidade = velocidademaxima;
        }else if (velocidade < 0){
            velocidade = 0;

        }
    }
};

int main()
{

    Carro carros [4];

    carros[0].Insere ("Tornado", "Azul", 200, 0, 500);
    carros[1].Insere ("Tornado", "Azul", 150, 0, 400);
    carros[2].Insere ("Tornado", "Azul", 240, 0, 460);
    carros[3].Insere ("Tornado", "Azul", 250, 0, 505);

    for (int i = 0; i < 4;i++){
        carros[i].Mostra();
    }



    return 0;
}
