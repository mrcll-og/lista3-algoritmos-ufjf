/* 5. Implemente uma função que, dados um vetor de valores reais e seu tamanho, retorne
a média dos valores armazenados.*/

#include <iostream>
using namespace std;

float calculaMedia(float vet[], int tamanho){
	if (tamanho <= 0) return 0.0;

	float soma = 0.0;
	for (int i = 0; i < tamanho; i++) soma += vet[i];

	return soma/tamanho;
}

int main(){
	int n;
	cout << "Digite o tamanho do vetor: ";
	cin >> n;

	float vet[n];
	cout << "Digite os " << n << " valores reais:\n";
	for (int i = 0; i < n; i++) cin >> vet[i];

	float media = calculaMedia(vet, n);
	cout << "A media dos valores armazenados e: " << media << endl;

	return 0;
}
