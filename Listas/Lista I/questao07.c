/*
Lista I - Questão #07
Yuri Thomaz dos Santos Carvalho - 202410520
*/

/*
Escreva um programa que leia um número inteiro e, utilizando o operador %, converta ele num valor entre 1 e 6.
Imprima o resultado na tela;
*/

#include <stdio.h>

int main() {

  int numero = 0;

  printf("\nDigite um número inteiro: ");
  scanf("%i", &numero);

  ( numero < 0 ) ? numero = (-numero): numero;
  ( numero > 6 || numero < 1 ) ? numero = (numero % 6) : numero;

  printf("O resultado é %i\n", numero);

  return 0;

}
