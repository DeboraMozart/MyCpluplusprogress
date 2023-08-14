#include <iostream>

using namespace std;

int main()
{
    /*enum usa de strings mas o seu valor sempre é inteiro, por padrao quando nao atribuimos valores as variaveis elas começam com zero
    e assim seguindo em diante 0 1 2...*/
    enum armas {fuzil, revolver, rifle, escopeta};
    //sao a mesma coisa, com excessao de que int num pode receber qualquer valor interior. Enquanto, armas armasel só pode receber os
    //valores dentro das chaves ex: fuzil, revolver, rifle, escopeta;
    armas armasel;
    //int num;
    armasel = rifle;
    cout << armasel;

    return 0;
}
