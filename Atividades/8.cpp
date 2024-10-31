#include <iostream>
using namespace std;

// Função 
bool ePrimo(int numero) {
    
    if (numero <= 1) {//1 não são primos
        return false;
    }
   
    if (numero == 2) {// O número 2 é o único número
        return true;
    }
    
    if (numero % 2 == 0) {// Números pares maiores que 2 não são primos
        return false;
    }
    
    for (int i = 3; i * i <= numero; i += 2) {
        if (numero % i == 0) {
            return false; 
        }
    }
    
    return true;
}
//inicio codigo
int main() {
	setlocale(LC_ALL,"Portuguese");
    int numero;
//entrada de dados
    cout << "Digite um número inteiro: ";
    cin >> numero;

    // Verifica e exibe se é primo
    if (ePrimo(numero)) {
        cout << numero << " é um número primo." << endl;
    } else {
        cout << numero << " não é um número primo." << endl;
    }

    return 0;
}

