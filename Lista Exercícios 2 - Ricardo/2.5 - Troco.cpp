#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    double precoUnitario, dinheiroRecebido, totalPagar, troco;
    int quantidadeComprada;

    cout << "Preco unitario do produto: ";
    cin >> precoUnitario;

    cout << "Quantidade comprada: ";
    cin >> quantidadeComprada;

    cout << "Dinheiro recebido: ";
    cin >> dinheiroRecebido;

    totalPagar = precoUnitario * quantidadeComprada;
    troco = dinheiroRecebido - totalPagar;

    cout << fixed << setprecision(2); 

    cout << "TROCO = " << troco << endl;

    return 0;
}
