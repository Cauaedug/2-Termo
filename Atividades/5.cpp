#include <iostream>
using namespace std;

//função
void calculaEmprestimo(double valor, double taxa, int tempo, double &totalAPagar, 
double &juros){
	
	
	 juros = valor * (taxa / 100) * tempo;  // Cálculo dos juros 
    totalAPagar = valor + juros;           // Total a pagar 
}
//inicio do main
int main(){
	
	 double valor, taxa, totalAPagar, juros;
    int tempo;//variaveis
    
    //entrada de dados
    cout<<"Digite o valor total do emprestimo: "<<endl;
    cin>>valor;
    cout<<"Digite a taxa anual de juros: "<<endl;
    cin>>taxa;
    cout<<"Digite quantos anos tem esse emprestimo: ";
    cin>>tempo;
    
    
    //chamada de funções
    calculaEmprestimo(valor, taxa, tempo, totalAPagar, juros);
    
    //saida de dados
    cout << "Juros: " << juros << endl;
    cout << "Total a pagar: " << totalAPagar << endl;

    return 0;
}

