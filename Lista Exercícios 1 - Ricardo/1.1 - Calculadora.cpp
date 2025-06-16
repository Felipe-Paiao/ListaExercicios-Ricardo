#include <iostream>
using namespace std;

class Calculadora {
public:
    float somar(float a, float b) {
        return a + b;
    }

    float subtrair(float a, float b) {
        return a - b;
    }

    float multiplicar(float a, float b) {
        return a * b;
    }

    float dividir(float a, float b) {
        if (b != 0) {
            return a / b;
        } else {
            cout << "Erro: Divisao por zero!" << endl;
            return 0;
        }
    }
};

int main() {
    Calculadora calc;
    float num1, num2;
    int opcao;

    cout << "Digite o primeiro numero: ";
    cin >> num1;

    cout << "Digite o segundo numero: ";
    cin >> num2;

    cout << "\nEscolha a operacao:\n";
    cout << "1. Soma\n";
    cout << "2. Subtracao\n";
    cout << "3. Multiplicacao\n";
    cout << "4. Divisao\n";
    cout << "Opcao: ";
    cin >> opcao;

    float resultado;

    switch(opcao) {
        case 1:
            resultado = calc.somar(num1, num2);
            cout << "Resultado da soma: " << resultado << endl;
            break;
        case 2:
            resultado = calc.subtrair(num1, num2);
            cout << "Resultado da subtracao: " << resultado << endl;
            break;
        case 3:
            resultado = calc.multiplicar(num1, num2);
            cout << "Resultado da multiplicacao: " << resultado << endl;
            break;
        case 4:
            resultado = calc.dividir(num1, num2);
            cout << "Resultado da divisao: " << resultado << endl;
            break;
        default:
            cout << "Opção invalida!" << endl;
            break;
    }

    return 0;
}
