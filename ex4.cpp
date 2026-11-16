/* 4. Implemente uma função que receba um vetor de inteiros, seu tamanho e um valor x
e retorne o índice da primeira posição do vetor que contém o valor x. Se o valor x não
estiver no vetor, a função deve retornar o valor -1.*/

#include <iostream>
using namespace std;

int buscaPrimeiro(int vet[], int tamanho, int x){
	for(int i = 0; i < tamanho; i++)
		if (vet[i] == x) return i;
	return -1;
}

int main(){
	int n; 
	cout << "Digite o tamanho do vetor: ";
	cin >> n;

	int vet[n];
	cout << "Digite os " << n << " elementos:\n";
	for (int i = 0; i < n; i++) cin >> vet[i];

	int x;
	cout << "Digite o valor x que deseja buscar: ";
	cin >> x;

	int indice = buscaPrimeiro(vet, n, x);

	if (indice != -1){
		cout << "O valor " << x << " foi encontrado no indice: " << indice << endl;
	} else {
		cout << "O valor " << x << " não foi encontrado no vetor (-1)." << endl;
	}

	return 0;
}

