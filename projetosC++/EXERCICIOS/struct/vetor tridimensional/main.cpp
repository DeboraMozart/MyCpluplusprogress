#include <iostream>

using namespace std;

struct Vetor {
    float x, y, z;


};
Vetor SomaVetor (Vetor v1, Vetor v2){
    Vetor resultado;
    resultado.x =  v1.x + v2.x;
    resultado.y = v1.y + v2.y;
    resultado.z = v1.z + v2.z;
    return resultado;
    }
/*
void VerMaior (Vetor vet[]){
    int maior1 = 0, maior2 = 0;
    int i;
    for ( i = 0; i < 2; i++){
        if (i == 0){
               if (vet[i].x > vet[i].y){
                maior1 = vet[i].x;
            }else if (vet[i].y > vet[i].x){
                maior1 = vet[i].y;
            }else {
                maior1 = vet[i].z;
            }
        }else {
            if (vet[i].x > vet[i].y){
                maior2 = vet[i].x;
            }else if (vet[i].y > vet[i].x){
                maior2 = vet[i].y;
            }else {
                maior2 = vet[i].z;
            }
        }
    }
    if (maior1 > maior2){
        cout << "Maior: " <<maior1;
    }else {
        cout << "Maior: "<< maior2;
    }
}*/
int main()
{
    /*struct Vetor{
    float x;
    float y;
    float z;
    };
    para representar um vetor no R3
    , implemente um programa que calcule a soma de dois
    vetores.*/
    Vetor vet[2];


    //acrescentando os valores em x, y, z
    for (int i = 0; i < 2; i++){
        cout <<endl<<"Digite o valor de x: ";
        cin >> vet[i].x;
        cout <<endl<<"Digite o valor de y: ";
        cin >> vet[i].y;
        cout << endl<<"Digite o valor de z: ";
        cin >> vet[i].z;
    }
    //chamando a funcao para somar os vetores
    Vetor resultado = SomaVetor(vet[0], vet[1]);
    cout << resultado.x << resultado.y << resultado.z;



    //Nao é necessario o codigo abaixao, mas ele funciona
    //vet[2] = {resultado.x, resultado.y, resultado.z};

    //VerMaior(vet);

    return 0;
}
