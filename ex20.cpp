/* 20. [DESAFIO] Você certamente já utilizou algum programa de compressão de arquivos
(zip, rar, entre outros). Estes programas normalmente precisam analisar os dados
armazenados nos arquivos para saber a melhor forma de comprimi-los. No caso de
arquivos de texto, por exemplo, uma possível análise é verificar que letras ou símbolos
aparecem com maior frequência no texto.

a. Faça uma função que receba uma string e um vetor de inteiros de tamanho 128.
Em cada posição i do vetor de inteiros do parâmetro, a função deverá
contabilizar o número de vezes que o caractere de código i aparecerá no texto.
Por exemplo, se a string for "AAAB", o vetor deve ter o valor 3 na posição 65, 1
na posição 66 e 0 em todas as outras posições. Caracteres fora do intervalo
entre 0 e 127 não precisam ser contabilizados.

b. Faça uma função que receba um vetor de inteiros de tamanho 128 e um vetor de
inteiros de tamanho 5. A função deve armazenar no segundo vetor o índice das
posições que contém os 5 maiores valores do primeiro vetor (em qualquer
ordem).

c. Escreva um programa que leia um texto com até 1000 caracteres e imprima
quais são os 5 símbolos mais frequentes.
*/

#include <iostream>
using namespace std;

void contaFrequencia(char texto[], int freq[]){
	for (int i = 0; i < 128; i++) freq[i] = 0;

	for (int i = 0; texto[i] != '\0'; i++){
		int codigo = (int)texto[i];
		if (codigo >= 0 && codigo < 128) freq[codigo]++;
	}
}

void cincoMaiores(int freq[], int top5[]){
	bool usado[128];
	for (int i = 0; i < 128; i++) usado[i] = false;

	for (int k = 0; k < 5; k++){
		int indiceMaior = -1;
		int maiorValor = -1;
	

		for (int i = 0; i < 128; i++){
			if(!usado[i] && freq[i] > maiorValor){
				maiorValor = freq[i];
				indiceMaior = i;
			}
		}
	
		top5[k] = indiceMaior;
		if (indiceMaior != -1) usado[indiceMaior] = true;
	}
}

int main(){
	char texto[1001];
	int freq[128];
	int top5[5];

	cout << "Digite um texto (ate 1000 caracteres):\n";
	cin.getline(texto, 1001);

	contaFrequencia(texto, freq);
	cincoMaiores(freq, top5);

	cout << "\nOs 5 simbolos mais frequentes sao:\n";
	for (int i = 0; i < 5; i++){
		int cod = top5[i];

		if (cod != -1 && freq[cod] > 0){
			if (cod == ' ') cout << (i + 1) << ". [Espaco] (ASCII " << cod << ") - " 
								 << freq[cod] << " vez(es)\n";
			else cout << (i + 1) << ". '" << (char)cod << "' (ASCII " << cod << ") - "
					  << freq[cod] << " vez(es)\n";
		}
	}
	return 0;
}
