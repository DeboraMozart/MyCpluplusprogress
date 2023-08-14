#include <iostream>
#include <ctime>//para usar a funcao rand (nao e obrigado)
#include <cstring>
#include <cstdlib> //biblioteca do rand
using namespace std;
int contarmoeda (int moeda);
std :: string lancarmoeda();

int main (){
    /*07. Faça um programa para lançar uma moeda. Quando chamamos uma função, ela deve retorna cara ou coroa. Em outra função,
     faça 'n' lançamentos de moedas, 'n' é o valor que o usuário quiser, e mostre a porcentagem de vezes que deu cara e coroa.
     Se você jogar a moeda 10, 100, 1000, um milhão de vezes...o que tende a acontecer?*/
    srand (time(0));
    int moeda;

    cout <<"Quantas vezes voce quer lançar a moeda? ";
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
    Em sistemas operacionais modernos, o tempo é geralmente representado em unidades de segundos a partir de uma data de referência
específica, conhecida como "época" (epoch, em inglês). A época mais comumente usada é o "Unix epoch", que define a data de
referência como 1º de janeiro de 1970 às 00:00:00 (UTC).
    O tipo time_t é usado para representar o tempo como um valor inteiro, contando o número de segundos transcorridos desde essa
data de referência. O valor do tipo time_t pode variar dependendo do sistema, mas geralmente é um número inteiro de 32 ou 64 bits.
    Quando você chama a função time(0), ela retorna um valor do tipo time_t que representa o número de segundos decorridos desde a
época (1º de janeiro de 1970). O argumento 0 passado para time() é usado para obter o tempo atual.
    Por exemplo, se o valor retornado por time(0) for 1621547895, isso significa que se passaram 1.621.547.895 segundos desde a
época (1º de janeiro de 1970) até o momento em que a função foi chamada.
    Ao usar time(0) como semente para a função srand(), você está aproveitando a variabilidade do tempo para obter uma semente
aparentemente aleatória para o gerador de números pseudoaleatórios rand(). No entanto, como mencionado anteriormente, se você
chamar srand(time(0)) duas vezes em um curto espaço de tempo, é possível obter a mesma semente, pois o tempo pode não ter
mudado o suficiente entre as chamadas.*/


/*SOBRE SRAND
    Sim, é possível usar a função srand() sem a necessidade de usar a função time() para obter a hora atual como semente.
    A função srand() é usada para definir explicitamente uma semente para o gerador de números pseudoaleatórios rand(). Essa
semente determina a sequência de números que serão gerados por rand().
*/
