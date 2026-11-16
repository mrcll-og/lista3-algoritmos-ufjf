/* 1. Implemente uma função que receba um vetor de inteiros e seu tamanho e retorne o 
maior elemente do vetor */

#include <iostream>
using namespace std;

int encontraMaior(int vet[], int tamanho){
	if (tamanho <= 0) return 0;
	int maior = vet[0];
	for (int i = 1; i < tamanho; i++){
		if (vet[i] > maior){
			maior = vet[i];
		}
	} 
	return maior;
}

int main(){
	int n;
	cout << "Digite o tamanho do vetor: ";
	cin >> n;

	int vet[n];
	cout << "Digite os " << n << " elementos:\n";
	for (int i = 0; i < n; i++) cin >> vet[i];

	int maior = encontraMaior(vet, n);
	cout << "O maior elemento e: " << maior << endl;

	return 0;
}
