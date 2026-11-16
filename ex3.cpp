/* 3. Elabore uma função que recebe por parâmetro um vetor de inteiros e seu tamanho
e retorna a soma de seus elementos.*/

#include <iostream>
using namespace std;

int somaVetor(int vet[], int tamanho){
	int soma = 0;
	for (int i = 0; i < tamanho; i++) soma += vet[i];
	return soma;
}

int main(){
	int n;
	cout << "Digite o tamanho do vetor: ";
	cin >> n;

	int vet[n];
	cout << "Digite os " << n << "elementos:\n";
	for (int i = 0; i < n; i++) cin >> vet[i];

	int resultado = somaVetor(vet, n);
	cout << "A soma de todos os elementos e: " << resultado << endl;

	return 0;
}
