#include <iostream>
using namespace std;

// Função para adicionar ou atualizar um produto
void adicionarProduto(int codigos[], int quantidades[], int codigo, int quantidade) {
    for (int i = 0; i < 100; i++) {
        if (codigos[i] == codigo) {
            quantidades[i] += quantidade; // Atualiza a quantidade 
            return;
        }
        if (codigos[i] == 0) {
            codigos[i] = codigo; //novo produto
            quantidades[i] = quantidade;
            return;
        }
    }
}

// Função para remover um produto
void removerProduto(int codigos[], int quantidades[], int codigo) {
    for (int i = 0; i < 100; i++) {
        if (codigos[i] == codigo) {
            codigos[i] = 0; // Remove o produto
            quantidades[i] = 0;
            return;
        }
    }
}

// Função para verificar o estoque de um produto
int verificarEstoque(int codigos[], int quantidades[], int codigo) {
    for (int i = 0; i < 100; i++) {
        if (codigos[i] == codigo) {
            return quantidades[i]; // Retorna a quantidade do produto
        }
    }
    return -1;
}

//  produtos em estoque
void listarProdutos(int codigos[], int quantidades[]) {
    cout << "Produtos em estoque:\n";
    for (int i = 0; i < 100; i++) {
        if (codigos[i] != 0) {
            cout << "Código: " << codigos[i] << ", Quantidade: " << quantidades[i] << "\n";
        }
    }
}

int main() {
   setlocale(LC_ALL,"Portuguese");
   
    int codigos[100] = {0}; 
    int quantidades[100] = {0};
    int opcao, codigo, quantidade;

    do {
        cout << "Menu:\n";
        cout << "1. Adicionar/Atualizar Produto\n";
        cout << "2. Remover Produto\n";
        cout << "3. Verificar Estoque\n";
        cout << "4. Listar Produtos\n";
        cout << "0. Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1: // Adicionar e Atualizar
                cout << "Digite o código do produto: ";
                cin >> codigo;
                cout << "Digite a quantidade: ";
                cin >> quantidade;
                adicionarProduto(codigos, quantidades, codigo, quantidade);
                break;
            case 2: // Remover P
                cout << "Digite o código do produto a ser removido: ";
                cin >> codigo;
                removerProduto(codigos, quantidades, codigo);
                break;
            case 3: // Verificar 
                cout << "Digite o código do produto: ";
                cin >> codigo;
                quantidade = verificarEstoque(codigos, quantidades, codigo);
                if (quantidade >= 0) {
                    cout << "Estoque do produto " << codigo << ": " << quantidade << "\n";
                } else {
                    cout << "Produto não encontrado.\n";
                }
                break;
            case 4: // Listar s
                listarProdutos(codigos, quantidades);
                break;
            case 0: // Sair
                cout << "Saindo...\n";
                break;
            default:
                cout << "Opção inválida!\n";
        }
    } while (opcao != 0);

    return 0;
}

