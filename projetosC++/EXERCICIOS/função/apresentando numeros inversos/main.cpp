#include <iostream>

using namespace std;

int quant (int n);
int rev (int n);
int main()
{
    /*06. Crie um software que recebe um número do usuário, passa esse valor para uma função e ela retorna esse número escrito
    ao inverso. Por exemplo, você deu o valor 1234, então ele vai retornar 4321. Dica: primeiro, crie uma função que conta quantos
    dígitos tem um número.*/

    /*Na verdade, a divisão de 1234 por 10 resulta em 123 e não em 123.4. A divisão inteira entre dois inteiros sempre resulta em
      um valor inteiro, descartando qualquer parte fracionária.

      O número invertido é multiplicado por 10 e o dígito extraído é adicionado, resultando em 4.

        O número é dividido por 10, resultando em 123. Agora, estamos trabalhando com o número 123 para obter o próximo dígito.
        O número 123 é dividido por 10, resultando em 12. Esse é o próximo dígito extraído.
        O número invertido é multiplicado por 10 e o dígito extraído é adicionado, resultando em 43.
        O número é dividido por 10, resultando em 12. Agora, estamos trabalhando com o número 12 para obter o próximo dígito.
        O número 12 é dividido por 10, resultando em 1. Esse é o próximo dígito extraído.
        O número invertido é multiplicado por 10 e o dígito extraído é adicionado, resultando em 432.
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

