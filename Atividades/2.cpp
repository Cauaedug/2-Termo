#include <iostream>
using namespace std;


void encontraMinMax(int a, int b, int c, int &min, int &max) {
    
    min = max = a;

    // defini��o de maiores e menores
    if (b < min) min = b;
    if (b > max) max = b;
    if (c < min) min = c;
    if (c > max) max = c;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int a, b, c, min, max;
    
    cout << "Digite o primeiro n�mero: ";
    cin >> a;
    cout << "Digite o segundo n�mero: ";
    cin >> b;
    cout << "Digite o terceiro n�mero: ";
    cin >> c;
    
    // chamada de fun��es
    encontraMinMax(a, b, c, min, max);
    
    // saida
    cout << "O maior �: " << max << endl;
    cout << "O menor �: " << min << endl;
    
    system("pause"); 

}

