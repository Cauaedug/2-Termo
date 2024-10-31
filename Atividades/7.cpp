#include <iostream>
using namespace std;

// Função 
double calculaIMC(double peso, double altura) {
   
    return peso / (altura * altura);
}

int main() {
   setlocale(LC_ALL,"Portuguese");
   
    double peso, altura, imc;

    //entrada de dados
    cout << "Digite o peso (kg): ";
    cin >> peso;

    
    cout << "Digite a altura (m): ";
    cin >> altura;

    // chamada de funções
    imc = calculaIMC(peso, altura);

    
    cout << "O IMC é: " << imc << endl;

    // Avaliação
    if (imc < 18.5) {
        cout << "Classificação: Abaixo do peso" << endl;
    } else if (imc >= 18.5 && imc < 24.9) {
        cout << "Classificação: Peso normal" << endl;
    } else if (imc >= 25 && imc < 29.9) {
        cout << "Classificação: Sobrepeso" << endl;
    } else {
        cout << "Classificação: Obesidade" << endl;
    }

    return 0;
}

