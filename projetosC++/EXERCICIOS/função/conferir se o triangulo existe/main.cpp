#include <iostream>

using namespace std;
void vet (int vt[3]);
int main()
{
    /*02. Crie um programa que recebe os tr�s lados de um tri�ngulo, passa esses valores para uma fun��o que diz se esse
    tri�ngulo existe ou n�o (pela condi��o da exist�ncia do tri�ngulo, cada lado deve ser maior que o m�dulo da subtra��o dos
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
            cout << "� um triangulo";
            break;
        }else {
            cout << "nao sei";
            break;
        }

    }

}
