#include <iostream>

using namespace std;
void vet (int vt[3]);
int main()
{
    /*02. Crie um programa que recebe os três lados de um triângulo, passa esses valores para uma função que diz se esse
    triângulo existe ou não (pela condição da existência do triângulo, cada lado deve ser maior que o módulo da subtração dos
    outros dois lados e deve ser menor que a soma dos outros dois lados)*/

    int vetor [3],i;

    for (i=1;i<4;i++){
        cout << "Digite o lado "<<i<<" do triangulo    ";
        cin >> vetor [i];

    }
    vet(vetor);
    return 0;
}
void vet (int vt[3]){
    for (int i = 1; i < 4; i++){
        if ((vt[1]>vt[2]-vt[3]) && (vt[1]<vt[2]+vt[3])&&(vt[2]>vt[1]-vt[3]) && (vt[2]<vt[1]+vt[3])&&(vt[3]>vt[1]-vt[2]) && (vt[3]<vt[1]+vt[2])){
            cout << "É um triangulo";
            break;
        }else {
            cout << "nao sei";
            break;
        }

    }

}
