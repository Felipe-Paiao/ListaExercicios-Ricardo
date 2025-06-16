#include <iostream> 
#include <iomanip>  

using namespace std;

int main() {
    double nota1, nota2, notaFinal;

    cout << "Digite a primeira nota: ";
    cin >> nota1;

    cout << "Digite a segunda nota: ";
    cin >> nota2;

    notaFinal = nota1 + nota2;

    cout << fixed << setprecision(1);

    cout << "NOTA FINAL = " << notaFinal << endl;

    if (notaFinal < 7.0) {
        cout << "REPROVADO" << endl;
    }

    return 0;
}
