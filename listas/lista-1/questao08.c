/*
Yuri Thomaz dos Santos Carvalho
Lista I - Questão 08
*/

/*
Escreva um programa que leia um número inteiro positivo e retorne o valor da soma de todos os números inteiros
de zero até o número fornecido. A soma dos números inteiros de 1 até n se calcula como? Imprima um resultado na tela.

Como fazer para lidar com o fato de que o usuário pode fornecer um número negativo? (use apenas o que vimos em sala de aula até agora);
*/

#include <stdio.h>

int main() {

	int numeroPositivo = 0;
	float resultadoSoma = 0.0;

TENTE_NOVAMENTE:

	printf("\nDigite um número inteiro positivo: ");
	scanf("%d", &numeroPositivo);

	while ( numeroPositivo < 0 ) {

		printf("\nValor incorreto! Tente novamente.");

		goto TENTE_NOVAMENTE;

	}

	resultadoSoma = ((numeroPositivo * (1 + numeroPositivo) / 2));

	printf("\nO resultado da soma de todos os valores de 1 até %d é %g.\n"
			, numeroPositivo, resultadoSoma);

	return 0;

}
