/*
Yuri Thomaz dos Santos Carvalho
Lista I - Questão 05
*/

/*
Escreva um programa que peça ao usuário para fornecer um número inteiro, obtenha-o da entrada padrão, usando
scanf, e determine se o valor fornecido pode ser representado, sem perda de informação como um short int.

Imprima na tela o valor fornecido, seguido das palavras “é maior que um short int” ou “este valor pertence ao
intervalo dos short int”. Use apenas o operador condicional (?).
*/

#include <stdio.h>

int main() {

	int numero = 0;

	printf("\nDigite um número inteiro: ");
	scanf("%d", &numero);

	( numero < -32768 ) ?
		printf("\nEste valor é menor que um short int.\n") :

	( numero >= -32768 && numero <= 32767 ) ?
		printf("\nEste valor está no intervalo dos short int.\n") :

	( numero > 32767 ) ?
		printf("\nEste valor é maior que um short int.\n") :

	printf("\nAlgo deu errado! Tente novamente.\n");

	return 0;

}
