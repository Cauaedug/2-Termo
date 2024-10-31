#include <iostream>
using namespace std;

// Função para ordenar o vetor
void ordenarVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                // Troca os elementos
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

// calcular a mediana
float calcularMediana(int vetor[], int tamanho) {
    ordenarVetor(vetor, tamanho); // Ordena o vetor

    if (tamanho % 2 == 0) {
        //  é par
        return (vetor[tamanho / 2 - 1] + vetor[tamanho / 2]) / 2.0;
    } else {
        // é ímpar
        return vetor[tamanho / 2];
    }
}

// calcular a moda
int calcularModa(int vetor[], int tamanho) {
    int maxCount = 0; 
    int moda = vetor[0]; // Armazena a moda

    for (int i = 0; i < tamanho; i++) {
        int count = 0; 
        for (int j = 0; j < tamanho; j++) {
            if (vetor[j] == vetor[i]) {
                count++;
            }
        }
        // Atualiza a moda 
        if (count > maxCount) {
            maxCount = count;
            moda = vetor[i];
        }
    }
    return moda;
}

int main() {
    int numeros[10];

    // ENTRADA DE DADOS
    cout << "Digite 100 números inteiros:\n";
    for (int i = 0; i < 10; i++) {
        cin >> numeros[i];
    }

    // Calcula a mediana e a moda
    float mediana = calcularMediana(numeros, 10);
    int moda = calcularModa(numeros, 10);

    // SAIDA DE DADOS
    cout << "Mediana: " << mediana << endl;
    cout << "Moda: " << moda << endl;

    return 0;
}

