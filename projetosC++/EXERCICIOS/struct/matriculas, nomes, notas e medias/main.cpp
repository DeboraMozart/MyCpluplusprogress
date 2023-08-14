#include <iostream>

using namespace std;
typedef struct {
    string nome;
    int matricula;
    int notas[3];
    float stmedia;

}Curso;

//passando o array alunos como parametro para uma funcao fora da struct porque nao deu certo passa-la dentro da struct
void MaiorNota (Curso alunos[]){
        int IndiceMaiorNota = 0;
        //maiorNota recebe identacao da nota do primeiro aluno para comparar com os outros
        int maiorNota = alunos[0].notas[0];
        int i;

        for (i = 0; i < 5; i++){
            if (alunos[i].notas[0]>maiorNota){
                maiorNota = alunos[i].notas[0];
                IndiceMaiorNota = i;
            }
        }
        cout << "Aluno com a maior nota: "<<alunos[IndiceMaiorNota].nome<< "Nota: "<<maiorNota;
    }

void MaiorMediaGeral (Curso alunos []){
    float media = 0, novaMedia = 0;
    int Indice = 0, j, i;
    for (i = 0; i < 5; i++){
        if (i == 0){
            for (j = 0; j < 3; j++){
                media += alunos[i].notas[j];
            }
        }else {
            for (j = 0; j < 3; j++){
                novaMedia += alunos[i].notas[j];
            }
        }
        media = media/2;
        novaMedia = novaMedia/2;
        if (novaMedia > media){
            media = novaMedia;
            Indice = i;
        }
    }
     cout << "Aluno com a maior media: "<<alunos[Indice].nome<< "Media: "<<media;
}
void MenorMediaGeral (Curso alunos []){
    float media = 0, novaMedia = 0;
    int Indice = 0, j, i;
    for (i = 0; i < 5; i++){
        if (i == 0){
            for (j = 0; j < 3; j++){
                media += alunos[i].notas[j];

            }
        }else {
            for (j = 0; j < 3; j++){
                novaMedia += alunos[i].notas[j];

            }
        }
        media = media/2;
        novaMedia = novaMedia/2;
        if (novaMedia < media){
            media = novaMedia;
            Indice = i;
        }
    }
     cout << "Aluno com a menor media: "<<alunos[Indice].nome<< "Media: "<<media;
}
 bool AprovadoOrReprovado(Curso alunos[], int i){
        return alunos[i].stmedia > 6;



}
int main()
{
    /* Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve
    conter a matr´ıcula do aluno, nome, nota da primeira prova, nota da segunda prova e nota
    da terceira prova.
    (a) Permita ao usuario entrar com os dados de 5 alunos. ´
    (b) Encontre o aluno com maior nota da primeira prova.
    (c) Encontre o aluno com maior media geral. ´
    (d) Encontre o aluno com menor media geral ´
    (e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para
    aprovacao.*/

    Curso alunos[5];
    int j, i;

    for (i = 0; i < 5; i++){
        cout << "Digite o seu nome: ";
        cin >> alunos[i].nome;
        cout << endl<< "Digite o numero de matricula: ";
        cin >> alunos[i].matricula;
        j = 0;
        while (j < 3){
            cout << "Digite a nota: ";
            cin >> alunos[i].notas[j];
            j++;
        }
        float Novamedia = 0; // Inicialize Novamedia aqui
        for (j = 0; j < 3; j++) {
            Novamedia += alunos[i].notas[j];
        }
        alunos[i].stmedia = Novamedia / 3.0; // Calcule a média aqui
    }


    MaiorNota(alunos);
    cout << endl;
    MaiorMediaGeral(alunos);

    for (i = 0; i < 5; i++) {
        if (AprovadoOrReprovado(alunos, i)) {
            cout << "Aluno: " << alunos[i].nome << " aprovado" << endl;
        } else {
            cout << "Aluno: " << alunos[i].nome << " reprovado" << endl;
        }
    }


    return 0;
}
