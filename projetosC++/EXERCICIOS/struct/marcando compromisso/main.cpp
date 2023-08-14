#include <iostream>
#include <list>
using namespace std;

typedef struct {
    int sthora, stminutos, stsegundos;
    int stdia, stmes, stano;
    string stdescr;

    void Horario(int hora, int minutos, int segundos) {
        sthora = hora;
        stminutos = minutos;
        stsegundos = segundos;
    }
    void Data(int dia, int mes, int ano) {
        stdia = dia;
        stmes = mes;
        stano = ano;
    }
    void Descricao(string descr) {
        stdescr = descr;
    }
    void Mostrar (){
        cout << stdescr << endl;
        cout << "Data: " << stdia << "/" << stmes << "/" << stano << endl;
        cout << "Horario: " << sthora << ":" << stminutos << ":" << stsegundos << endl << endl;
    }

} Compromisso;

int main()
{
    /*1. Escreva um trecho de codigo para fazer a criacao dos novos tipos de dados conforme ˜
    solicitado abaixo:
    • Horario: composto de hora, minutos e segundos. ´
    • Data: composto de dia, mes e ano. ˆ
    • Compromisso: composto de uma data, horario e texto que descreve o compromisso*/

    Compromisso compr[3];

    compr[0].Horario(06, 30, 00);
    compr[0].Data(20, 06, 1999);
    compr[0].Descricao("Dentista");

    compr[1].Horario(10, 40, 50);
    compr[1].Data(14, 8, 2000);
    compr[1].Descricao("Consulta no medico");

    compr[2].Horario(8, 00, 00);
    compr[2].Data(2, 12, 2024);
    compr[2].Descricao("Salao");

    for (int i = 0; i < 3; i++) {
        compr[i].Mostrar(); // Chamando o método Descricao usando os parênteses
    }

    return 0;
}
