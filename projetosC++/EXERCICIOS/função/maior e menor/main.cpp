#include <iostream>

using namespace std;
int vet (int vt[3]);
int veto (int vtr[3]);
int main()
{
    /*04. Programe um software que recebe três números, para uma função e ela retorna o maior deles. Faça outra função que
    recebe os mesmos números e retorna o menor deles.*/

    int vetor[3];

    for (int i = 0; i < 3; i++) {
        cout << "Digite o numero:  ";
        cin >> vetor[i];
    }
    cout << "Maior numero:  "<<vet (vetor)<<endl;
    cout << "Menor numero:  "<<veto (vetor);
    return 0;
}

int vet (int vt[3]){
    int maior;

    for (int i = 0; i < 3; i++) {
        if (i==0) {
            maior = vt[i];
        }
        if (vt[i]>maior){
            maior = vt [i];
        }
    }
    return maior;
}
int veto (int vtr[3]){
    int menor;

    for (int i = 0; i < 3; i++) {
        if (i==0) {
            menor = vtr[i];
        }
        if (vtr[i]<menor){
            menor = vtr [i];
        }
    }
    return menor;
}
