/*
Yuri Thomaz dos Santos Carvalho
Exercício - Calculadora Básica
*/

#include <stdio.h>

int main() {

	int operacao = 0;
	int valorA = 0, valorB = 0;
	int resultado = 0;
	int resto = 0;

	printf("\nCALCULADORA BÁSICA\n");
	printf("\nEscolha qual operação deseja realizar:\n");
	printf("\nSoma: 1 \nSubtração: 2 \nMultiplicação: 3 \nDivisão: 4\n");
	printf("\nOperação: ");
	scanf("%d", &operacao);

	if ( operacao < 1 || operacao > 4 ) {

		printf("\nOperação inválida!\n");

		return 1;

	}

	printf("\nDigite o primeiro valor (inteiro): ");
	scanf("%d", &valorA);

	printf("\nDigite o segundo valor (inteiro): ");
	scanf("%d", &valorB);

	if ( operacao == 1 ) {

		resultado = valorA + valorB;
		printf("\n%d + %d = %d\n", valorA, valorB, resultado);

	}

	else if ( operacao == 2 ) {

		resultado = valorA - valorB;
		printf("\n%d - %d = %d\n", valorA, valorB, resultado);

	}

	else if ( operacao == 3 ) {

		resultado = valorA * valorB;
		printf("\n%d * %d = %d\n", valorA, valorB, resultado);

	}

	else if ( operacao == 4 ) {


		if ( valorB == 0 ) {

			printf("\nNão é possível dividir por 0!\n");

			return 1;

		}

		resultado = valorA / valorB;
		resto = valorA % valorB;


		printf("\n%d / %d = %d \nResto = %d\n", valorA, valorB, resultado, resto);

		if ( resto == 0 )
			printf("\nA divisão é exata.\n");

		else
			printf("\nA divisão não é exata.\n");

	}

	return 0;

}
