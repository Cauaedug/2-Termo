#include <iostream>
#include <cmath>  
using namespace std;

// Função 
void calculaJurosCompostos(double principal, double taxa, int tempo, double &valorFuturo, double &juros) {
    // Calcula o valor futuro 
    valorFuturo = principal * pow(1 + (taxa / 100), tempo);
    // Calcula o montante 
    juros = valorFuturo - principal;
}

int main() {
    double principal, taxa, valorFuturo, juros;
    int tempo;//variaveis

    // Entrada de dados
    cout << "Digite o valor inicial do investimento: ";
    cin >> principal;

    cout << "Digite a taxa de juros anual (%): ";
    cin >> taxa;

    cout << "Digite o tempo do investimento (em anos): ";
    cin >> tempo;

    // Chama a função 
    calculaJurosCompostos(principal, taxa, tempo, valorFuturo, juros);

    // saida de dados
    cout << "Juros acumulados: R$ " << juros << endl;
    cout << "Valor futuro do investimento: R$ " << valorFuturo << endl;

    return 0;
}

