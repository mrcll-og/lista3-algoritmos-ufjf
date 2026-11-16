/* 14. Em uma eleição para prefeiro, existem quatro candidatos. A cidade tem 25 eleitores,
embora nem todos participem da eleição. Cada eleitor indica seu voto através de um unico
número inteiro da segunte forma:

 1, 2, 3, 4 = voto para os respectivos candidatos;
 0 = voto em branco;
 qualquer outro valor positivo = voto nulo;

 a. elabore uma função que leia todos os votos, armazenando-os. Assuma que a sequencia 
 de votos sera finalizada por um número negativo. A função deve retornar o numero de
 votos computados.

 b. Faça uma segunda função que receba o número de votos armazenados e a relação completa
 de votos e imprima o resultado completo da eleição (número de votos nulos, brancos e de
 cada candidato).

 c. faça um program para computar e apurar a eleição que chame as funções acima.
 */

#include <iostream>
using namespace std;

#define MAX_ELEITORES 2500

 

int lerVotos(int votos[]){
	int total = 0;
	int voto;

 	cout << "Digite os votos (1 a 4 = candidatos, 0 = branco, outro positivo = nulo,"
 		 << " negativo = encerrar):\n";

 	while (total < MAX_ELEITORES){
 		cin >> voto;
 		if (voto < 0) break;
 		votos[total] = voto;
 		total++;
	}

 	return total;	
}

void apurarEleicao(int totalVotos, int votos[]){
 	int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
 	int brancos = 0;
 	int nulos = 0;

 	for (int i = 0; i < totalVotos; i++){
 		if (votos[i] == 1) c1++;
 		else if (votos[i] == 2) c2++;
  		else if (votos[i] == 3) c3++;
  		else if (votos[i] == 4) c4++;
  		else if (votos[i] == 0) brancos++;
  		else nulos++;
 	}

 	cout << "Total votos computados: " << totalVotos << endl;
 	cout << "Candidato 1: " << c1 << "voto(s)" << endl;
 	cout << "Candidato 2: " << c2 << "voto(s)" << endl;
 	cout << "Candidato 3: " << c3 << "voto(s)" << endl;
 	cout << "Candidato 4: " << c4 << "voto(s)" << endl;
 	cout << "Votos em branco: "<< brancos << endl;
 	cout << "Votos nulos: " << nulos << endl;
}

 int main(){
 	int votos[MAX_ELEITORES];

 	int total = lerVotos(votos);
 	apurarEleicao(total, votos);

 	return 0;
}
