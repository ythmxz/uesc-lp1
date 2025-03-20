/*
Yuri Thomaz dos Santos Carvalho
Lista III - Questão 02
*/

/*
Crie um array unidimensional e desenvolva:

-> Utiliza funções quando possível;

-> Array de inteiros para 10.000 elementos;

-> Randomicamente insira valores, entre 0 e 1000 nos elementos;

-> Descubra quais são os três maiores e menores valores;

-> Calcule a média, mediana (ordenação obrigatória) e desvio padrão dos valores;

-> Apresente as informações sobre os valores repetidos (qual valor, quantidade de vezes, etc);

-> Insira os valores em um novo array com o tamanho exato dos elementos sem repetições;

-> Calcule novamente a média, mediana (ordenação obrigatória) e desvio padrão dos valores, reutilizando função anteriormente desenvolvida;
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int rand();

float calcularMedia(unsigned int array[], int tamanhoArray);
float calcularMediana(unsigned int array[], int tamanhoArray);
float calcularDesvioPadrao(unsigned int array[], int tamanhoArray);

int main() {

	int temp = 0;
	int tamanhoArray = 10000;
	int minimo = 0, maximo = 1000;

	int numeroAleatorio = 0;
	unsigned int array[tamanhoArray];

	srand(time(NULL));

	for (int i = 0; i < tamanhoArray; i++) {

		numeroAleatorio = rand() % (maximo - minimo + 1) + minimo;
		array[i] = numeroAleatorio;

	}

	for ( int i = 0; i <= (tamanhoArray - 1); i++ ) {

		for ( int j = 0; j <= (tamanhoArray - i); j++ ) {

			if ( array[j] > array[j + 1] ) {

				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

			}

		}

	}

	printf("\nTrês maiores valores:\n");

	for ( int i = (tamanhoArray - 1); i >= (tamanhoArray - 3); i-- )
		printf("\nArray [%d] = %d", i, array[i]);

	printf("\n\nTrês menores valores:\n");

	for ( int j = 0; j < 3; j++ )
		printf("\nArray [%d] = %d", j, array[j]);

	printf("\n\nMédia: %g", calcularMedia(array, tamanhoArray));
	printf("\nMediana: %g", calcularMediana(array, tamanhoArray));
	printf("\nDesvio Padrão: %g\n\n", calcularDesvioPadrao(array, tamanhoArray));

	return 0;

}

float calcularMedia(unsigned int array[], int tamanhoArray) {

	float soma = 0;

	for ( int i = 0; i < tamanhoArray; i++ )
		soma += (float)array[i];

	return (soma / tamanhoArray);

}

float calcularMediana(unsigned int array[], int tamanhoArray) {

	return (((tamanhoArray / 2) + ((tamanhoArray / 2) + 1)) / 2);

}

float calcularDesvioPadrao(unsigned int array[], int tamanhoArray) {

	float media = calcularMedia(array, tamanhoArray);
	float soma = 0;
	float variancia = 0;

	for ( int i = 0; i <= (tamanhoArray); i++ ) {

		array[i] -= media;
		array[i] = powf((float)array[i], 2);

	}

	for ( int i = 0; i < tamanhoArray; i++ )
		soma += array[i];

	variancia = (soma / 10);

	return ( sqrtf(variancia) );

}
