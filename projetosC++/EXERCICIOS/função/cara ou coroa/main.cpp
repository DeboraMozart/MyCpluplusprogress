#include <iostream>
#include <ctime>//para usar a funcao rand (nao e obrigado)
#include <cstring>
#include <cstdlib> //biblioteca do rand
using namespace std;
int contarmoeda (int moeda);
std :: string lancarmoeda();

int main (){
    /*07. Fa�a um programa para lan�ar uma moeda. Quando chamamos uma fun��o, ela deve retorna cara ou coroa. Em outra fun��o,
     fa�a 'n' lan�amentos de moedas, 'n' � o valor que o usu�rio quiser, e mostre a porcentagem de vezes que deu cara e coroa.
     Se voc� jogar a moeda 10, 100, 1000, um milh�o de vezes...o que tende a acontecer?*/
    srand (time(0));
    int moeda;

    cout <<"Quantas vezes voce quer lan�ar a moeda? ";
    cin >> moeda;
    contarmoeda(moeda);
    return 0;
}
std :: string lancarmoeda(){
    if (rand ()%2==0){
        return "cara";

   }else {
        return "coroa";
   }

}
int contarmoeda (int moeda){
    int cara=0;
    int coroa=0;
    for (int i=0;i<moeda; i++){
         string resultado = lancarmoeda();
        if (resultado=="cara"){
            cara++;
        }else {
            coroa++;
        }
    }
    double porcentagemcara = (static_cast<double>(cara)/moeda)*100.0;
    double porcentagemcoroa = (static_cast<double>(coroa)/moeda)*100.0;

    cout << "Porcentagem de caras  "<<porcentagemcara<<endl;
    cout << "Porcentagem de coroa  "<<porcentagemcoroa;
}


/*  SOBRE TIME
    Em sistemas operacionais modernos, o tempo � geralmente representado em unidades de segundos a partir de uma data de refer�ncia
espec�fica, conhecida como "�poca" (epoch, em ingl�s). A �poca mais comumente usada � o "Unix epoch", que define a data de
refer�ncia como 1� de janeiro de 1970 �s 00:00:00 (UTC).
    O tipo time_t � usado para representar o tempo como um valor inteiro, contando o n�mero de segundos transcorridos desde essa
data de refer�ncia. O valor do tipo time_t pode variar dependendo do sistema, mas geralmente � um n�mero inteiro de 32 ou 64 bits.
    Quando voc� chama a fun��o time(0), ela retorna um valor do tipo time_t que representa o n�mero de segundos decorridos desde a
�poca (1� de janeiro de 1970). O argumento 0 passado para time() � usado para obter o tempo atual.
    Por exemplo, se o valor retornado por time(0) for 1621547895, isso significa que se passaram 1.621.547.895 segundos desde a
�poca (1� de janeiro de 1970) at� o momento em que a fun��o foi chamada.
    Ao usar time(0) como semente para a fun��o srand(), voc� est� aproveitando a variabilidade do tempo para obter uma semente
aparentemente aleat�ria para o gerador de n�meros pseudoaleat�rios rand(). No entanto, como mencionado anteriormente, se voc�
chamar srand(time(0)) duas vezes em um curto espa�o de tempo, � poss�vel obter a mesma semente, pois o tempo pode n�o ter
mudado o suficiente entre as chamadas.*/


/*SOBRE SRAND
    Sim, � poss�vel usar a fun��o srand() sem a necessidade de usar a fun��o time() para obter a hora atual como semente.
    A fun��o srand() � usada para definir explicitamente uma semente para o gerador de n�meros pseudoaleat�rios rand(). Essa
semente determina a sequ�ncia de n�meros que ser�o gerados por rand().
*/
