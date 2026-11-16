/* 6. Escreva uma função que receba um vetor de valores reais e seu tamanho e leia 
valores do teclado para preencher todo o vetor apenas com valores positivos. Oberser
que valores negativos devem ser ignorados e a leitura deve ser ecerrada assim que a 
ultima posição do vetor for preenchida*/

#include <iostream>
using namespace std;

void preencherPositivos(float vet[], int tamanho){
	int preenchidos = 0;
	float valor;

	while(preenchidos < tamanho){
		cin >> valor;

		if (valor > 0){
			vet[preenchidos] = valor;
			preenchidos++;
		}
		//se for negativo ou igual a zero, o while ignora e espera o proximo valor
	}
}

int main(){
	int n;
	cout << "Digite o tamanho do vetor: ";
	cin >> n;

	float vet[n];
	cout << "Digite os valores:\n";

	preencherPositivos(vet, n);

	cout << "\nVetor preenchido:\n";
	for(int i = 0; i < n; i++) cout << vet[i] << " ";
	cout << endl;

	return 0;
}
