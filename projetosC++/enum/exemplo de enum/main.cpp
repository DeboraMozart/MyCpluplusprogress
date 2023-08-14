#include <iostream>
#include <cstdlib>


using namespace std;

//pausa a tela
void pause()
{
    system("pause");
}

//limpa a tela
void cls()
{
    system("cls");
}

//captura e testa a entrada de dados para a arma escolhida. Retorna um numero de 1 a 5
int get_option()
{
    int resp;
    resp = 0;

    while(1)
    {
        cls();
        cout << "\nSELECAO DE EQUIPAMENTO\n\n";
        cout << "Escolha uma arma primaria:\n\n";
        cout << "[1]M4A1\n[2]AK47\n[3]FAMAS\n[4]Galil\n[5]AWP\n\n>>> ";
        cin >> resp;
        if(cin.fail())
        {
            cin.clear();
            cin.ignore(10000, '\n');
        }

        if((resp >= 1) && (resp <= 5))
        {
            if(resp == 1)
            {
                return 1;
            }
            else if(resp == 2)
            {
                return 2;
            }
            else if(resp == 3)
            {
                return 3;
            }
            else if(resp == 4)
            {
                return 4;
            }
            else if(resp == 5)
            {
                return 5;
            }
        }
        else
        {
            cout << "\nEntrada invalida. Digite o numero correspondente a opcao desejada.\n\n(1-5)\n\n";
            pause();
        }
    }
}

int main()
{
    int resp;
    resp = 0;

    string arma = " ";

    //enum para municao do carregador e municao maxima

    enum armas{M4A1 = 30, AK47 = 30, FAMAS = 25, Galil = 35, AWP = 5};
    armas armaSel;

    enum municaoMax{M4A1_M = 90, AK47_M = 90, FAMAS_M = 90, Galil_M = 90, AWP_M = 30};
    municaoMax municaoMaxArmaSel;

    resp = get_option();

    if(resp == 1)
    {
        arma = "M4A1";
        armaSel = M4A1;
        municaoMaxArmaSel = M4A1_M;
    }
    else if(resp == 2)
    {
        arma = "AK47";
        armaSel = AK47;
        municaoMaxArmaSel = AK47_M;
    }
    else if(resp == 3)
    {
        arma = "FAMAS";
        armaSel = FAMAS;
        municaoMaxArmaSel = FAMAS_M;
    }
    else if(resp == 4)
    {
        arma = "Galil";
        armaSel = Galil;
        municaoMaxArmaSel = Galil_M;
    }
    else if(resp == 5)
    {
        arma = "AWP";
        armaSel = AWP;
        municaoMaxArmaSel = AWP_M;
    }

    cls();
    cout << "\nEQUIPAMENTO SELECIONADO\n\nARMA: " << arma << "\nMUNICAO: " << armaSel << "/" << municaoMaxArmaSel << "\n\n";

    return 0;
}

/*________________________________________________________________________________________________________________________________________

ESCREVENDO O MESMO SCRIPT DE UMA FORMA UM POUCO OTIMIZADA ELIMINANDO ALGUMAS CONDICIONAIS E UTILIZANDO VETORES

________________________________________________________________________________________________________________________________________
*/
#include <iostream>
#include <cstdlib>


using namespace std;
//pausa a tela
void pause()
{
    system("pause");
}

//limpa a tela
void cls()
{
    system("cls");
}

//captura e testa a entrada de dados para a arma escolhida. Retorna um numero de 1 a 5
void get_option(int *a)
{
    while(1)
    {
        cls();
        cout << "\nSELECAO DE EQUIPAMENTO\n\n";
        cout << "Escolha uma arma primaria:\n\n";
        cout << "[1]M4A1\n[2]AK47\n[3]FAMAS\n[4]Galil\n[5]AWP\n\n>>> ";
        cin >> *a;
        if(cin.fail())
        {
            cin.clear();
            cin.ignore(10000, '\n');
        }

        if((*a >= 1) && (*a <= 5))
        {
            break;
        }
        else
        {
            cout << "\nEntrada invalida. Digite o numero correspondente a opcao desejada.\n\n(1-5)\n\n";
            pause();
        }
    }
}

int main()
{
    int resp;
    resp = 0;

    //vetores para nome da arma, municao do carregador e municao maxima.

    string primaryWeapon[5] = {"M4A1", "AK47", "FAMAS", "Galil", "AWP"};
    int ammoLoader[5] = {30, 30, 25, 35, 5};
    int maxAmmo[5] = {90, 90, 90, 90, 30};

    get_option(&resp);

    cls();
    cout << "\nEQUIPAMENTO SELECIONADO\n\nARMA: " << primaryWeapon[resp-1] << "\nMUNICAO: " << ammoLoader[resp-1] << "/" << maxAmmo[resp-1] << "\n\n";

    return 0;
}
