#include <iostream> 
#include <iomanip> 

using namespace std;

int main() {
    double salarioAtual;
    double novoSalario, valorAumento, porcentagemAumento;

    cout << "Digite o salario da pessoa: ";
    cin >> salarioAtual;

    if (salarioAtual <= 1000.00) {
        porcentagemAumento = 20.0;
    } else if (salarioAtual <= 3000.00) { 
        porcentagemAumento = 15.0;
    } else if (salarioAtual <= 8000.00) { 
        porcentagemAumento = 10.0;
    } else {
        porcentagemAumento = 5.0;
    }

    valorAumento = salarioAtual * (porcentagemAumento / 100.0);
    novoSalario = salarioAtual + valorAumento;

    cout << fixed << setprecision(2);

    cout << "Novo salario R$ " << novoSalario << endl;
    cout << "Aumento R$ " << valorAumento << endl;
    cout << "Porcentagem = " << static_cast<int>(porcentagemAumento) << "%" << endl; 

    return 0;
}
