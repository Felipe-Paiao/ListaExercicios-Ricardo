#include <iostream>
using namespace std;

class ConversorTemperatura {
public:
    float celsiusParaFahrenheit(float celsius) {
        return (celsius * 9.0 / 5.0) + 32.0;
    }

    float fahrenheitParaCelsius(float fahrenheit) {
        return (fahrenheit - 32.0) * 5.0 / 9.0;
    }
};

int main() {
    ConversorTemperatura conversor;
    int opcao;
    float temp, resultado;

    cout << "=== Conversor de Temperatura ===" << endl;
    cout << "1 - Celsius para Fahrenheit" << endl;
    cout << "2 - Fahrenheit para Celsius" << endl;
    cout << "Escolha a opcao: ";
    cin >> opcao;

    if (opcao == 1) {
        cout << "Digite a temperatura em Celsius: ";
        cin >> temp;
        resultado = conversor.celsiusParaFahrenheit(temp);
        cout << "Resultado: " << resultado << " °F" << endl;
    } else if (opcao == 2) {
        cout << "Digite a temperatura em Fahrenheit: ";
        cin >> temp;
        resultado = conversor.fahrenheitParaCelsius(temp);
        cout << "Resultado: " << resultado << " °C" << endl;
    } else {
        cout << "Opcao invalida." << endl;
    }

    return 0;
}
