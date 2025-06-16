#include <iostream>
using namespace std;

class Numero {
public:
    int valor;

    void imprimirValor() {
        cout << "Valor: " << valor << endl;
    }

    void imprimirEndereco() {
        cout << "Endereco: " << this << endl;
    }
};

int main() {
    Numero num;
    num.valor = 44;

    num.imprimirValor();
    num.imprimirEndereco();

    return 0;
}
