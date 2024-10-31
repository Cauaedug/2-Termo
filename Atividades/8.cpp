#include <iostream>
using namespace std;

// Fun��o 
bool ePrimo(int numero) {
    
    if (numero <= 1) {//1 n�o s�o primos
        return false;
    }
   
    if (numero == 2) {// O n�mero 2 � o �nico n�mero
        return true;
    }
    
    if (numero % 2 == 0) {// N�meros pares maiores que 2 n�o s�o primos
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
    cout << "Digite um n�mero inteiro: ";
    cin >> numero;

    // Verifica e exibe se � primo
    if (ePrimo(numero)) {
        cout << numero << " � um n�mero primo." << endl;
    } else {
        cout << numero << " n�o � um n�mero primo." << endl;
    }

    return 0;
}

