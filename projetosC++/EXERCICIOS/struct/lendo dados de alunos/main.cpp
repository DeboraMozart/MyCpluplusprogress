#include <iostream>

using namespace std;
struct DadosdeAlunos{
    int matricula;
    string nome;
    int codigoDisciplina;
    //Ao inves de usar um array notas[2] preferi usar variaveis separadas para melhor manipulação
    int nota1, nota2;
    float media = 0;

    void Media (){
        media = (nota1 * 1 + nota2 * 2)/ 3;
    }

};

int main()
{
    /*Fac¸a um programa que realize a leitura dos seguintes dados relativos a um conjunto de
    alunos: Matricula, Nome, Codigo da Disciplina, Nota1 e Nota2. Considere uma turma de ´
    ate 4 alunos. Apos ler todos os dados digitados, e depois de armazena-los em um vetor ´
    de estrutura, exibir na tela a listagem final dos alunos com as suas respectivas medias ´
    finais (use uma media ponderada: Nota1 com peso=1.0 e Nota2 com peso=2.0). */
    DadosdeAlunos alunos[4];
    int i;
    //inserindo dados
    for (i = 1; i < 5; i++){
        cout << "Digite a matricula: ";
        cin >> alunos[i].matricula;
        cout <<endl<<"Digite o nome: ";
        cin >> alunos[i].nome;
        cout <<endl<<"Digite o codigo da disciplina: ";
        cin >> alunos[i].codigoDisciplina;
        cout <<endl<<"Digite a primeira e segunda nota: ";
        cin >> alunos[i].nota1 >> alunos[i].nota2;
        alunos[i].Media();

    }
    system("cls");
    for (i = 1; i < 5; i++){
        cout<< alunos[i].matricula<<endl;
        cout << alunos[i].nome<<endl;
        cout << alunos[i].codigoDisciplina<<endl;
        cout << alunos[i].media<<endl;
    }

    return 0;
}
