#include <iostream>

using namespace std;

int quant (int n);
int rev (int n);
int main()
{
    /*06. Crie um software que recebe um n�mero do usu�rio, passa esse valor para uma fun��o e ela retorna esse n�mero escrito
    ao inverso. Por exemplo, voc� deu o valor 1234, ent�o ele vai retornar 4321. Dica: primeiro, crie uma fun��o que conta quantos
    d�gitos tem um n�mero.*/

    /*Na verdade, a divis�o de 1234 por 10 resulta em 123 e n�o em 123.4. A divis�o inteira entre dois inteiros sempre resulta em
      um valor inteiro, descartando qualquer parte fracion�ria.

      O n�mero invertido � multiplicado por 10 e o d�gito extra�do � adicionado, resultando em 4.

        O n�mero � dividido por 10, resultando em 123. Agora, estamos trabalhando com o n�mero 123 para obter o pr�ximo d�gito.
        O n�mero 123 � dividido por 10, resultando em 12. Esse � o pr�ximo d�gito extra�do.
        O n�mero invertido � multiplicado por 10 e o d�gito extra�do � adicionado, resultando em 43.
        O n�mero � dividido por 10, resultando em 12. Agora, estamos trabalhando com o n�mero 12 para obter o pr�ximo d�gito.
        O n�mero 12 � dividido por 10, resultando em 1. Esse � o pr�ximo d�gito extra�do.
        O n�mero invertido � multiplicado por 10 e o d�gito extra�do � adicionado, resultando em 432.
      */
     int n;

     cout << "Digite um numero:  ";
     cin >> n;


     cout << quant(n)<<endl;
    cout << rev (n);




    return 0;
}
int quant (int n) {
    int  cont=0;

    if (n==0){
        cont = 1;

    }else {
        while (n!=0){
            n/=10;
            cont++;
        }
    }
    return cont++;

}

int rev (int n){
    int reverso = 0;
    while (n!=0){
        int digit = n % 10;
        reverso = reverso * 10 + digit;
        n/=10;
    }
    return reverso;
}

