#include <iostream>
using namespace std;

class Matematica{
public:
    unsigned long long fatorial(int n) {
        if (n == 0 || n == 1)
            return 1;
        else
            return n * fatorial(n - 1);
    }
};

int main() {
    Matematica m;
    int numero;

    cout << "Digite um numero inteiro nao negativo: ";
    cin >> numero;

    if (numero < 0) {
        cout << "O numero negativo nao possui fatorial definido." << endl;
    } else {
        unsigned long long resultado = m.fatorial(numero);
        cout << "Fatorial de " << numero << " = " << resultado << endl;
    }

    return 0;
}
