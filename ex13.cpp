/* 13. Elabore uma função que receba uma strin e um caractere e remova toda ocorrencia
do caractere da string.
*/

#include <iostream>
using namespace std;

void removeCaractere(char s[], char c){
	int j = 0;

	for (int i = 0; s[i] != '\0'; i++)
		if (s[i] != c){
			s[j] = s[i];
			j++;
		}

	s[j] = '\0';
}

int main(){
	char texto[100];
	char c;

	cout << "Digite uma string: ";
	cin.getline(texto, 100);

	cout << "Digite o caractere que deseja remover: ";
	cin >> c;

	removeCaractere(texto, c);

	cout << texto << endl;

	return 0;
}
