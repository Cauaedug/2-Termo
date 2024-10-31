//Faça um programa que leia 10 valores reais e os apresente na ordem inversa entrada.

#include<iostream>
using namespace std;


main(){
	
	float vetor[10];
	int i=0;
	
	for(i=0;i<10;i++){
		cout<<"Digite um numero: ";
		cin>>vetor[i];
	}
	
	
	for(i=9;i>=0;i--){
		cout<<vetor[i]<<endl;
	}
	system("pause");
	return 0;
}
