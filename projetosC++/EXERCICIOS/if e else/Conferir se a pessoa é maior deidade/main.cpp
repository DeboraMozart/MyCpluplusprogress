#include <iostream>

using namespace std;

int main()
{
    /*2. Escreva	 um	 programa	 para	 ler	 o	 ano	 de	 nascimento	 de	 uma	 pessoa	 e
    escrever	 uma	 mensagem	 que	 diga	 se	 ela	 poderá	 ou	 não	 votar	 este	 ano
    (não	é	necessário	considerar	o	mês	em	que	ela	nasceu).*/

    int res, ano;

    cout << "Digite o ano em que você nasceu: ";
    cin >> ano;
    res = 2023 - ano;
    if (res>=18) {
        cout << "Você já pode votar";
    }
    return 0;
}
