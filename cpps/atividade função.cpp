#include<iostream>
using namespace std;

//int quadrado,cubo;

//void calculaQuadradoCubo(int num, int &quadrado, int &cubo){
//	quadrado=num*num;
//	cubo=quadrado*num;
	
//}

//main(){
	
//int num;
//cout<<"Digite um número: ";cin>>num;
 //calculaQuadradoCubo(num, quadrado, cubo);

//cout<<quadrado<<endl;
//cout<<cubo;



//}
//==================================================================================================================


//void encontraMinMax(int a, int b, int c, int &min, int &max){
	
//	if(a>b & a>c){
//		max=a;
//	}
//	else if (b>a &b>c){
//		max=b;
//	}
//	else{
//		max=c;
//	}
	
//	if(a<b & a<c){
//		min=a;
//	}
//	else if (b<a &b<c){
//		min=b;
//	}
//	else{
//		min=c;
//	}
//}



//main(){
//	int a,b,c,min,max;
//cout<<"cu";	
//	cin>>a;
//cout<<"cu";
//	cin>>b;
///	cout<<"cu";
//	cin>>c;
	
//	encontraMinMax(a,b,c,min,max);
//	cout<<max<<endl;
///	cout<<min;
//}


//================================================================================================================

int c1=0,c2=0,c3=0,voto;

void registraVoto(int voto, int &candidato1, int &candidato2, int &candidato3){
	if(voto==1){
	c1++	;
	}
	else if(voto==2){
		c2++;
	}
	else{
		c3++;
}




}

main(){
	do{
	
	cout<<"vote!";cin>>voto;
}while(voto>0);
	registraVoto(voto,c1,c2,c3);
	if(c1>c2 &c1>c3){
	cout<<"1 é o ganhador";
}
	
	
}






