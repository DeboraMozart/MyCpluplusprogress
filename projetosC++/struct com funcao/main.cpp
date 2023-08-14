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

    Carro car1, car2;

    //passando as caracteristicas do carro para a funcao insere
    car1.Insere ("Tornado", "Vermelho", 250, 0, 400);
    car1.Mostra();
    car2.Insere ("Luxo", "Preto", 300, 1, 500);
    car2.Mostra();
    car1.MudaVel (300);
    car1.Mostra();





    return 0;
}
