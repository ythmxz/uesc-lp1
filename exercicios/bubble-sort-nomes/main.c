/*
Yuri Thomaz dos Santos Carvalho
Exercício - Bubble Sort (Nomes)
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

int qNome;
char nomes[20][50];

void sorter();

int main() {

	setlocale(LC_ALL, "");

	int x;

	printf("\nQuantos nomes? ");
	scanf("%d", &qNome);

	printf("\nDigite %d nomes:\n", qNome);

	for( x = 0; x <= qNome; x++ )
		gets(nomes[x]);

	sorter();

	printf("\nNomes ordenados (A - Z):\n");

	for( x = 0; x <= qNome; x++ )
		puts(nomes[x]);

	printf("\nNomes ordenados (Z - A):\n");

	for( x = qNome; x >= 0; x-- )
		puts(nomes[x]);

	printf("\nPrimeiro Nome:\n");
	puts(nomes[1]);

	if ( qNome == 0 ) {

		printf("\nNome do meio:\n");
		puts(nomes[0]);

	}

	else if ( qNome % 2 == 0 ) {

		printf("\nNomes do meio:\n");
		puts(nomes[((qNome - 1) / 2) + 1]);
		puts(nomes[((qNome - 1) / 2) + 2]);

	}

	else {

		printf("\nNome do meio:\n");
		puts(nomes[(qNome - 1) / 2]);

	}

	printf("\nÚltimo Nome:\n");
	puts(nomes[qNome]);

	return 0;

	}

	void sorter() {

	int x, y, r;
	char aux[50];

	for( x = 0; x <= qNome; x++ ) {

		for( y = x + 1; y <= qNome; y++ ) {

			r = strcmp(nomes[x], nomes[y]);

			if( r > 0 ) {

				strcpy(aux, nomes[x]);
				strcpy(nomes[x], nomes[y]);
				strcpy(nomes[y], aux);

			}

		}

	}

}
