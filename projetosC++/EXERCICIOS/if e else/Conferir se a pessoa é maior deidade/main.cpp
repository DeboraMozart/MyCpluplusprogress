#include <iostream>

using namespace std;

int main()
{
    /*2. Escreva	 um	 programa	 para	 ler	 o	 ano	 de	 nascimento	 de	 uma	 pessoa	 e
    escrever	 uma	 mensagem	 que	 diga	 se	 ela	 poder�	 ou	 n�o	 votar	 este	 ano
    (n�o	�	necess�rio	considerar	o	m�s	em	que	ela	nasceu).*/

    int res, ano;

    cout << "Digite o ano em que voc� nasceu: ";
    cin >> ano;
    res = 2023 - ano;
    if (res>=18) {
        cout << "Voc� j� pode votar";
    }
    return 0;
}
