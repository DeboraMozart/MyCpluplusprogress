#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
typedef struct {
    string nome;
    float altura;
    int stdia, stano, stmes;

    //funcao para criar data
    void CriaData(){
        int dataMes = 1 + (rand()%12);
        int dataAno = 1950 + (rand()%49);
        int dataDia = 1 + (rand()%30);
        stmes = dataMes;
        stano = dataAno;
        stdia = dataDia;
    }
    //funcao para mostrar data
    void Mostra (){
        cout << "Dia: "<<stdia<<" Mes: "<<stmes<<" Ano: "<<stano;
    }
    bool VerificarAno (int dia, int mes, int ano){
        if (stano < ano){
            return true;
        }else if (stano == ano && stmes < mes) {
            return true;
        }else if (stano == ano && stmes == mes && stdia < dia){
            return true;
        }else{
            return false;
        }
    }

}DadosPessoais;

int main()
{
    /*2. Crie um programa que permita armazenar o nome, a altura e da data de nascimento de até 10 pessoas.
    Cada pessoa deve ser representada por uma struct dentro de um vetor.

    A data de nascimento também deve ser uma struct.

    O nome e a altura de cada pessoa devem ser informados pelo teclado.

    A geração da data de nascimento deve ser feita aleatoriamente através da função abaixo

    void CriaData(Data &D)
    {
       D.Mes = 1 + (rand() % 12);
       D.Ano = 1950 + (rand() % 49);
       D.Dia = 1 + (rand() % 30);
    }
    O programa deve, na tela de abertura, apresentar opções para:

    inserir um nome;
    listar todos os nomes e respectivas alturas;
    listar os nomes das pessoas que nasceram antes de uma certa data fornecida.*/

    //gerando numeros aleatorios
    srand (time(0));
    int resp;
    int dia, mes, ano;
    DadosPessoais pessoas[10];
    int i = 0;

    //menu
    while (i < 10){
        cout << "[1]Inserir um nome e altura"<<endl;
        cout << "[2]Listar todos os nomes e respectivas alturas"<<endl;
        cout << "[3]Listar os nomes das pessoas que nasceram antes de uma certa data fornecida"<<endl;
        cin >> resp;

        switch (resp){
        case 1:
            cout << "Digite o nome: ";
            cin.ignore();
            getline(cin, pessoas[i].nome);
            cout << "Digite a altura: ";
            cin >> pessoas[i].altura;

            //chamando funcao que gera data
            pessoas[i].CriaData();
            i++;
            break;
        case 2:
            for (int j = 0; j < i; j++){
                cout << pessoas[j].nome<<endl;
                cout << pessoas[j].altura<<endl;
            }
            break;
        case 3:
            cout << "Digite o dia: ";
            cin>>dia;
            cout<<endl<< "Digite o mes: ";
            cin >> mes;
            cout <<endl<< "Digite o ano:";
            cin >> ano;
            for (int j = 0; j < i; j++){
                if (pessoas[j].VerificarAno(dia, mes, ano)){
                    cout << pessoas[j].nome<<endl;
                }
            }

            break;
        }
    }

    return 0;
}
