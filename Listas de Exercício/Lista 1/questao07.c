/*
Lista de Exercícios I - Questão #07
Yuri Thomaz dos Santos Carvalho
*/

/*
Escreva um programa que leia um número inteiro e, utilizando o operador %, converta ele num valor entre 1 e 6.
Imprima o resultado na tela;
*/

#include <stdio.h>

int main() {

  int numero = 0, conversor = 0;

  printf("\nDigite um número inteiro: ");
  scanf("%d", &numero);

  ( numero < 0 ) ? numero = (-numero): numero;
  ( numero > 6 || numero < 1 ) ? conversor = (numero % 6) : (conversor = numero);

  printf("O resultado é %d\n", conversor);

  return 0;

}
