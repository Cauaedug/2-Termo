#include <iostream>
using namespace std;

//função
void converteTempo(int segundos, int &horas, int &minutos, int &segRestantes){


horas = segundos / 3600;            //transforma em horas
    minutos = (segundos % 3600)/ 60;   // transforma em minutos
    segRestantes = segundos %60;      //transforma em segundos restantes
    
}
//inicio codigo
int main(){
	int horas,segundos,minutos,segRestantes;//variaveis
	
	cout<<"Digite os segundos: ";
	cin>>segundos;//entrada de dados

converteTempo(segundos,horas,minutos,segRestantes);//chamada de função

cout << "Horas: " << horas << endl;//saida de dados
    cout << "Minutos: " << minutos << endl;
    cout << "Segundos restantes: " << segRestantes << endl;

    return 0;
}
