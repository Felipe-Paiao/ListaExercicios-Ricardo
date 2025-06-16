#include <iostream> 
#include <string> 
#include <iomanip> 

using namespace std;

int main() {
    string nome1, nome2;
    int idade1, idade2;
    double mediaIdades;

    cout << "Dados da primeira pessoa:" << endl;
    cout << "Nome: ";
    getline(cin, nome1); 
    cout << "Idade: ";
    cin >> idade1;

    cin.ignore(); 

    cout << "Dados da segunda pessoa:" << endl;
    cout << "Nome: ";
    getline(cin, nome2);
    cout << "Idade: ";
    cin >> idade2;

    mediaIdades = (double)(idade1 + idade2) / 2;

    cout << fixed << setprecision(1);

    cout << "A idade media de " << nome1 << " e " << nome2 << " e de " << mediaIdades << " anos" << endl;

    return 0;
}
