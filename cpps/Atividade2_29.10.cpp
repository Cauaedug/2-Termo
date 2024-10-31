#include <stdio.h>
#include <iostream>
#include <math.h>

/*Entregar o código .cpp as telas com explicações de execução. 

2-Faça um programa que leia quatro palavras (variável string), concatene todas as strings lidas em uma única palavra (variável string) e mostre o resultado da cancatenação. */

using namespace std; 

int main() {
	setlocale (LC_ALL ,"portuguese");
	    string palavra1, palavra2, palavra3, palavra4, juncao; //declaração das palavras que vão ser digitados 
	
	//entrada dos strings
	    cout << "Digite a 1° palavra: ";
	    getline(cin, palavra1);
	    cout << "Digite a 2° palavra: ";
	    getline(cin, palavra2);
	    cout << "Digite a 3° palavra: ";
	    getline(cin, palavra3);
	    cout << "Digite a 4° palavra: ";
	    getline(cin, palavra4);
	    
	    juncao = palavra1 + palavra2 + palavra3 + palavra4;	    //concatenação das palavras

	    cout << "A palavra concatenada é: " << juncao << endl;	    //saida da paalvra concatenada 
	    
	    return 0;
}

