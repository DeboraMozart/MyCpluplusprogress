#include <iostream>
#include <stack>

using namespace std;

void fatoracaoPrima(int n) {
    stack<int> fatores;

    int divisor = 2;
    while (n > 1) {
        if (n % divisor == 0) {
            fatores.push(divisor);
            n = n / divisor;
        } else {
            divisor++;
        }
    }

    cout << "Fatoração prima de " << n << ": ";
    while (!fatores.empty()) {
        cout << fatores.top();
        fatores.pop();
        if (!fatores.empty()) {
            cout << " * ";
        }
    }
}

int main() {
    int n = 3960;
    fatoracaoPrima(n);
    return 0;
}
