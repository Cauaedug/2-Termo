#include <stdio.h>
#include <iostream>
#include <math.h>

/*Entregar o c�digo .cpp as telas com explica��es de execu��o. 

2-Fa�a um programa que leia quatro palavras (vari�vel string), concatene todas as strings lidas em uma �nica palavra (vari�vel string) e mostre o resultado da cancatena��o. */

using namespace std; 

int main() {
	setlocale (LC_ALL ,"portuguese");
	    string palavra1, palavra2, palavra3, palavra4, juncao; //declara��o das palavras que v�o ser digitados 
	
	//entrada dos strings
	    cout << "Digite a 1� palavra: ";
	    getline(cin, palavra1);
	    cout << "Digite a 2� palavra: ";
	    getline(cin, palavra2);
	    cout << "Digite a 3� palavra: ";
	    getline(cin, palavra3);
	    cout << "Digite a 4� palavra: ";
	    getline(cin, palavra4);
	    
	    juncao = palavra1 + palavra2 + palavra3 + palavra4;	    //concatena��o das palavras

	    cout << "A palavra concatenada �: " << juncao << endl;	    //saida da paalvra concatenada 
	    
	    return 0;
}

