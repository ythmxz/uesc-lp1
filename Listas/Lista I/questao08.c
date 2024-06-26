/*
Lista I - Questão #08
Yuri Thomaz dos Santos Carvalho - 202410520
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

  printf("\nDigite um número inteiro positivo: ");
  scanf("%i", &numeroPositivo);

  while ( numeroPositivo < 0 ) {

    printf("\nNúmero inválido! Tente novamente.\n");

		printf("\nDigite um número inteiro positivo: ");
		scanf("%i", &numeroPositivo);

  }

  resultadoSoma = ((numeroPositivo * (1 + numeroPositivo) / 2));

  printf("\n\nO resultado da soma de todos os valores de 1 até %i é %g.\n", numeroPositivo, resultadoSoma);

  return 0;

}
