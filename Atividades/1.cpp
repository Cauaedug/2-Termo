#include <iostream>
using namespace std;


//função para tranformar numero em quadrado e cubico
void calculaQuadradoCubo(int num, int &quadrado, int &cubo) {
    quadrado = num * num;
    cubo = num * num * num;
}
//inicio main
int main() {
   setlocale(LC_ALL,"Portuguese");
    int num;
    int quadrado, cubo;

    cout << "Digite um numero para a tarefa: ";
    cin >> num;//entrada de dados

    calculaQuadradoCubo(num, quadrado, cubo);//chamada de funçoes

    cout << "O quadrado do numero é: " << quadrado << endl;
    cout << "O cubo do numero é: " << cubo << endl;//saidas de dados

    system("Pause");
  
}

