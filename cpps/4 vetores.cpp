//Faça um programa que leia 10 números inteiros, armazene-os em um vetor, solicite um valor de
//referência inteiro e:
//a) imprima os números do vetor que são maiores que o valor referência
//b) retorne quantos números armazenados no vetor são menores que o valor de referência
//c) retorne quantas vezes o valor de referência aparece no vetor 






#include<iostream>
using namespace std;


main(){
	
	int vetor[10],i,valor;
	
	for(i=0;i<10;i++){
		cout<<"Digite um valor: ";
		cin>>vetor[i];	
	}
	cout<<"Digite um valor para referencia: ";
	cin>>valor;
	
	for(i=0;i<10;i++){
		if(vetor[i]>valor){
			cout<<"Esses numeros são maiores que o valor de referencia: "<<vetor[i]<<endl;
			
		}
	}
	for(i=0;i<10;i++){
		if(vetor[i]<valor){
			cout<<"Esses numeros são menores que o valor de referencia: "<<vetor[i]<<endl;
			
		}
	}

for(i=0;i<10;i++){
		if(vetor[i]==valor){
			cout<<"o valor aparece no vetor!";
			
		}
	}
system("Pause");
}
