#include <iostream>

using namespace std;

int main()
{
    /*6.Foi feita uma pesquisa entre os habitantes de uma região. Foram coletados os dados de idade,
    sexo (M/F) e salário. Faça um programa que calcule e mostre:

    a) A média dos salários do grupo;
    b) A maior e a menor idade do grupo;
    c) A quantidade de mulheres na região;
    d) A idade e o sexo da pessoa que possui o menor salário;

    Finalize a entrada de dados ao ser digitada uma idade negativa.
    */
    int idade,cont,menoridade,maioridade,qtd_mulheres;
    float sal;
    char sexo;
    cont = 0;
    qtd_mulheres = 0;
    while (true){
        cont++;
        cout << "Quanto você ganha? "<<endl;
        cin >> sal;
        cout << "Qual a sua idade? "<<endl;
        cin >> idade;
        cout << "Qual o seu sexo? "<<endl;
        cin >> sexo;
        if (idade <0){
            break;
        }
        if (cont==1) {
            maioridade = idade;
            menoridade = idade;
        }
        if (idade>maioridade) {
            maioridade = idade;

        }else if (idade<menoridade){
            menoridade = idade;
        }
      if(sexo =='F'||sexo=='f'){
      qtd_mulheres =qtd_mulheres+ 1;       }
    }
    cout << "Maior idade"<<maioridade<<endl;
    cout << "Menor idade"<< menoridade<<endl;
    cout << "Quantidade de mulheres: " <<qtd_mulheres<<endl;
    return 0;
}
