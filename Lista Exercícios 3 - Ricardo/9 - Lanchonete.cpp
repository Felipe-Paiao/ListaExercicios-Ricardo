#include <iostream> 
#include <iomanip>  

using namespace std;

int main() {
    int codigoProduto, quantidadeComprada;
    double precoUnitario, valorTotal;

    cout << "Codigo do produto comprado (1 a 5): ";
    cin >> codigoProduto;

    cout << "Quantidade comprada: ";
    cin >> quantidadeComprada;

    switch (codigoProduto) {
        case 1:
            precoUnitario = 5.00;
            break;
        case 2:
            precoUnitario = 3.50;
            break;
        case 3:
            precoUnitario = 4.80;
            break;
        case 4:
            precoUnitario = 8.90;
            break;
        case 5:
            precoUnitario = 7.32;
            break;
        default:
            precoUnitario = 0.0; 
            cout << "Codigo de produto invalido!" << endl;
            break;
    }

    valorTotal = precoUnitario * quantidadeComprada;

    cout << fixed << setprecision(2);

    if (precoUnitario > 0) { 
        cout << "Valor a pagar: R$ " << valorTotal << endl;
    }

    return 0;
}
