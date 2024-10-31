#include <iostream>
using namespace std;

 int s,sub,mu,div,n1,n2;
 
 
 void tabela (){
 	setlocale(LC_ALL,"Portuguese");
 	cout<<"****************************************************************************************"<<endl;
	 
 	cout<<"*     Calculadora Simples. Opções possiveis: "<<endl;
	 cout<<"*     1. adição"<<endl;
	 cout<<"*     2. subtração"<<endl;
	 cout<<"*     3. multiplicação"<<endl;
	 cout<<"*     4. divisão"<<endl;
	 cout<<"*     5. Sair do programa"<<endl;
 	cout<<"****************************************************************************************"<<endl;
 	
 }
 
 somar(int,int){
 	int soma;
 	soma=n1+n2;
 }
 
 subtrair(int, int){
 	int subtra;
 	subtra=n1-n2;
 }
 
 multiplicar(int, int){
 	int multipli;
 	multipli=n1*n2;
 }
 
 divisao(int, int){
 	int divis;
 	divis=n1/n2;
 }
 
 
 main()
 {
 int operacao;
 	
	 tabela();
 
 	cout<<"Digite o numero da operação desejada: ";
 	cin>>operacao;
	 if(operacao==5){
		cout<<"Encerrando..."<<endl<<"Precione qualquer botão para sair";
		return 0;
	}
	 
	 
	else if(operacao>=6){
	cout<<"Digitou errado, reinicie o programa!";
	return 0 ;
}
	
	
	 	cout<<"Digite o primeiro número: ";
 		cin>>n1;
 		cout<<"Digite o segundo número: ";
		cin>>n2; 

	
 	 if(operacao==1){
 	
 	
	s=somar(n1,n2);
 		cout<<"A soma de "<<n1<<" e "<<n2<< " é de: "<<s;
	 }
 	 else if(operacao==2){
 		
 		sub=subtrair(n1,n2);
 		cout<<"A subtração de "<<n1<<" e "<<n2<<" é de: " <<sub;		
	 }
	 else if(operacao==3){
	 	mu=multiplicar(n1,n2);
	 	cout<<"A multiplicação de "<<n1<<" e "<<n2<<" é de: "<<mu;
	 }
	 else if(operacao==4){
	 	
	 	div=divisao(n1,n2);
	 		cout<<"A divisão de "<<n1<<" e "<<n2<<" é de: "<<div;
		 }
	 
	
	
	
	
	
	
	 cout<<endl;
 	system("Pause");
 	}	
