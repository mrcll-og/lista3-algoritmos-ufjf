/* 8. Elabore uma função que receba duas strings, srtA e srtB, e o tamanho alocado para
ambas, t. A função deve completar a string strA com os caracteres da string strB sem 
que o tamanho maximo da string seja ultrapassado. Exemplo: se strA="ABC", strB="XYWZ"
e t=6, ao final da função, deve ser ter strA="ABCXY".*/

#include <iostream>
using namespace std;

void completaString(char strA[], char strB[], int t){
	int i = 0;

	while (strA[i] != '\0') i++;

	int j = 0;
	while (strB[j] != '\0' && i < t -1){
		strA[i] = strB[j];
		i++;
		j++;
	}

	strA[i] = '\0';
}


int main(){
	int t = 6;
	char strA[6];
	char strB[6];

	cout << "Digita a primeira string ( " << t - 1 << " caracteres): ";
	cin.getline(strA, t);

	cout << "Digita a segunda string (" << t - 1 << " caracteres): ";
	cin.getline(strB, t);

	completaString(strA, strB, t);

	cout << "Resultado em strA: " << strA << endl;

	return 0;
}
