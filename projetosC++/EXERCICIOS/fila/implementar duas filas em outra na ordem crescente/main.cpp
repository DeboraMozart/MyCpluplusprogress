#include <iostream>
#include <queue>

void preencher_fila_ordenada(std::queue<int>& fila1, std::queue<int>& fila2, std::queue<int>& fila3) {
    while (!fila1.empty() && !fila2.empty()) {
        if (fila1.front() <= fila2.front()) {
            fila3.push(fila1.front());
            fila1.pop();
        } else {
            fila3.push(fila2.front());
            fila2.pop();
        }
    }

    // Se ainda houver elementos na fila1, coloque-os na fila3
    while (!fila1.empty()) {
        fila3.push(fila1.front());
        fila1.pop();
    }

    // Se ainda houver elementos na fila2, coloque-os na fila3
    while (!fila2.empty()) {
        fila3.push(fila2.front());
        fila2.pop();
    }
}

int main() {
    std::queue<int> fila1, fila2, fila3;

    // Preencher fila1 e fila2 em ordem crescente
    fila1.push(1);
    fila1.push(3);
    fila1.push(5);
    fila2.push(2);
    fila2.push(4);
    fila2.push(6);
    fila2.push(9);

    // Chamar a função para preencher a fila3
    preencher_fila_ordenada(fila1, fila2, fila3);

    // Imprimir os elementos da fila3 em ordem
    while (!fila3.empty()) {
        std::cout << fila3.front() << std::endl;
        fila3.pop();
    }

    return 0;
}
