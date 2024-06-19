/*
Exercício 01 - Calculadora
Yuri Thomaz dos Santos Carvalho - 202410520
*/#include <stdio.h>

int main() {

  int operacao = 0;
  float valorA = 0.0;
  float valorB = 0.0;
  float resultado = 0.0;

  printf("\nEscolha uma operação: \n\n1 - Adição \n2 - Subtração \n3 - Multiplicação \n4 - Divisão\n\n");
  scanf("%d", (&operacao));

  if ( operacao > 4 || operacao < 1 ) {

    printf("\nOperação inválida! Tente novamente.\n");

    return 1;

  }

  printf("\nAdicione um valor: ");
  scanf("%f", &valorA);

  printf("\nAdicione outro valor: ");
  scanf("%f", &valorB);


  if ( operacao == 1 ) {
    resultado = valorA + valorB;

    printf("\n%g + %g = %g\n",valorA, valorB, resultado);

  }

  else if ( operacao == 2 ) {
    resultado = valorA - valorB;

    printf("\n%g - %g = %g\n",valorA, valorB, resultado);

  }

  else if ( operacao == 3 ) {
    resultado = valorA * valorB;

    printf("\n%g * %g = %g\n",valorA, valorB, resultado);

  }

  else if ( operacao == 4 ) {

    if ( valorB == 0 ) {
      printf("\nNão é possível dividir por 0!\n");

      return 1;

    }

    else {
      resultado = valorA / valorB;

      printf("\n%g / %g = %g\n",valorA, valorB, resultado);

    }

  }

  return 0;

}
