//Escreva um programa que calcula o fatorial de um número inteiro não negativo utilizando uma função


#include<iostream>
using namespace std;

int n;

unsigned long long fatorial(int n ){

if(n==0){
	return 1;

}
else if(n<0){
	cout<<"erro";
	return 0;
}
else{

for(int i=1;i<=n;i++){
	n=n*i;
	return n;
}

}
}
main(){
	int n;
setlocale(LC_ALL,"Portuguese");

cout<<"Digite um número inteiro não negativo: ";
cin>>n;


cout<<"o fatorial de "<<n<<" é de "<<fatorial(n)<<endl;

system("Pause");
}
