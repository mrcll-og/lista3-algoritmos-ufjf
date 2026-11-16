/* 19. Uma pizzaria tem em seu cardápio 27 sabores de pizzas e aceita pedidos para entrega
via mensagens de texto para usuários já cadastrados. Uma mensagem com um pedido
deve informar o número de pizzas desejado e, para cada pizza, um inteiro de 1 a 27
indicando o respectivo sabor.

Faça um programa que:

a) Leia e armazene o preço de cada pizza do cardápio;

b) leia o pedido de cada cliente e imprima quanto cada um deverá pagar (este passo
deve se repetir até que haja um pedido com nenhuma pizza);

c) imprima a quantia total obtida com as vendas do dia;

d) imprima quantas pizzas de cada sabor foram vendidas no dia.
*/

#include <iostream>
using namespace std;

int main(){
	const int TOTAL_SABORES = 27;
	float precos[TOTAL_SABORES];
	int vendasSabor[TOTAL_SABORES];

	for (int i = 0; i < TOTAL_SABORES; i++) vendasSabor[i] = 0;

	cout << "\t CADASTRO DO CARDAPIO\t\n";
	for (int i = 0; i < TOTAL_SABORES; i++){
		cout << "Preco da pizza sabor " << (i + 1) << ": R$ ";
		cin >> precos[i];
	}

	float totalDia = 0.0;
	int numPizzas;

	cout << "\n\t REGISTRO DE PEDIDOS\t\n";
	while(true){
		cout << "\nQuantidade de pizzas do pedido (0 ou negativo para encerrar): ";
		cin >> numPizzas;

		if (numPizzas <= 0) break;

		float totalCliente = 0.0;
		int sabor;

		for (int i = 0; i < numPizzas; i++){
			cout << "Informe o sabor da pizza " << (i + 1) << " (1 a 27): ";
			cin >> sabor;

			if (sabor >= 1 && sabor <= TOTAL_SABORES){
				totalCliente += precos[sabor - 1];
				vendasSabor[sabor - 1]++;
			} else {
				cout << "Sabor invalido! Digite um numero entre 1 e 27.\n";
				i--;
			}
		}

		cout << "Valor a pagar pelo cliente: R$ " << totalCliente << endl;
		totalDia += totalCliente;
	}

	cout << "\n\t FECHAMENTO DO DIA\t\n";
	cout << "Faturamento total do dia: R$ " << totalDia << endl;

	cout << "\n\t VENDAS POR SABOR\t\n";
	for (int i = 0; i < TOTAL_SABORES; i++)
		cout << "Sabor " << (i + 1) << ": " << vendasSabor[i] << " pizza(s)" << endl;

	return 0;
}
