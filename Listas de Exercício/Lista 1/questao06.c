/*
Lista de Exercícios I - Questão #06
Yuri Thomaz dos Santos Carvalho - 202410520
*/

/*
Escreva um programa que peça ao usuário para fornecer um número inteiro longo sem sinal, obtenha-o da entrada
padrão, usando scanf, e determine se o valor fornecido pode ser representado, sem perda de informação como um int.

Imprima na tela o valor fornecido, seguido das palavras “e maior que um int” ou “este valor pertence ao intervalo
dos int”. Use apenas o operador condicional (?).
*/

#include <stdio.h>

int main() {

  unsigned long int numero = 0;

  printf("\nDigite um número inteiro: ");
  scanf("%lu", &numero);

  ( numero < 1 ) ? printf("\n\nEste valor é menor que o intervalo dos int.\n") :
  ( numero >= 1 && numero <= 4294967294 ) ? printf("\n\nEste valor pertence ao intervalo dos int.\n") :
  ( numero > 4294967294 ) ? printf("\n\nEste valor é maior que o intervalo dos int.\n") : 0;

  return 0;

}
