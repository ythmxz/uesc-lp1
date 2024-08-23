/*
Yuri Thomaz dos Santos Carvalho
Lista II - Questão 03
*/

/*
Crie um programa qual entre com argumentos e desenvolva funções que:

-> Calcule o máximo divisor comum (MDC);
*/

#include <stdio.h>
#include <stdlib.h>

int mdc(int valorA, int valorB);

int main(int argc, char *argv[]) {

	int valorA = atoi(argv[1]);
	int valorB = atoi(argv[2]);
	int resultado = 0;

	if ( valorB == 0 )
		printf("\nMDC de %i e %i = %i\n", valorA, valorB, valorA);

	else {

		resultado = mdc(valorA, valorB);

		printf("\nMDC de %i e %i = %i\n", valorA, valorB, resultado);

	}

	return 0;

}

int mdc(int valorA, int valorB) {

	int resto = 0;

	while ( (valorA % valorB) > 0 ) {

		resto = valorA % valorB;
		valorA = valorB;
		valorB = resto;

	}

	return valorB;

}
