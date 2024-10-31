#include <iostream>
using namespace std;

void inverterVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho / 2; i++) {
        // variável temporária
        int temp = vetor[i];
        
        // Trocar os numeros
        vetor[i] = vetor[tamanho - 1 - i];
        vetor[tamanho - 1 - i] = temp;
    }
}

//inicio
int main() {
	setlocale(LC_ALL,"Portuguese");
    int vetor[10];

    cout << "Digite 10 números inteiros: "<<endl;
    for (int i = 0; i < 10; i++) {
        cin >> vetor[i];
    }

    inverterVetor(vetor, 10);

    cout << "Vetor invertido: "<<endl;
    for (int i = 0; i < 10; i++) {
        cout << vetor[i] << " ";
    }
    std::cout << endl;

    return 0;
}

