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
             << " | Salário: R$ " << salario
             << " | Departamento: " << departamento << endl;
    }
};

int main() {
    vector<Funcionario> funcionarios;
    int opcao;

    do {
        cout << "\n=== MENU ===\n";
        cout << "1 - Cadastrar funcionário\n";
        cout << "2 - Exibir total de salários por departamento\n";
        cout << "3 - Listar todos os funcionários\n";
        cout << "0 - Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;
        cin.ignore();

        if (opcao == 1) {
            Funcionario f;
            cout << "Nome: ";
            getline(cin, f.nome);
            cout << "ID: ";
            cin >> f.id;
            cout << "Salário: ";
            cin >> f.salario;
            cin.ignore(); 
            cout << "Departamento: ";
            getline(cin, f.departamento);

            funcionarios.push_back(f);
            cout << "Funcionário cadastrado com sucesso!\n";
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

            cout << "Total de salários no departamento '" << dep << "': R$ " << total << endl;
        }
        else if (opcao == 3) {
            if (funcionarios.empty()) {
                cout << "Nenhum funcionário cadastrado.\n";
            } else {
                cout << "\n--- Lista de Funcionários ---\n";
                for (const Funcionario& f : funcionarios) {
                    f.exibirDados();
                }
            }
        }
        else if (opcao != 0) {
            cout << "Opção inválida.\n";
        }

    } while (opcao != 0);

    cout << "Programa encerrado.\n";
    return 0;
}
