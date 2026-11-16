/* Questão 3 (45pts). Rebeca é uma aluna do curso de Ciência da Computação que precisa fazer um trabalho e
pediu a sua ajuda. Para isso você vai ter que:

a) Criar uma função que recebe como parâmetros quatro vetores do mesmo tamanho T. Dois vetores chamados
V1 e V2 são recebidos preenchidos com valores inteiros e, os dois vetores chamados V3 e V4 são recebidos
vazios. A função deve preencher os vetores V3 e V4 com a combinação de valores de V1 e V2. Para isso, é
preciso que o usuário digite um ı́ndice chamado P. Assumir que o usuário conhece o problema e vai digitar
um valor para P que seja maior que 0 e menor que T-1. Logo após, a função deve preencher o vetor V3 com
os mesmos valores de V1 do ı́ndice 0 até o ı́ndice P. Do ı́ndice P+1 até o final, V3 deve ser preenchido com
os mesmos valores de V2. O V4 deve ser preenchido com os mesmos valores de V2 do ı́ndice 0 até o ı́ndice
P e do ı́ndice P+1 até o final com os mesmos valores de V1.

b) Faça um programa principal que declare quatro vetores do tipo inteiro de tamanho 5. Faça a leitura de
valores para dois desses vetores. Chame a função da letra a) passando os quatro vetores declarados como
parâmetros. No final, imprimir, conforme o exemplo, os vetores que foram preenchidos pela função.
Exemplo:

Entrada
11111
00000
1
43192
22133
2

Saı́da
11000
00111
43133
22192
*/

#include <iostream>
using namespace std;

void combinaVetores(int v1[], int v2[], int v3[], int v4[], int t){
	int p;
	cout << "Digite o indice P (entre 1 e " << t - 2 << "): ";
	cin >> p;

	for (int i = 0; i <= p; i++){
		v3[i] = v1[i];
		v4[i] = v2[i];
	}

	for (int i = p + 1; i < t; i++){
		v3[i] = v2[i];
		v4[i] = v1[i];
	}
}

int main(){
	const int t = 5;
	int v1[t], v2[t], v3[t], v4[t];

	cout << "Digite os 5 valores de V1: ";
	for (int i = 0; i < t; i++) cin >> v1[i];

	cout << "Digite os 5 valores de V2: ";
	for (int i = 0; i < t; i++) cin >> v2[i];

	combinaVetores(v1, v2, v3, v4, t);

	cout << "\nV3: ";
	for (int i = 0; i < t; i++) cout << v3[i] << " ";

	cout << "\nV4: ";
	for (int i = 0; i < t; i++) cout << v4[i] << " ";

	cout << endl;

	return 0;	
}
