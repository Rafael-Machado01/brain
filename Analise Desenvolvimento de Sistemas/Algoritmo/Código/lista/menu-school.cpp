#include <iostream>
using namespace std;

#define T 2

struct dados {
    string name;
    float note1;
    float note2;
    float average;
    string result;
};

dados v[T];

void read();

void view();


char menu() {
    system("clear"); // Limpe a Tela
    cout << "\t\t Escola Ernani Rodrigues";
    cout << "\n\n\t\t Opções ";
    cout << "\n\n\t\t 1 - Cadastrar Dados.";
    cout << "\n\n\t\t 2 - Exibir Dados.";
    cout << "\n\n\t\t S - Sair";
    cout << "\n\n\t\t Escolha:";
    char op; // Variável para armazenar a escolha.
    cin >> op; // Para digitar.
    return toupper(op); // Sempre irá retornar um caractere maiusculo.
}

int main() {
    int sair = 0;
    while (sair == 0) {
        char op = menu();
        switch (op) {
            case '1': {
                read();
                break;
            }; // Chama a função read quando o um for digitado
            case '2': {
                view();
                break;
            } // Chama função view quando o dois for digitado
            case 'S': {
                sair = 1;
                system("clear");
                break;
            }
            default: {
                // Para opções invalidas
                cout << "\n\n\t\t Opção Invalida.";
                system("pause");
                break;
            }
        }
    }
}

void read() {
    for (int i = 0; i < T; i++) {
        cout << "Digite o nome do Aluno " << i + 1 << endl;
        cin >> v[i].name;
        cout << "Digite a primeira nota do Aluno " << i + 1 << endl;
        cin >> v[i].note1;
        cout << "Digite a segunda nota do Aluno " << i + 1 << endl;
        cin >> v[i].note2;
        v[i].average = (v[i].note1 + v[i].note2) / 2;
        if (v[i].average >= 7) {
            v[i].result = "Aprovado";
        } else {
            v[i].result = "Reprovado";
        }
    }
}

void view() {
    for (int i = 0; i < T; i++) {
        cout << "Aluno " << i + 1 << " : " << v[i].name << endl;
        cout << "A media do Aluno " << i + 1 << " é " << v[i].average << endl;
        cout << v[i].name << " foi " << v[i].result << endl;
    }
    cout << "Pressione Enter para continuar....";
    cin.ignore();
    cin.get();
}
