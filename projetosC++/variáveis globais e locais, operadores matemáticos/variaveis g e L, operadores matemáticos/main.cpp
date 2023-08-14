#include <iostream>

using namespace std;
//variaveis globais podem interagir com todas as funções do codigo
    int varaleatoria;
    string nome;
int main()
{
    //operadores matemáticos + - / * %
    int soma1,soma2,multi,subtracao1,subtracao2,divisao,mod,resultado,resultadosub,resultadomulti,resultadodiv;
    cout << "digite seu nome: ";
    cin >> nome;
    cout << "digite o primeiro numero para somar: ";
    cin >> soma1;
    cout << "digite o segundo numero para somar: ";
    cin >> soma2;
    cout << "digite um numero para multiplicar: ";
    cin >> multi;
    cout << "digite um numero para subtrair: ";
    cin >>subtracao1;
    cout << "digite um numero para subtrair: ";
    cin >> subtracao2;
    cout << "digite um numero para dividir: ";
    cin >> divisao;

    //exemplo de soma
    resultado = soma1 + soma2;
    cout <<"Resultado da soma: "<< resultado;

    //Exemplo de subtração
    resultadosub = subtracao1 - subtracao2;
    cout <<"Resultado da subtração: "<< resultadosub;

    //exemplo de multiplicação
    resultadomulti = subtracao1 * multi;
    cout <<"Resultado da multiplicação: "<<resultadomulti;

    //exemplo de divisao
    resultadodiv =resultadomulti / divisao;
    cout <<"Resultado da divisao: "<<resultadodiv;
}
