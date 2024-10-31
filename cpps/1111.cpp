#include <iostream>
#include <cstring> // strlen
using namespace std;

int main() {
    char palavra[20];
    cout << "Digite uma palavra: ";
    cin.getline(palavra, 20); //entrada

    
    for (int i = strlen(palavra) - 1; i >= 0; i--) {
    	//strlen ve o comprimento 
        cout << palavra[i]; //processamento
    }
    cout << endl; // saida

    return 0; 
}

