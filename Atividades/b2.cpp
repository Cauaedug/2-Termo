#include <iostream>
#include <cstring>
using namespace std;

const int NUM_DISCIPLINAS = 3;
const int NUM_AVALIACOES = 4;
const int MAX_ALUNOS = 10;

struct Aluno {
    char nome[50];
    int idade;
    float notas[NUM_DISCIPLINAS][NUM_AVALIACOES] = {};
    float media[NUM_DISCIPLINAS] = {};
};

Aluno alunos[MAX_ALUNOS];
int numAlunos = 0;

void cadastrarAluno() {
    if (numAlunos >= MAX_ALUNOS) {
        cout << "Limite de alunos atingido!" << endl;
        return;
    }
    cin.ignore(); // Limpar buffer antes de getline
    cout << "Digite o nome do aluno: ";
    cin.getline(alunos[numAlunos].nome, 50);
    cout << "Digite a idade do aluno: ";
    cin >> alunos[numAlunos].idade;
    cout << "Aluno cadastrado com sucesso!" << endl;
    numAlunos++;
}









int main() {
    int opcao;
    do {
        cout << "\nSistema de Gerenciamento de Alunos" << endl;
        cout << "1. Cadastrar Aluno" << endl;
        cout << "2. Inserir Notas" << endl;
        cout << "3. Calcular Médias" << endl;
        cout << "4. Exibir Informações dos Alunos" << endl;
        cout << "5. Listar Alunos com Média Abaixo de 6" << endl;
        cout << "6. Remover Aluno" << endl;
        cout << "7. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cadastrarAluno();
                break;
           
            default:
                cout << "Opção inválida!" << endl;
        }
    } while (opcao != 7);

    return 0;
}

