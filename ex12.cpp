/* 12. Escreva uma função que insira um espaço em branco antes de cada leta maiuscula
da string passada por parametro. Assuma que o espaço reservado para a string é, 
no minimo, o dobro do tamanho da string. Cuidado para não perder nenhum caractere ao 
longo do seu algoritmo.
*/

#include <iostream>
using namespace std;

void insereEspacoMaiuscula(char s[]){
	int tam = 0;
	while(s[tam] != '\0') tam++;

	for(int i = tam - 1; i >= 0; i--){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			for(int j = tam; j >= i; j--) s[j+1] = s[j];
			s[i] = ' ';
			tam++;
		}	
	}
}

int main(){
	char texto[200];

	cout << "Digite uma string: ";
	cin.getline(texto, 100);

	insereEspacoMaiuscula(texto);

	cout << texto << endl;

	return 0;
}
