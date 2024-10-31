#include <iostream>
using namespace std;
//fun��o primos
int Primo(int num) {
    if (num < 2) return false; // menor que 2 n�o s�o primos
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false; // n�o � primo
    }
    return true; // � primo
}

//inicio codigo
int main() {
    setlocale(LC_ALL, "Portuguese");
    int K[15];
    int P[15];
    int contador = 0;

    // Leitura do K
    cout << "Digite 15 n�meros: "<<endl;
    for (int i = 0; i < 15; i++) {
        cin >> K[i];
    }

    // Encontrar primos
    for (int i = 0; i < 15; i++) {
        if (Primo(K[i])) {
            P[contador++] = K[i];
        }
    }

    // Imprimir P
    cout << "N�meros primos em K: "<<endl;
    for (int i = 0; i < contador; i++) {
        cout << " "<<P[i];
    }
   

    return 0;
}

