#include <iostream>
using namespace std;
//função registrar votos
void registraVoto(int voto, int &candidato1, int &candidato2, int &candidato3) {
    if (voto == 1) {
        candidato1++;
    } else if (voto == 2) {
        candidato2++;
    } else if (voto == 3) {
        candidato3++;
    } else {
        cout << "Voto invalido!" << endl;
    }
}
//inicio codigo
int main() {
	
	setlocale(LC_ALL,"Portuguese");
    int candidato1 = 0, candidato2 = 0, candidato3 = 0;
    int voto, totalVotos = 0;

    // Loop para registro de codigos
    do {
        cout << "Digite o número do candidato (1, 2, 3) ou 0 para finalizar: ";
        cin >> voto;

        if (voto != 0) {
            registraVoto(voto, candidato1, candidato2, candidato3);
            totalVotos++;
        }
        
    } while (voto != 0);

    // saida de dados
    if (totalVotos > 0) {
       
        cout << "Candidato 1: " << candidato1 << " votos"<<endl;
        cout << "Candidato 2: " << candidato2 << " votos"<<endl;
        cout << "Candidato 3: " << candidato3 << " votos"<<endl;

        if (candidato1 > candidato2 && candidato1 > candidato3) {
            cout << "O vencedor é o Candidato 1!" << endl;
        } else if (candidato2 > candidato1 && candidato2 > candidato3) {
            cout << "O vencedor é o Candidato 2!" << endl;
        } else if (candidato3 > candidato1 && candidato3 > candidato2) {
            cout << "O vencedor é o Candidato 3!" << endl;
        } else {
            cout << "Empate entre os candidatos!" << endl;
        }
    } else {
        cout << "Nenhum voto" << endl;
    }

    return 0;
}

