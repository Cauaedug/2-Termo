//Fa�a um programa que leia 10 n�meros inteiros, armazene-os em um vetor, solicite um valor de
//refer�ncia inteiro e:
//a) imprima os n�meros do vetor que s�o maiores que o valor refer�ncia
//b) retorne quantos n�meros armazenados no vetor s�o menores que o valor de refer�ncia
//c) retorne quantas vezes o valor de refer�ncia aparece no vetor 






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
			cout<<"Esses numeros s�o maiores que o valor de referencia: "<<vetor[i]<<endl;
			
		}
	}
	for(i=0;i<10;i++){
		if(vetor[i]<valor){
			cout<<"Esses numeros s�o menores que o valor de referencia: "<<vetor[i]<<endl;
			
		}
	}

for(i=0;i<10;i++){
		if(vetor[i]==valor){
			cout<<"o valor aparece no vetor!";
			
		}
	}
system("Pause");
}
