#include <iostream>

using namespace std;

int main()
{
    /*Escreva	 um	 programa	 que	 verifique	 a	 validade	 de	 uma	 senha	 fornecida
    pelo	 usu�rio.	 A	 senha	 v�lida	 �	 o	 n�mero	 1234.	Devem	 ser	impressas	 as
    seguintes	mensagens:
    ACESSO	PERMITIDO	caso	a	senha	seja	v�lida.
    ACESSO	NEGADO	caso	a	senha	seja	inv�lida.*/

    int senha;

    cout << "Digite a sua senha";
    cin >> senha;

    if (senha==1234) {
        cout << "Acesso permitido";
    }else {
        cout << "Acesso negado";
    }



    return 0;
}
