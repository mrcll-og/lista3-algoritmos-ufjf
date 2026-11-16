/* 7. Faça uma função que receba uma string e um caractere e retorna o número de vezes
que o caractere aparece na string.*/

#include <iostream>
using namespace std;

int contarCaractere(char s[], char c){
	int contador = 0;
	int i = 0;

	while (s[i] != '\0'){
		if(s[i] == c) contador ++;
		i++;
	}
	return contador;
}

int main(){
	//Defini uma tamanho fixo seguro para a string
	char texto[100];
	char c;

	cout << "Digite uma string: ";
	cin.getline(texto, 100);

	cout << "Digite o caractere que deseja buscar: ";
	cin >> c;

	int resultado = contarCaractere(texto, c);
	cout << "O caractere ' " << c << " ' aparece " << resultado << " vez(es)" << endl;

	return 0;
}
