#include <iostream> 

using namespace std;

int main() {
    int duracaoEmSegundos;
    int horas, minutos, segundos;

    cout << "Digite a duracao em segundos: ";
    cin >> duracaoEmSegundos;

    horas = duracaoEmSegundos / 3600;
    duracaoEmSegundos = duracaoEmSegundos % 3600; 

    minutos = duracaoEmSegundos / 60; 
    segundos = duracaoEmSegundos % 60; 

    cout << horas << ":" << minutos << ":" << segundos << endl;

    return 0; 
}
