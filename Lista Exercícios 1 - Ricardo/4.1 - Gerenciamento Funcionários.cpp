#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Funcionario {
public:
    string nome;
    int id;
    double salario;
    string departamento;

    void exibirDados() {
        cout << "ID: " << id << " | Nome: " << nome
             << " | Sal�rio: R$ " << salario
             << " | Departamento: " << departamento << endl;
    }
};

int main() {
    vector<Funcionario> funcionarios;
    int opcao;

    do {
        cout << "\n=== MENU ===\n";
        cout << "1 - Cadastrar funcion�rio\n";
        cout << "2 - Exibir total de sal�rios por departamento\n";
        cout << "3 - Listar todos os funcion�rios\n";
        cout << "0 - Sair\n";
        cout << "Escolha uma op��o: ";
        cin >> opcao;
        cin.ignore();

        if (opcao == 1) {
            Funcionario f;
            cout << "Nome: ";
            getline(cin, f.nome);
            cout << "ID: ";
            cin >> f.id;
            cout << "Sal�rio: ";
            cin >> f.salario;
            cin.ignore(); 
            cout << "Departamento: ";
            getline(cin, f.departamento);

            funcionarios.push_back(f);
            cout << "Funcion�rio cadastrado com sucesso!\n";
        }
        else if (opcao == 2) {
            string dep;
            cout << "Digite o nome do departamento: ";
            getline(cin, dep);

            double total = 0;
            for (const Funcionario& f : funcionarios) {
                if (f.departamento == dep) {
                    total += f.salario;
                }
            }

            cout << "Total de sal�rios no departamento '" << dep << "': R$ " << total << endl;
        }
        else if (opcao == 3) {
            if (funcionarios.empty()) {
                cout << "Nenhum funcion�rio cadastrado.\n";
            } else {
                cout << "\n--- Lista de Funcion�rios ---\n";
                for (const Funcionario& f : funcionarios) {
                    f.exibirDados();
                }
            }
        }
        else if (opcao != 0) {
            cout << "Op��o inv�lida.\n";
        }

    } while (opcao != 0);

    cout << "Programa encerrado.\n";
    return 0;
}
