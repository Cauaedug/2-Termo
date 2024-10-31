#include <iostream>
using namespace std;

// Fun��o 
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

    // chamada de fun��es
    imc = calculaIMC(peso, altura);

    
    cout << "O IMC �: " << imc << endl;

    // Avalia��o
    if (imc < 18.5) {
        cout << "Classifica��o: Abaixo do peso" << endl;
    } else if (imc >= 18.5 && imc < 24.9) {
        cout << "Classifica��o: Peso normal" << endl;
    } else if (imc >= 25 && imc < 29.9) {
        cout << "Classifica��o: Sobrepeso" << endl;
    } else {
        cout << "Classifica��o: Obesidade" << endl;
    }

    return 0;
}

