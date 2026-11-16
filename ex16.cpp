/* 
16. Nomes de autores em referências bibliográficas geralmente aparecem grafados em
formato específico. Por exemplo, um autor chamado "João José Silva" pode ter seu
nome citado como "João J. SILVA", "SILVA, João José" ou "SILVA, J.J.".
a. Faça três funções distintas que recebam duas strings, s1 e s2. Cada uma das
funções deve atribuir a s2 o nome contido em s1 em um dos formatos citados
acima.
b. Elabore um programa que leia um nome e imprima-o em cada um dos formatos
citados, chamando as funções implementadas na letra a.
*/

#include <iostream>
using namespace std;

char paraMaiuscula(char c){
	if (c >= 'a' && c <= 'z') return c - 'a' + 'A';
	return c;
}

void limitesNome(char s1[], int &inicio, int &fim, int &ultimoEspaco){
	int tam = 0;
	while (s1[tam] != '\0') tam++;

	fim = tam - 1;
	while (fim >= 0 && s1[fim] == ' ') fim--;

	inicio = 0;
	while (inicio <= fim && s1[inicio] == ' ') inicio++;

	ultimoEspaco = fim;
	while (ultimoEspaco >= inicio && s1[ultimoEspaco] != ' ') ultimoEspaco--;
}

void formato1(char s1[], char s2[]){
	int inicio, fim, ultimoEspaco;
	limitesNome(s1, inicio, fim, ultimoEspaco);

	if (fim < 0){
		s2[0] = '\0';
		return;
	}

	int j = 0;

	if (ultimoEspaco < inicio){
		for (int i = inicio; i <= fim; i++) s2[j++] = paraMaiuscula(s1[i]);
		s2[j] = '\0';
		return;
	}

	int i = inicio;
	while (i < ultimoEspaco && s1[i] != ' ') s2[j++] = s1[i++];

	while (i < ultimoEspaco){
		if (s1[i] == ' '){
			while (i < ultimoEspaco && s1[i] == ' ') i++;
			if (i < ultimoEspaco){
				s2[j++] = ' ';
				s2[j++] = paraMaiuscula(s1[i]);
				s2[j++] = '.';
				while (i < ultimoEspaco && s1[i] != ' ') i++;
			}
		}
	}

	s2[j++] = ' ';
	for (int k = ultimoEspaco + 1; k <= fim; k++) s2[j++] = paraMaiuscula(s1[k]);
	s2[j] = '\0';
}

void formato2(char s1[], char s2[]){
	int inicio, fim, ultimoEspaco;
	limitesNome(s1, inicio, fim, ultimoEspaco);

	if (fim < 0){
		s2[0] = '\0';
		return;
	}

	int j = 0;

	int startSobrenome;
	if (ultimoEspaco < inicio) startSobrenome = inicio;
	else startSobrenome = ultimoEspaco + 1;
	for (int i = startSobrenome; i <= fim; i++) s2[j++] = paraMaiuscula(s1[i]);

	if (ultimoEspaco > inicio){
		s2[j++] = ',';
		s2[j++] = ' ';
		int fimAnteriores = ultimoEspaco - 1;
		while (fimAnteriores >= inicio && s1[fimAnteriores] == ' ') fimAnteriores--;

		for(int i = inicio; i <= fimAnteriores; i++) s2[j++] = s1[i];
	}
	s2[j] = '\0';
}

void formato3(char s1[], char s2[]){
	int inicio, fim, ultimoEspaco;
	limitesNome(s1, inicio, fim, ultimoEspaco);

	if (fim < 0){
		s2[0] = '\0';
		return;
	}

	int j = 0;

	int startSobrenome;
	if (ultimoEspaco < inicio) startSobrenome = inicio;
	else startSobrenome = ultimoEspaco + 1;
	for (int i = startSobrenome; i <= fim; i++) s2[j++] = paraMaiuscula(s1[i]);

	if (ultimoEspaco > inicio){
		s2[j++] = ',';
		s2[j++] = ' ';

		int i = inicio;
		while (i < ultimoEspaco){
			while (i < ultimoEspaco && s1[i] == ' ') i++;
			if (i < ultimoEspaco){
				s2[j++] = paraMaiuscula(s1[i]);
				s2[j++] = '.';
				while (i < ultimoEspaco && s1[i] != ' ') i++;
			}
		}
	}
	s2[j] = '\0';
}

int main(){
	char s1[100], s2[100];

	cout << "Digite o nome completo do autor: ";
	cin.getline(s1, 100);

	formato1(s1, s2);
	cout << "Formato 1: " << s2 << endl;

	formato2(s1, s2);
	cout << "Formato 2: " << s2 << endl;

	formato3(s1, s2);
	cout << "Formato 3: " << s2 << endl;

	return 0;
}
