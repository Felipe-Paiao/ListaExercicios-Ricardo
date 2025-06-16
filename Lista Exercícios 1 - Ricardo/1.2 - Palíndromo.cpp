#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;

class Verificador {
public:
    bool Palindromo(string texto) {
        texto.erase(remove(texto.begin(), texto.end(), ' '), texto.end());
        transform(texto.begin(), texto.end(), texto.begin(), ::tolower);
        string invertida = texto;
        reverse(invertida.begin(), invertida.end());
        return texto == invertida;
    }
};

int main() {
    Verificador v;
    string entrada;

    cout << "Digite uma palavra: ";
    getline(cin, entrada);

    if (v.Palindromo(entrada)) {
        cout << "E um palindromo" << endl;
    } else {
        cout << "Nao e um palindromo" << endl;
    }
    return 0;
}

