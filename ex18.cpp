/* 18. Um teatro com 250 lugares tem os seguintes critérios de preço:
● A entrada inteira custa R$ 75,00;

● Pagam meia entrada pessoas com até 18 anos e pessoas com 65 anos ou mais;
● Pessoas cujo nome completo contém o nome da personagem principal do
espetáculo em cartaz, pagam somente R$30,00.

a. Faça uma função que receba duas strings, nomeCompleto e nomePers, e
retorne verdadeiro, se nomePers aparece em nomeCompleto, ou retorne falso,
caso contrário.

b. Faça uma função que leia do teclado a idade e o nome completo de um
espectador e retorne o preço que este deverá pagar. Esta função deverá receber
como parâmetro o nome da personagem principal do espetáculo e deverá
chamar a função anterior para verificar se haverá desconto no ingresso.
c. Faça um programa que leia do teclado o nome da personagem principal do
espetáculo e o número de ingressos vendidos. A segunda função deverá ser
chamada para computar o valor pago por cada ingresso. O programa deverá
imprimir o total arrecadado pela bilheteria do teatro.
*/

#include <iostream>
using namespace std;

bool contemNome(char nomeCompleto[], char nomePers[]){
	if (nomePers[0] == '\0') return false;
	for (int i = 0; nomeCompleto[i] != '\0'; i++){
		int j = 0;
		while (nomeCompleto [i + j] != '\0' && nomePers[j] != '\0' && nomeCompleto[i + j] == nomePers[j])
			j++;

		if (nomePers[j] == '\0') return true;
	}
	return false;
}

float calculaPrecoIngresso(char nomePers[]){
	int idade;
	char nomeCompleto[100];

	cout << "Idade do espectador: ";
	cin >> idade;
	cin.ignore();

	cout << "Nome completo do espectador: ";
	cin.getline(nomeCompleto, 100);

	if (contemNome(nomeCompleto, nomePers)) return 30.0;

	if (idade <= 18 || idade >= 65) return 37.5;

	return 75.0;
}

int main(){
	char nomePers[100];
	int ingressosVendidos;
	float totalArrecadado = 0.0;

	cout << "Digite o nome da personagem principal: ";
	cin.getline(nomePers, 100);

	cout << "Digite o numero de ingressos vendidos (max 250): ";
	cin >> ingressosVendidos;

	if (ingressosVendidos > 250){
		cout << "Limite do teatro excedido! Ajustando para 250 lugares.\n";
		ingressosVendidos = 250;
	}

	for (int i = 0; i < ingressosVendidos; i++){
		cout << "\n Espectador " << (i + 1) << "\n";
		totalArrecadado += calculaPrecoIngresso(nomePers);
	}

	cout << "\nTotal arrecadado pela bilheteria: R$ " << totalArrecadado << endl;

	return 0;
}
