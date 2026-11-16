/* 15. Na eleição para o representante dos alunas da sala, apareceram quatro candidatos:
Ana, Ari, Eva e Ivan. Faça uma função que receba o número de alunos presentes no dia da
eleição e leia o nome do candidato em que cada aluno votou. Ao final, exiba o número
e leia o nome do candidato obtece. Observe que eventuais erros de grafia no nome digitado
por um eleitor indicam voto nulo.
*/

#include <iostream>
using namespace std;

bool saoIguais(char s1[], const char s2[]){
	int i = 0;
	while (s1[i] != '\0' && s2[i] != '\0'){
		if (s1[i] != s2[i]) return false;
		i++;
	}
	return (s1[i] == '\0' && s2[i] == '\0');
}

void eleicaoRepresentante(int numAlunos){
	int ana = 0, ari = 0, eva = 0, ivan = 0, nulos = 0;
	char voto[50];

	cin.ignore();

	for (int i = 0; i < numAlunos; i++){
		cout << "Voto do Aluno " << (i + 1) << " (Ana, Ari, Eva ou Ivan): ";
		cin.getline(voto, 50);

		if (saoIguais(voto, "Ana")) ana++;
		else if (saoIguais(voto, "Ari")) ari++;
		else if (saoIguais(voto, "Eva")) eva++;
		else if (saoIguais(voto, "Ivan")) ivan++;
		else nulos++;
	}
	cout << "Ana: " << ana << " voto(s)" << endl;
	cout << "Ari: " << ari << " voto(s)" << endl;
	cout << "Eva: " << eva << " voto(s)" << endl;
	cout << "Ivan: " << ivan << " voto(s)" << endl;
	cout << "Nulos: " << nulos << " voto(s)" << endl;
}

int main(){
	int presentes;
	cout << "Digite o numero de alunos presentes: ";
	cin >> presentes;

	eleicaoRepresentante(presente);

	return 0;
}
