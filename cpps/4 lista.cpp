#include <iostream>
using namespace std;

 int s,sub,mu,div,n1,n2;
 
 
 void tabela (){
 	setlocale(LC_ALL,"Portuguese");
 	cout<<"****************************************************************************************"<<endl;
	 
 	cout<<"*     Calculadora Simples. Op��es possiveis: "<<endl;
	 cout<<"*     1. adi��o"<<endl;
	 cout<<"*     2. subtra��o"<<endl;
	 cout<<"*     3. multiplica��o"<<endl;
	 cout<<"*     4. divis�o"<<endl;
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
 
 	cout<<"Digite o numero da opera��o desejada: ";
 	cin>>operacao;
	 if(operacao==5){
		cout<<"Encerrando..."<<endl<<"Precione qualquer bot�o para sair";
		return 0;
	}
	 
	 
	else if(operacao>=6){
	cout<<"Digitou errado, reinicie o programa!";
	return 0 ;
}
	
	
	 	cout<<"Digite o primeiro n�mero: ";
 		cin>>n1;
 		cout<<"Digite o segundo n�mero: ";
		cin>>n2; 

	
 	 if(operacao==1){
 	
 	
	s=somar(n1,n2);
 		cout<<"A soma de "<<n1<<" e "<<n2<< " � de: "<<s;
	 }
 	 else if(operacao==2){
 		
 		sub=subtrair(n1,n2);
 		cout<<"A subtra��o de "<<n1<<" e "<<n2<<" � de: " <<sub;		
	 }
	 else if(operacao==3){
	 	mu=multiplicar(n1,n2);
	 	cout<<"A multiplica��o de "<<n1<<" e "<<n2<<" � de: "<<mu;
	 }
	 else if(operacao==4){
	 	
	 	div=divisao(n1,n2);
	 		cout<<"A divis�o de "<<n1<<" e "<<n2<<" � de: "<<div;
		 }
	 
	
	
	
	
	
	
	 cout<<endl;
 	system("Pause");
 	}	
