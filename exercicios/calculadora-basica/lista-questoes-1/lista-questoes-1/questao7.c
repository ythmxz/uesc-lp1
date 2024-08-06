/*
Yuri Thomaz dos Santos Carvalho
Lista I - Questão 07
*/

/*
Escreva um programa que leia um número inteiro e, utilizando o operador %, converta ele num valor entre 1 e 6.
Imprima o resultado na tela;
*/

#include <stdio.h>

int questao7() {

  int numero = 0;

  printf("\nDigite um número inteiro: ");
  scanf("%d", &numero);

  ( numero < 0 ) ? numero = (-numero): numero;
  ( numero > 6 || numero < 1 ) ? numero = (numero % 6) : numero;

  printf("\nO resultado é %d\n", numero);

  return 0;

}
