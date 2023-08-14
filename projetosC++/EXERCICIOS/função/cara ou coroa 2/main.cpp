#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int escolhauser();

int main()
{
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    int resp, num, res;
    int pont1 = 0;
    int pont2 = 0;
    char questao;

    comeco:
    cout << "Escolha entre [0]par ou [1]impar: ";
    cin >> resp;
    cout << "Digite o seu numero: ";
    cin >> num;
    cout << "Numero do computador: " << escolhauser();
    res = num + escolhauser();
    if (res % 2 == resp) {
        pont1++;
    } else {
        pont2++;
    }
    cout << "Sua pontuacao: " << pont1 << endl;
    cout << "Pontuacao do computador: " << pont2 << endl;
    cout << "Voce quer continuar? ";
    cin >> questao;
    if (questao == 's') {
        goto comeco;
    } else  {
        cout << "Fim do jogo" << endl;
    }

    return 0;
}

int escolhauser()
{
    int max = 10;
    int min = 1;
    return min + (std::rand() % (max - min + 1));
}

