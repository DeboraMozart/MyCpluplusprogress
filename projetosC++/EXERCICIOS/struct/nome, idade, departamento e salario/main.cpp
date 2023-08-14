#include <iostream>

using namespace std;

struct TabelaFuncionarios {
    string nome;
    int idade;
    string departamento;
    float salario;

    /*void Insere (string stnome, int stidade, string stdepartamento, float stsalario){
        nome = stnome;
        idade = stidade;
        departamento = stdepartamento;
        salario = stsalario;
    }*/
};

int main()
{
    /*Construir uma tabela com as seguintes informacoes: nome, idade, departamento, salario*/
    TabelaFuncionarios funcionarios[4];
    for (int i = 0; i < 4; i++){
        cout << "Digite o nome: "<<endl<<"Digite a idade: "<< endl<<"Digite o departamento"<<endl<<"Digite o salario"<<endl;
        getline (cin, funcionarios[i].nome);
        cin >> funcionarios[i].idade;
        cin >> funcionarios[i].departamento;
        cin >> funcionarios[i].salario;

    }

    system ("cls");

    for (int i = 0; i < 4; i++){
        cout << funcionarios[i].nome<< endl;
        cout << funcionarios[i].idade<< endl;
        cout << funcionarios[i].departamento<< endl;
        cout << funcionarios[i].salario<< endl;
        cout << endl;
    }


    return 0;
}
