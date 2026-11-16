/* 17. Em uma república de estudantes, após cada compra de supermercado, os estudantes
anotam na nota fiscal seu nome (Artur, Bruno, Carlos ou Diego) para identificar itens
pessoais ou a palavra "Todos" para identificar bens comuns cujo custo deve ser dividido.
Faça um programa que leia do teclado os seguintes dados de cada item da nota fiscal:
quantidade do produto, preço unitário e identificação de quem o adquiriu. O programa
deverá imprimir o valor total que cada estudante deverá pagar.
*/

#include <iostream>
using namespace std;

bool saoIguais(char s1[], const char s2[]){
	int i = 0;
	while (s1[i] != '\0' && s2[i] != '\0'){
		if (s1[i] != s2[i]) return false;
		i++;
	}
	return (s1[i] == '\0' && s2[i] == '\0');
}

int main(){
	int qtd;
	float preco;
	char nome[30];

	float totalArtur = 0, totalBruno = 0, totalCarlos = 0, totalDiego = 0;

	cout << "Digite os itens da nota (quantidade <= 0 para encerrar):\n";

	while (true){
		cout << "\nQuantidade: ";
		cin >> qtd;

		if (qtd <= 0) break;

		cout << "Preço unitario: ";
		cin >> preco;

		cout << "Comprador <Artur, Bruno, Carlos, Diego ou todos): ";
		cin >> nome;

		float valorItem = qtd * preco;

		if (saoIguais(nome, "Artur")) totalArtur += valorItem;
		else if (saoIguais(nome, "Bruno")) totalBruno += valorItem;
		else if (saoIguais(nome, "Carlos")) totalCarlos += valorItem;
		else if (saoIguais(nome, "Diego")) totalDiego += valorItem;
		else if (saoIguais(nome, "todos")){
			float parte = valorItem / 4.0;
			totalArtur += parte;
			totalBruno += parte;
			totalCarlos += parte;
			totalDiego += parte;
		} else cout << "Indentificacao invalida! Item ignorado.\n";
	}

	cout << "Artur: R$ " << totalArtur <<endl;
	cout << "Bruno: R$ " << totalBruno <<endl;
	cout << "Carlos: R$ " << totalCarlos <<endl;
	cout << "Diego: R$ " << totalDiego <<endl;

	return 0;
}
