#include<iostream>
using namespace std;

int n1,n2;


int maiormenor(int, int){
	int maior,menor;
	if(n1>n2){
		cout<<"O primeiro é maior";
	}else{
	cout<<"A segunda é maior";
	}
}


main(){
	setlocale(LC_ALL,"Portuguese");
	cout<<"Digite o perimeiro numero:";
	cin>>n1;
	cout<<"Digite o segundo:";
	cin>>n2;
	maiormenor(n1,n2);
	
	return 0;
}

