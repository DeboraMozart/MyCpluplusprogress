#include <iostream>

using namespace std;
struct Curso {
    int matricula;
    string nome;
    int nota[3];
    float media;

};

void PrimeiraNota (Curso alunos[]){
    int indice = 0;
    int maior = alunos[1].nota[1];

    for (int i = 1; i < 6; i++){
        if (alunos[i].nota[1]>maior){
            maior = alunos[i].nota[1];
            indice = i;
        }
    }
    cout << "Aluno com a maior nota: "<<alunos[indice].nome<<" nota: "<<maior;
}
void MaiorMediaGeral (Curso alunos[]){
    int i, j;
    for (i = 1; i < 6; i++){
        for (j = 1; j < 4; j ++){
            alunos[i].media += alunos[i].nota[j];
        }
        alunos[i].media = alunos[i].media / 3;

    }
}
int main()
{
    /*Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve
    conter a matr´ıcula do aluno, nome, nota da primeira prova, nota da segunda prova e nota
    da terceira prova.
    (a) Permita ao usuario entrar com os dados de 5 alunos. ´
    (b) Encontre o aluno com maior nota da primeira prova.
    (c) Encontre o aluno com maior media geral. ´
    (d) Encontre o aluno com menor media geral ´
    (e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para
    aprovacao. */

    Curso alunos[5];
    int i, j;
    for (i = 1; i < 6; i++){
        cout << "Qual o seu numero de matricula: ";
        cin >> alunos[i].matricula;
        cout << endl << "Digite o seu nome: ";
        cin >> alunos[i].nome;
        for (j = 1; j < 3; j++){
            cout << "Digite a " << j <<" nota";
            cin >> alunos[i].nota[j];
            cout << endl;
        }
        cout << endl;
    }
    PrimeiraNota(alunos);
    MaiorMediaGeral(alunos);
    return 0;
}
