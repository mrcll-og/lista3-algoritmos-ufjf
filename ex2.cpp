// 2. Implemente uma função que receba um vetor de inteiros e seu tamanho e ordene - o

#include <iostream>
using namespace std;

void ordenaVetor (int vet[], int tamanho){
	for (int i = 0; i < tamanho - 1; i++){
		int minIndex = i;
		for (int j = i + 1; j < tamanho; j++){
			if (vet[j] < vet[minIndex]){
				minIndex = j;
			}
		}
		if (minIndex != i){
			int temp = vet[i];
			vet[i] = vet[minIndex];
			vet[minIndex] = temp;
		}
	}
}

int main(){
	int n;
	cout << "Digite o tamanho do vetor: ";
	cin >> n;

	int vet[n];
	cout << "Digite os " << n << " elementos:\n";
	for (int i = 0; i < n; i++) cin >> vet[i];

	ordenaVetor(vet, n);

	cout << "\nVetor ordenado:\n";
	for (int i = 0; i < n; i++) cout << vet[i] << " ";
	cout << endl;

	return 0;
}
