/*
Yuri Thomaz dos Santos Carvalho
Lista III - Questão 06
*/

/*
Para arrays 3 dimensionais, desenvolva:

-> Array de inteiros com dimensões (10, 20, 5);

-> Preencha com valores sequenciais;

-> Apresente os valores;
*/

#include <stdio.h>

int main() {

	int tamanhoX = 10;
	int tamanhoY = 20;
	int tamanhoZ = 5;

	int valor = 0;

	int array[tamanhoX][tamanhoY][tamanhoZ];

	printf("\n");

	for ( int i = 0; i < tamanhoX; i++ ) {

		for ( int j = 0; j < tamanhoY; j++ ) {

			for (int k = 0; k < tamanhoZ; k++ ) {

				array[i][j][k] = valor;
				valor++;

				printf("[%03d] ", array[i][j][k]);

			}

			printf("\n");

		}

		printf("\n");

	}

	return 0;

}
