/* 9. Escreva uma função que receba uma string e um caractere e retorne uma string e um
caractere e retorne qual a ultima posição da string em que o caractere aparece. Se o 
caractere não estiver na string, a função deve retornar -1.*/

#include <iostream>
using namespace std;

int ultimaOcorrencia(char s[], char c){
	int ultimaPosicao = -1;
	int i = 0;

	while (s[i] != '\0'){
		if (s[i] == c) ultimaPosicao = i;
		i++;
	}
	return ultimaPosicao;
}

int main(){
	char texto[100];
	char c;

	cout << "Digite uma string: ";
	cin.getline(texto, 100);

	cout << "Digite o caractere que deseja buscar: ";
	cin >> c;

	int pos = ultimaOcorrencia(texto, c);

	if (pos != -1)
		cout << "A ultima ocorrencia do caractere ' " 
			 << c << "' esta no indice: " << pos
			 << endl;
	else 
		cout << "O caractere ' " << c << "' nao foi encontrado na string (-1)." << endl;

	return 0;
}
