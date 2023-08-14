#include <iostream>

using namespace std;

typedef struct {
    string matriculas;
    float notas[3];

    void ImprimeDados (){
        cout << "Nome de matricula: "<<matriculas<<endl;
        for (int i = 1; i < 4; i++){
            cout << notas[i]<<endl;
        }

    }
    void CalculaMedia(){
        int soma = 0;
        float media;
        for (int i = 1; i < 4; i++){
            soma+=notas[i];
        }
        media = soma / 2;
        cout << "A media do aluno[a]: "<<matriculas<< " eh: "<<media<<endl;
    }



}Aluno;
int main()
{
    Aluno turma [5];

    //loop que ler nome e notas dos alunos
    for (int i = 0; i < 5; i++){
        cout << "Qual o seu nome: "<<endl;
        cin >> turma[i].matriculas;
        int j = 1;
        while (j <4){
            cout << "Qual foi a sua "<<j<<" nota"<<endl;
            cin >> turma[i].notas[j];
            j++;
        }
    }
    //limpando os dados de entrada da tela
    system("cls");
    //loop que chama a funcao para imprimir os dados dos alunos
    for (int i = 0; i < 5; i++){
        turma[i].ImprimeDados();
    }

    for (int i = 0; i < 5; i++){
        turma[i].CalculaMedia();
    }

    return 0;
}
