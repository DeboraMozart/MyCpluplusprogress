#include <iostream>

using namespace std;

struct Busca{
    string titulo;
    string autor;
    int ano;

    void insere (string sttitulo, string stautor, int stano){
        titulo = sttitulo;
        autor = stautor;
        ano = stano;
    }
    void Mostra(){
        cout << titulo<<endl;
        cout << autor<<endl;
        cout << ano;
    }
};
bool Procura(Busca livros[],int i, char resp[]){
    int j = 0;
    for (char letra: livros[i].titulo){
        if(letra == resp[j++]){

            return true;
        }
    }
    return false;
}

int main()
{
    /*Faca um programa que leia um vetor com dados de 5 livros: tıtulo (maximo 30 letras), ´
    autor (maximo 15 letras) e ano. Procure um livro por tıtulo, perguntando ao usuario qual ´
    tıtulo deseja buscar. Mostre os dados de todos os livros encontrados*/
    Busca livros[5];
    char resp [30];


    livros[0].insere("manifesto comunista", "Karl Marx", 1950);
    livros[1].insere("hora da estrela", "Clarice Lispector", 1990);
    livros[2].insere("1984","George Owel",1945);
    livros[3].insere("o senhor dos aneis", "Tolkien", 2005);
    livros[4].insere("sherlock holmes", "Arthur Doyle", 1887);

    cout << "Qual o titulo do livro?"<<endl;
    cin >> resp

    for (int i = 0; i < 5; i++){
        if (Procura(livros, i, resp)){
            livros[i].Mostra();
        }
    }

    return 0;
}
