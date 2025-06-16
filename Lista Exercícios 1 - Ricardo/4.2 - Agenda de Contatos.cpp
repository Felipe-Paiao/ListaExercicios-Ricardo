#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Contato {
public:
    string nome;
    string telefone;
    string email;

    void exibirContato() {
        cout << "Nome: " << nome << " | Telefone: " << telefone << " | Email: " << email << endl;
    }
};

int main() {
    vector<Contato> agenda;
    int opcao;

    do {
        cout << "\n=== MENU AGENDA ===\n";
        cout << "1 - Adicionar contato\n";
        cout << "2 - Listar todos os contatos\n";
        cout << "3 - Buscar contato por nome\n";
        cout << "0 - Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;
        cin.ignore();

        if (opcao == 1) {
            if (agenda.size() >= 10) {
                cout << "Limite de 10 contatos atingido.\n";
            } else {
                Contato c;
                cout << "Nome: ";
                getline(cin, c.nome);
                cout << "Telefone: ";
                getline(cin, c.telefone);
                cout << "Email: ";
                getline(cin, c.email);

                agenda.push_back(c);
                cout << "Contato adicionado com sucesso!\n";
            }
        }
        else if (opcao == 2) {
            if (agenda.empty()) {
                cout << "Nenhum contato cadastrado.\n";
            } else {
                cout << "\n--- Lista de Contatos ---\n";
                for (const Contato& c : agenda) {
                    c.exibirContato();
                }
            }
        }
        else if (opcao == 3) {
            string nomeBusca;
            cout << "Digite o nome do contato: ";
            getline(cin, nomeBusca);

            bool encontrado = false;
            for (const Contato& c : agenda) {
                if (c.nome == nomeBusca) {
                    cout << "Telefone: " << c.telefone << "\nEmail: " << c.email << endl;
                    encontrado = true;
                    break;
                }
            }

            if (!encontrado) {
                cout << "Contato não encontrado.\n";
            }
        }
        else if (opcao != 0) {
            cout << "Opção inválida.\n";
        }

    } while (opcao != 0);

    cout << "Programa encerrado.\n";
    return 0;
}
