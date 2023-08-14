#include <iostream>
#include <stack>
#include <string>

using namespace std;

void inverterPalavras(string texto) {
    stack<char> trocar;
    string palavraInvertida;
    for (char c : texto) {
        if (c != ' ' && c != '.') {
            trocar.push(c);
        } else {
            while (!trocar.empty()) {
                palavraInvertida += trocar.top();
                trocar.pop();
            }
            if (c == ' ') {
                palavraInvertida += ' ';
            } else if (c == '.') {
                palavraInvertida += '.';
            }
        }
    }
    cout << palavraInvertida << endl;
}

int main() {
    string texto;
    cout << "Digite seu texto: ";
    getline(cin, texto);

    inverterPalavras(texto);

    return 0;
}
