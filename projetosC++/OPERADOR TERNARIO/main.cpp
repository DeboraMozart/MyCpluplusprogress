#include <iostream>

using namespace std;

int main()
{
    /*É UMA FORMA DE FAZER TESTES DE VERDADEIRO E FALSO DE FORMA AGILIZADA. EM CONTRAPARTIDA, ELA SÓ PERMITE SER FEITA
    TESTES QUE RETORNAM VALORES SIMPLES*/

    /*FORMULA:
    (EXPRESSAO) ? VALOR1 : VALOR2

    ? -> REPRESENTA O "SE"

    RESUMINDO -> SE A EXPRESSAO FOR VERDADEIRA MOSTRAR O VALOR 1 SENAO (:) MOSTRAR O VALOR 2
    */

    int n1,n2,nota;
    string res;

    cout << "Digite a primeira nota";
    cin >> n1;
    cout << "Digite a segunda nota";
    cin >> n2;

    nota = n1+n2;

    //se for >= 60 APROVADO
    //Senao REPROVADO

    /*(nota>=60) ? res="APROVADO":res="REPROVADO";
    cout << res;*/

    //segunda forma é atribuindo o resultado a variavel res

    res=(nota>=60) ? "aprovado": "reprovado";
    cout << res;
    return 0;
}
