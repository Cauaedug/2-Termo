#include <iostream>
#include <string> 

using namespace std;

int main() {
	setlocale(LC_ALL,"Portuguese");
    string palavra1, palavra2, palavra3, palavra4, juncao;

//entrada dos strings
    cout << "Digite a 1 palavra: ";
    getline(cin, palavra1);
    cout << "Digite a 2 palavra: ";
    getline(cin, palavra2);
    cout << "Digite a 3 palavra: ";
    getline(cin, palavra3);
    cout << "Digite a 4 palavra: ";
    getline(cin, palavra4);
    
    //concatenação das palavras
    juncao = palavra1 + palavra2 + palavra3 + palavra4;
    //saida
    cout << "A palavra concatenada é: " << juncao << endl;
    
    return 0;
}

