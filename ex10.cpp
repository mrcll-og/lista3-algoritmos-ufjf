/* 10. Escreva uma função que retorne o número de espaços em branco contidos em uma
string passada como parâmetro.*/

#include <iostream>
using namespace std;

int contaEspacos(char s[]){
	int contador = 0;
	int i = 0;

	while(s[i] != '\0'){
		if(s[i] == ' ') contador++;
		i++;
	}
	

	return contador;
}

int main(){
	char texto[100];

	cout << "Digite uma frase: ";
	cin.getline(texto, 100);

	int espacos = contaEspacos(texto);
	cout << "A frase contem " << espacos << " espacos em branco. " << endl;

	return 0;
}
