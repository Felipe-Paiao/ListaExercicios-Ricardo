#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    cout << "Digite a ordem da matriz quadrada (n x n): ";
    cin >> n;

    vector<vector<int>> matriz(n, vector<int>(n));

    cout << "\nDigite os elementos da matriz:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    int somaPrincipal = 0;
    int somaSecundaria = 0;

    for (int i = 0; i < n; i++) {
        somaPrincipal += matriz[i][i];  
        somaSecundaria += matriz[i][n - 1 - i]; 
    }

    cout << "\nSoma da diagonal principal: " << somaPrincipal << endl;
    cout << "Soma da diagonal secundaria: " << somaSecundaria << endl;

    return 0;
}
