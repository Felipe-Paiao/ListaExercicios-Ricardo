#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    double glicose;

    cout << "Digite a medida da glicose: ";
    cin >> glicose;

    if (glicose <= 100.0) {
        cout << "Classificacao: normal" << endl;
    } else if (glicose <= 140.0) { 
        cout << "Classificacao: elevado" << endl;
    } else {
        cout << "Classificacao: diabetes" << endl;
    }

    return 0; 
}
