#include <iostream>
using namespace std;


void encontraMinMax(int a, int b, int c, int &min, int &max) {
    
    min = max = a;

    // definição de maiores e menores
    if (b < min) min = b;
    if (b > max) max = b;
    if (c < min) min = c;
    if (c > max) max = c;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int a, b, c, min, max;
    
    cout << "Digite o primeiro número: ";
    cin >> a;
    cout << "Digite o segundo número: ";
    cin >> b;
    cout << "Digite o terceiro número: ";
    cin >> c;
    
    // chamada de funções
    encontraMinMax(a, b, c, min, max);
    
    // saida
    cout << "O maior é: " << max << endl;
    cout << "O menor é: " << min << endl;
    
    system("pause"); 

}

