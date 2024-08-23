/*
Yuri Thomaz dos Santos Carvalho
Lista II - Questão 01
*/

/*
Crie um programa qual entre com um argumento e desenvolva funções que:

a) Verifique se é um valor numérico ou alfanumérico, e ou nulo;

b) Mostrar na tela os valores sequencialmente, até o valor informado;

c) Mostrar na tela os valores sequencialmente, até o valor informado na ordem inversa;

d) Mostrar na tela os valores até o valor informado, alternando entre primeiro e último;

e) Calcular todos os números primos, até o valor informado. Número primo é aquele que é divisível
somente por 1 e por ele mesmo;

f) Calcular todos os números perfeitos, até o valor informado. Número perfeito é aquele que é a
soma de seus fatores. Por exemplo, 6 é divisível por 1, 2 e 3 ao passo que 6 = 1 + 2 + 3;
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void letraA(char tecla);
void letraB(int sequencia);
void letraC(int sequencia);
void letraD(int sequencia);
void letraE(int primos);
void letraF(int perfeitos);

int main(int argc, char *argv[]) {

	int escolhaLetra = atoi(argv[1]);

	char tecla = *argv[2];
	int sequencia = atoi(argv[2]);
	int primos = atoi(argv[2]);
	int perfeitos = atoi(argv[2]);

	switch( escolhaLetra ) {

		case 1:

			letraA(tecla);
		    break;

		case 2:

			letraB(sequencia);
		    break;

		case 3:

			letraC(sequencia);
		    break;

		case 4:

			letraD(sequencia);
		    break;

		case 5:

			letraE(primos);
		    break;

		case 6:

			letraF(perfeitos);
		    break;

	}

	return 0;

}

void letraA(char tecla) {

	if ( isalnum(tecla) ) {

		printf("\nVocê digitou um alfanumérico!\n");

		if ( isdigit(tecla) )
			printf("\nVocê digitou um número!\n");

		else if ( isalpha(tecla) )
			printf("\nVocê digitou um caractere!\n");

	}

	else if ( isblank(tecla) )
		printf("\nVocê digitou um espaço em branco!\n");

	else
		printf("\nVocê não digitou um número ou um caractere!\n");

}

void letraB(int sequencia) {

	for ( int i = 0; i <= sequencia; i++ )
		printf("%d\n", i);

}

void letraC(int sequencia) {

	for ( int i = sequencia; i >= 0; i-- )
		printf("%d\n", i);

}

void letraD(int sequencia) {

	int i = 0, j = 0, k = sequencia;

	while ( i <= sequencia ) {

		printf("%d\n", j);

		j++;

		printf("%d\n", k);

		k--;

		i++;

	}

}

void letraE(int primos) {

	printf("\nOs números primos de 0 até %d são:\n\n", primos);

	for ( int i = 1; i <= primos; i++ ) {

		int j = 0;

		for ( j = 2; j < i; j++ )
			if ( i % j == 0 )
				break;

			if ( i == j )
				printf("%d\n", i);

	}

}

void letraF(int perfeitos) {

	printf("\nOs números perfeitos de 1 até %d são:\n\n", perfeitos);

	for ( int i = 1; i < perfeitos; i++ ) {

		int soma = 0;

		for ( int j = 1; j < i; j++ )
			if ( i % j == 0 )
				soma += j;

		if ( i == soma )
			printf("%d\n", soma);

	}

}
