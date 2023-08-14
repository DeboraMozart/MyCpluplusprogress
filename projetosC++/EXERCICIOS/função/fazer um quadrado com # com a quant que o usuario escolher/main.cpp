#include <iostream>

using namespace std;
void mt(string mat[][100], int n);
/*The square brackets in the function declaration void mt(string mat[][100], int n) are used to specify the array dimensions.
In this case, mat[][100] indicates a 2-dimensional array where the first dimension is left empty, allowing it to be determined
by the function call.

    When you pass a 2-dimensional array as an argument, you need to specify the size of at least one dimension. In this case,
    the second dimension is explicitly specified as 100, while the first dimension is left empty.

    By leaving the first dimension empty in the function declaration, you allow the array to have a variable size based on the
    actual argument passed during the function call.

    For example, if you call the function as mt(matriz, 4), the mat array will be treated as a 2-dimensional array with dimensions
    [4][100]. The second dimension is fixed at 100, but the first dimension is determined by the actual size passed as an argument
    (4 in this case).

    This syntax allows you to work with a 2-dimensional array with a variable size for one dimension, while the other dimension
    remains fixed.
*/
int main()
{
    /*03. Faça um programa que peça um número inteiro positivo 'n' para o usuário e imprima um quadrado de lado 'n' preenchido de hashtags. Por exemplo, para n=4, deve aparecer na tela:
    ####
    ####
    ####
    ####*/

    int n;
    string matriz[100][100];
     cout << "Digite o tamanho do quadrado:  ";
    cin >> n;


    mt (matriz,n);

    return 0;
}
void mt (string mat[][100], int n){

   for (int i=0;i<n;i++){
        for (int j = 0; j < n; j++){
            mat [i][j] = "#";
        }
    }
    for (int i=0;i<n;i++){
        for (int j = 0; j < n; j++){
            cout << mat [i][j];
        }
        cout << endl;
    }


}
