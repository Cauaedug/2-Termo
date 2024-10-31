#include<iostream>
using namespace std;



main(){

int n1,op;
char confir,s,n;

cout<<"Deseja fazer uma tabuada? ";
cin>>confir;



while(confir=='s'){

cout<<"qual tabuada porra? ";
cin>>n1;


for(int i=0;i<=10;i++){
	
	cout<<n1<<" x "<<i<<" = "<<(n1*i)<<endl;
}	

cout<<"Deseja fazer outra tabuada? ";
cin>>confir;	
	
	
	
}	if(confir=='n'){
		cout<<"encerrando..."<<endl;
	}
system("pause");
}






