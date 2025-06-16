#include <iostream> 
#include <iomanip>  

using namespace std;

int main() {
    double distanciaPercorrida;
    double combustivelGasto;
    double consumoMedio;

    cout << "Distancia percorrida: ";
    cin >> distanciaPercorrida;

    cout << "Combustivel gasto: ";
    cin >> combustivelGasto;

    consumoMedio = distanciaPercorrida / combustivelGasto;

    cout << fixed << setprecision(3);

    cout << "Consumo medio = " << consumoMedio << endl;

    return 0;
}
