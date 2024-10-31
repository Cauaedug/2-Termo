#include<iostream>
using namespace std;

//---------------------------------------------1--------------------------------------------
//void mensagem (){
//	cout<<"hello word!";
//}




//main(){
	
//	mensagem();
	
	
//	return 0;
//}
//---------------------------------------------------------------------------------




//int num=5;

//void multiplica(){
//	cout<<num*10;
//}

//main(){
	
//multiplica();
	
	
//	return 0;
//}
//------------------------------------------------------------------------------------------------


int num;
void multiplica(){
	for(int i=0;i<=10;i++){
		cout<<num<<" x "<<i<<" = "<<num*i<<endl;
	}
}

main(){
	
	cout<<"Digite um número: ";
	cin>>num;
	multiplica();
return 0;
}
