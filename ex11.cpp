/* 11. Faça uma função que recebe como parâmetros duas string, strA e strB, e um numero
inteiro k. A função deve copiar os k primeiros caracteres de strB para strA de forma
invertida. Se k for maior que o tamanho da string, toda a string strB deverá aparecer 
invertida em strA. Assuma que as duas strings foram alocadas com o mesmo tamanho.
Exemplo: se strB="ABCDE" e k=3, a string strA deverá receber "CBA". Se strB="ABCDE"
e k=10, a string strA deve receber "EDCBA"*/

#include <iostream>
using namespace std;

void copiaInvertido(char strA[], char strB[], int k){
	int tamB = 0;
	while(strB[tamB] != '\0') tamB++;

	int limite = k;
	if(k > tamB) limite = tamB;
	if(limite < 0) limite = 0;

	int j = 0;
	for(int i = limite - 1; i >= 0; i--){
		strA[j] = strB[i];
		j++;
	}

	strA[j] = '\0';
}

int main(){
	char strA[100], strB[100];
	int k;

	cout << "Digite a string B: ";
	cin.getline(strB, 100);

	cout << "Digite o valor de k: ";
	cin >> k;

	copiaInvertido(strA, strB, k);

	cout << strA << endl;

	return 0;
}
