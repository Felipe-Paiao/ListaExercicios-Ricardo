#include <iostream> 
#include <iomanip> 

using namespace std;

int main() {
    double precoUnitario, dinheiroRecebido, totalPagar;
    int quantidadeComprada;

    cout << "Preco unitario do produto: ";
    cin >> precoUnitario;

    cout << "Quantidade comprada: ";
    cin >> quantidadeComprada;

    cout << "Dinheiro recebido: ";
    cin >> dinheiroRecebido;

    totalPagar = precoUnitario * quantidadeComprada;

    cout << fixed << setprecision(2);

    if (dinheiroRecebido >= totalPagar) {
        double troco = dinheiroRecebido - totalPagar;
        cout << "TROCO = " << troco << endl;
    } else {
        double falta = totalPagar - dinheiroRecebido;
        cout << "DINHEIRO INSUFICIENTE. FALTAM " << falta << " REAIS" << endl;
    }
    return 0;
}
