#include <iostream>

using namespace std;

int main()
{

    /*switch (expressao){
    case const1:
    comandos;
    break;

    case const2:
    comando;
    break;

    case const3:
    comando;
    break;

    defaut:
    comando;}

    */
    int val;

    /*cout << "Selecione uma cor"<<endl;
    cout << "[1]Verde [2]Azul [3]Vermelho"<<endl;
    cin >> val;
    switch (val){
    case 1:
    cout << "Cor selecionada verde";
    break;

    case 2:
    cout << "Cor selecionada azul";
    break;

    case 3:
    cout << "Cor selecionada vermelho";
    break;

    default:
    cout << "A cor que voce selecionou nao esta disponivel";}*/

    //exemplo 2

    cout << "Selecione uma cor"<<endl;
    cout << "[1][2][3]Verde [4]Azul [5]Vermelho"<<endl;
    cin >> val;

    switch (val){
    case 1:
    case 2:
    case 3:
    cout << "Cor selecionada verde";
    break;
    case 4:
    cout << "A cor selecionada é azul";
    break;
    case 5:
    cout << "A cor selecionada é vermelho";
    default:
    cout << "A cor que voce selecionou nao esta disponivel";}

    return 0;
}
