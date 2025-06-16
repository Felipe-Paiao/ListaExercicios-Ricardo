#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, n;

    cout << "Digite o numero de linhas da matriz: ";
    cin >> m;
    cout << "Digite o numero de colunas da matriz: ";
    cin >> n;

    vector<vector<int>> matriz(m, vector<int>(n));

    cout << "\nDigite os elementos da matriz:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    int maior = matriz[0][0];
    int menor = matriz[0][0];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matriz[i][j] > maior)
                maior = matriz[i][j];
            if (matriz[i][j] < menor)
                menor = matriz[i][j];
        }
    }

    cout << "\nMaior elemento da matriz: " << maior << endl;
    cout << "Menor elemento da matriz: " << menor << endl;

    return 0;
}
