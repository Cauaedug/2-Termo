#include <stdio.h>
#include <iostream>
#include <math.h>

/*Entregar o código .cpp as telas com explicações de execução. 

3-Dados uma variável do tipo string, um contendo uma frase, e uma variável do tipo caracter, determine o número de vezes que o caracter ocorre na frase.
Exemplo:
A frase : ANA E MARIANA GOSTAM DE BANANA 
E o caracter A:
Temos que o caracter A ocorre 9 vezes na frase.*/

using namespace std; 

int main() {
	setlocale (LC_ALL ,"portuguese");

    string cFrase; //string para a frase 
    char letra;
    int contagem = 0;

    cout << "Digite uma frase: ";
    getline(cin, cFrase); 

    cout << "Digite uma letra: ";
    cin >> letra;

    for (int i = 0; i < cFrase.length(); i++) {     // Usando um loop tradicional para identificar quantas vezes o caractere aparece
        if (cFrase[i] == letra) {
            contagem++;//controle do loop 
        }
    }

    cout << "A letra '" << letra << "' aparece: " << contagem << " vezes." << endl;

    return 0;   
}



