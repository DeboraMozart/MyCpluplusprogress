#include <iostream>
#include <list>

using namespace std;

int main()
{
    list <int> aula, ordenarereverso, removeritem; //pode deixar vazio;  lis<int>aula(50) definir o tamanho logo no comeco; list<int>aula(5,10) ou ate mesmo definir o tamanho e o valor de todas as posioes.
    //list <int> aula, canal, teste; //econoiza tempo criando 3 listas do mesmo tipo
    int tam; //tamanho da lista aula
    list<int>::iterator it,it2; //permite a insercao de um elemento em qualquer posiçao da lista


    tam = 10;

    for (int i = 0; i < tam; i++){
        aula.push_front(i); //insere o elemento na frente da lista
    }
    it = aula.begin();
    advance (it, 4); //indica a distancia e posicao
    aula.insert(it, 100);//insere o valor que voce quer colocar
    tam = aula.size();

    cout << "Tamanho da lista: "<<tam<<endl;
    cout << "Inserindo o elemento na parte da frente da lista: "<<endl;
    for (int i = 0; i < tam; i++){
        cout << aula.front()<<endl;
        aula.pop_front();
    }
    /*
    cout << "Inserindo o elemento por tras das lista: "<<endl;
    for (int i = 0; i < tam; i++){
        aula.push_back(i); //insere o elemento atras da lista
    }
    for (int i = 0; i < tam; i++){
        cout << aula.front()<<endl;
        aula.pop_front();
    }
    */
    ordenarereverso.push_front(2);
    ordenarereverso.push_front(5);
    ordenarereverso.push_front(6);
    ordenarereverso.push_front(1);
    ordenarereverso.push_front(0);
    cout<<"Ordenando: "<<endl;
    ordenarereverso.sort();//vai ordenar
    ordenarereverso.begin();
    advance(it2, 2);
    ordenarereverso.erase(--it2);
    for (int i=0; i < 5; i++){
        cout << ordenarereverso.front();
        ordenarereverso.pop_front();
    }
    cout <<endl;
    cout << "Invertendo: "<<endl;

    ordenarereverso.push_front(2);
    ordenarereverso.push_front(5);
    ordenarereverso.push_front(6);
    ordenarereverso.push_front(1);
    ordenarereverso.push_front(0);
    ordenarereverso.sort();
    ordenarereverso.reverse();
     for (int i=0; i < 5; i++){
        cout << ordenarereverso.front();
        ordenarereverso.pop_front();
    }
    cout<<endl;


    return 0;
}
