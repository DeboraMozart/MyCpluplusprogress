#include <iostream>;

using namespace std;
//AS FUNCOES DEVEM SER PROTOTIPADAS AQUI EM CIMA

void texto();
void soma (int n1, int n2);
int soma2 (int n1, int n2);
void tr (string tra[4]);

int main()
{
    int res; //A FUNCAO "SOMA2" VAI SER ARMAZENADA NESSA VARIAVEL
    string transp [4] = {"carro","aviao","moto","barco"};

    //CHAMANDO A FUNCAO TEXTO PARA DENTRO DA PRINCIPAL
    texto();
    //CHAMANDO A FUNCAO VARIAS VEZES
    for (int i=0;i<5;i++){
        texto();
    }

    //CHAMANDO A FUNCAO SOMA

    soma (24,6);
    //CHAMANDO A FUNCAO SOMA2
    res=soma2 (100,100);
    cout<< "Valor de res  "<<res;
    cout << "Valor de soma2  "<< soma2 (100,100);//<--- segunda forma de mostrar a funcao

    //CHAMANDO A FUNCAO DO VETOR
    tr (transp);
    return 0;

}
/*
    FORMULA DA FUNCAO
    void+nome da funcao+(argumento);
*/

void texto (){
    cout << "Teste da funcao"<<endl;
}
void soma (int n1,int n2) {
    cout << endl<<"Soma dos valores "<<n1+n2<< endl;
}
//QUALQUER VALOR DE SAIDA DIFERENTE DE VOID USA "return"

//ABAIXO VERÁ UMA FUNCAO QUE VAI RECEBER VALORES INTEIROS E RETORNAR VAL INTEIROS TBM
int soma2 (int n1, int n2){
    return n1+n2;
}

//PASSANDO UM VETOR PARA UMA FUNCAO

void tr (string tra[4]){
    for (int i=0;i<4;i++){
        cout<<tra[i];
    }

}

