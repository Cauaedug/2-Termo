//Escreva um programa que calcula o fatorial de um n�mero inteiro n�o negativo utilizando uma fun��o


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

cout<<"Digite um n�mero inteiro n�o negativo: ";
cin>>n;


cout<<"o fatorial de "<<n<<" � de "<<fatorial(n)<<endl;

system("Pause");
}
