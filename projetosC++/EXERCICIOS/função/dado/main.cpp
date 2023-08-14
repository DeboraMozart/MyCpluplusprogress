#include <iostream>
#include <cstdlib>
#include <ctime>

int ladodado ();
void contagem (int numerolancamento);
int main()
{
    /*08. Crie um dado em C++. Role o dado: ou seja, uma função deve sortear um número aleatório de 1 até 6. Agora, faça com que
    o dado anterior seja lançado 100 vezes, mil vezes e 1 milhão de vezes. A cada vez que ele rodar, você deve armazenar o valor
     que ele forneceu, ao final, você mostra quantas vezes cada número foi sorteado. Bate com os resultados da estatística ?*/

    int numerolancamento;
    srand (time(0));
    std::cout << "Quantas vezes o dado vai rolar? ";
    std::cin >> numerolancamento;
    numerolancamento++;
    contagem(numerolancamento);
    return 0;
}
int ladodado () {
    return rand () % 6 + 1;

}
void contagem (int numerolancamento)
{
    int lado1 = 0;
    int lado2 = 0;
    int lado3 = 0;
    int lado4 = 0;
    int lado5 = 0;
    int lado6 = 0;
    for (int i = 1; i < numerolancamento; i++)
{
        int resultado = ladodado ();
        if (resultado == 1) {
            lado1++;
        }
        if (resultado == 2) {
            lado2++;
        }
        if (resultado == 3) {
            lado3++;
        }
        if (resultado == 4) {
            lado4++;
        }
        if (resultado == 5) {
            lado5++;
        }
        if (resultado == 6) {
            lado6++;
        }
    }
    std::cout << "Numero de vezes que caiu 1: " << lado1 << std::endl;
    std::cout << "Numero de vezes que caiu 2: " << lado2 << std::endl;
    std::cout << "Numero de vezes que caiu 3: " << lado3 << std::endl;
    std::cout << "Numero de vezes que caiu 4: " << lado4 << std::endl;
    std::cout << "Numero de vezes que caiu 5: " << lado5 << std::endl;
    std::cout << "Numero de vezes que caiu 6: " << lado6 << std::endl;

}


