#include <iostream>
#include <string>
#include <iomanip> 

using namespace std;

int main() {
    string nomeFuncionario;
    double valorPorHora, pagamento;
    int horasTrabalhadas;

    cout << "Nome: ";
    getline(cin, nomeFuncionario); 

    cout << "Valor por hora: ";
    cin >> valorPorHora;

    cout << "Horas trabalhadas: ";
    cin >> horasTrabalhadas;

    pagamento = valorPorHora * horasTrabalhadas;

    cout << fixed << setprecision(2); 

    cout << "O pagamento para " << nomeFuncionario << " deve ser " << pagamento << endl;

    return 0;
}
