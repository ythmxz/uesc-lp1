/*
Yuri Thomaz dos Santos Carvalho
Exercício - Torre de Hanoi
*/

#include <stdio.h>

int main() {

    int discos = 0;
	int torres = 0;

	printf("\nOlá, seja bem-vindo(a) a solução da Torre de Hanoi. Para começar,"
			"primeiro escolha com quantos discos você quer ver a solução:\n");
	printf("\n1 - Solução com 3 discos \n2 - Solução com 4 discos\n");
	scanf("%d", &discos);

	if ( discos < 1 || discos > 2 ) {

		printf("\nEsta não é uma opção possível!\n");
		return 1;

	}

	printf("\nAgora escolha em qual torre será colocado o primeiro disco:\n");
	printf("\n1 - Torre B \n2 - Torre C\n");
	scanf("%d", &torres);

	if ( torres < 1 || torres > 2 ) {

		printf("\nEsta não é uma opção possível!\n");
		return 1;

	}

	printf("\nOBS: Os discos são numerados do menor para o maior.\n");

	if ( discos == 1 ) {

		if ( torres == 1 ) {

			printf("\nCerto, colocando o primeiro disco na Torre B temos a seguinte solução:\n");
			printf("\nDisco 1 para Torre B; \nDisco 2 para Torre C; \nDisco 1 para Torre C;"
					"\nDisco 3 para Torre B; \nDisco 1 para Torre A; \nDisco 2 para Torre B; \nDisco 1 para Torre B.\n");
			printf("\nAssim, completamos o desafio da Torre de Hanoi com 3 discos em 7 movimentos! Até a próxima.\n");

        }

		else if ( torres == 2 ) {

			printf("\nCerto, colocando o primeiro disco na Torre C temos a seguinte solução:\n");
			printf("\nDisco 1 para Torre C; \nDisco 2 para Torre B; \nDisco 1 para Torre B;"
					"\nDisco 3 para Torre C; \nDisco 1 para Torre A; \nDisco 2 para Torre C; \nDisco 1 para Torre C.\n");
			printf("\nAssim, completamos o desafio da Torre de Hanoi com 3 discos em 7 movimentos! Até a próxima.\n");

		}

	}

	else if ( discos == 2 ) {

		if ( torres == 1 ) {

			printf("\nCerto, colocando o primeiro disco na Torre B temos a seguinte solução:\n");
			printf("\nDisco 1 para Torre B; \nDisco 2 para Torre C; \nDisco 1 para Torre C;"
					"\nDisco 3 para Torre B; \nDisco 1 para Torre A; \nDisco 2 para Torre B; \nDisco 1 para Torre B;"
					"\nDisco 4 para Torre C; \nDisco 1 para Torre C; \nDisco 2 para Torre A; \nDisco 1 para Torre A;"
					"\nDisco 3 para Torre C; \nDisco 1 para Torre B; \nDisco 2 para Torre C; \nDisco 1 para Torre C.\n");
			printf("\nAssim, completamos o desafio da Torre de Hanoi com 4 discos em 15 movimentos! Até a próxima.\n");

		}

		else if ( torres == 2 ) {

			printf("\nCerto, colocando o primeiro disco na Torre B temos a seguinte solução:\n");
			printf("\nDisco 1 para Torre C; \nDisco 2 para Torre B; \nDisco 1 para Torre B;"
					"\nDisco 3 para Torre C; \nDisco 1 para Torre A; \nDisco 2 para Torre C; \nDisco 1 para Torre C;"
					"\nDisco 4 para Torre B; \nDisco 1 para Torre B; \nDisco 2 para Torre A; \nDisco 1 para Torre A;"
					"\nDisco 3 para Torre B; \nDisco 1 para Torre C; \nDisco 2 para Torre B; \nDisco 1 para Torre B.\n");
			printf("\nAssim, completamos o desafio da Torre de Hanoi com 4 discos em 15 movimentos! Até a próxima.\n");

		}

	}

	return 0;

}
