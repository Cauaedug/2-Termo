#include <iostream>
using namespace std;
//vetor para a maior nota
float maiorNota(int notas[], int tamanho) {
    float maior = notas[0];
    for (int i = 1; i < tamanho; i++) {
        if (notas[i] > maior) {
            maior
			 = notas[i];
        }
    }
    return maior;
}
//vetor para a maior nota
float menorNota(int notas[], int tamanho) {
    float menor = notas[0];
    for (int i = 1; i < tamanho; i++) {
        if (notas[i] < menor) {
            menor = notas[i];
        }
    }
    return menor;
}
//vetor para a maior nota
float calcularMedia(int notas[], int tamanho) {
    float soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += notas[i];
    }
    return soma / tamanho;
}
//inicio main
int main() {
    setlocale(LC_ALL, "Portuguese");
    //declara��o
    int tamanho = 10, notas[tamanho],cont = 0;

    // processamento das notas
    for (int i = 0; i < tamanho; i++) {
        cout << "Digite uma nota de SATISFA��O (0 a 10): ";
        cin >> notas[i];

        // Verifica se a nota � maior que 7
        if (notas[i] > 7) {
            cont++;
        }
    }

    // saida de dados
    cout << "A quantidade de notas maiores que 7 �: " << cont << endl;
    cout << "A maior nota �: " << maiorNota(notas, tamanho) << endl;
    cout << "A menor nota �: " << menorNota(notas, tamanho) << endl;
    cout << "A m�dia das notas �: " << calcularMedia(notas, tamanho) << endl;

    return 0;
}

