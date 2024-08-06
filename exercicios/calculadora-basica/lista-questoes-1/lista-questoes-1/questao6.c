/*
Yuri Thomaz dos Santos Carvalho
Lista I - Questão 06
*/

/*
Escreva um programa que peça ao usuário para fornecer um número inteiro longo sem sinal, obtenha-o da entrada
padrão, usando scanf, e determine se o valor fornecido pode ser representado, sem perda de informação como um int.

Imprima na tela o valor fornecido, seguido das palavras “e maior que um int” ou “este valor pertence ao intervalo
dos int”. Use apenas o operador condicional (?).
*/

#include <stdio.h>

int questao6() {

	long unsigned int numero = 0;

	printf("\nDigite um número inteiro: ");
	scanf("%lud", &numero);

	( numero >= 0 && numero <= 2147483647 ) ?
		printf("\nEste valor pertence ao intervalo dos int.\n") :

	( numero > 2147483647 ) ?
		printf("\nEste valor é maior que o intervalo dos int.\n") :

    printf("\nAlgo deu errado! Tente novamente.\n");

	return 0;

}
