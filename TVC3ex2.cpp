/* Questão 2 (35pts). A espionagem digital e o uso de criptografia em conflitos e guerras entre povos e nações não é
algo novo e já existe em conflitos desde a 2a Guerra Mundial. Considerando uma adaptação da famosa cifra de César
para codificação de mensagens, implemente uma função que receba como parâmetros um vetor de caracteres (string)
e um inteiro k. Cada caractere, exceto espaços em branco, deve ser substituı́do pelo caractere atual somado a (k+2)
e, em seguida, a função deve imprimir a mensagem codificada. Elabore também um programa principal (main)
que leia uma mensagem de até 100 caracteres e um valor k e chame a função acima para imprimir a mensagem
codificada.
Exemplo:

Entrada
A guerra entre Russia e Ucrania ja dura mais
de 100 dias.
3
A Segunda Guerra Mundial foi um conflito militar
global que durou de 1939 a 1945.
1

Saı́da
Mensagem codificada:
F lzjwwf jsywj Wzxxnf j Zhwfsnf of izwf rfnx
ij 655 infx3
Mensagem codificada:
D Vhjxqgd Jxhuud Pxqgldo irl xp frqiolwr plolwdu
joredo txh gxurx gh 4¡6¡ d 4¡781
*/

#include <iostream>
using namespace std;

void codificaMensagem(char str[], int k){
	for (int i = 0; str[i] != '\0'; i++)
		if (str[i] != ' ') str[i] = str[i] + (k + 2);

	cout << "Mensagem codificada:\n" << str << endl;
}

int main(){
	char mensagem[101];
	int k;

	cout << "Digite a mensagem (ate 100 caracteres): ";
	cin.getline(mensagem, 101);

	cout << "Digite o valor de k: ";
	cin >> k;

	codificaMensagem(mensagem, k);

	return 0;
}
