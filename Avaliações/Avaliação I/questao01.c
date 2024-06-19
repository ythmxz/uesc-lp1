/*
Avaliação 1 - Questão #01
Yuri Thomaz dos Santos Carvalho - 202410520
*/

/*
Desenvolva um programa, atenção utilizar regra UESC (indicando referência e considerando casas
decimais e aproximação dos valores), que receba os valores e calcule:

a) De acordo com a matéria, especifique o número de créditos a serem realizados (mínimo 2 e máximo 10);

b)Deve ser calculado a média, indicando a situação do aluno e o resultado;

c) Deve calcular a nota para Prova Final;

d)Considerar o número de faltas para o resultado final, considere cada crédito 15 horas-aula;

e) Apresentar ficha de avaliação do aluno, com todas notas, situação e médias;
*/

/*
Média:

Acumulado = (Nota 1 + Peso1) + ... + (Nota N + Peso N);
Total de Pesos = Peso1 + Peso2 + ... + Peso N;
Acumulado / Total de Pesos

----------------------------------------------------------

Final:

Necessário = (5 - Média * 0.6) / 0.4
*/

#include <stdio.h>
#include <math.h>

float arredondamento(float valor) {

	float fator = 10.0;

	return ceil(valor * fator) / fator;

}

float calculoMedia(int totalNotas, float nota[], float peso[]) {

	float acumulado = 0.0, totalPesos = 0.0;

	for ( int numNotas = 0; numNotas < totalNotas; numNotas += 1 ) {

		acumulado += nota[numNotas] * peso[numNotas];

		totalPesos += peso[numNotas];

	}

	return acumulado / totalPesos;

}

float calculoFinal(float media) {

	float necessario = (5.0 - media * 0.6) / 0.4;

	return necessario;

}

int main() {

	int minCreditos = 2, maxCreditos = 10;
	int totalCreditos = 0, totalNotas = 0;
	int numFaltas = 0;
	float media = 0.0;
	float necessarioFinal = 0.0, notaFinal = 0.0;
	float nota[10], peso[10];

	printf("\nDigite a quantidade de créditos da matéria (%d a %d): ", minCreditos, maxCreditos);
	scanf("%d", &totalCreditos);

	while ( totalCreditos < minCreditos || totalCreditos > maxCreditos ) {

		printf("\n\x1b[31mFora do intervalo de créditos!\x1b[0m Tente novamente: ");
		scanf("%d", &totalCreditos);

	}

	int cargaHora = (totalCreditos * 15);
	int totalFaltas = (cargaHora * 0.25);
	int minFaltas = 0, maxFaltas = cargaHora;

	printf("\n------------------------------------------------------");

	printf("\n\nCarga Horária = \x1b[34m%d\x1b[0m horas \nLimite de Faltas = \x1b[34m%d\x1b[0m faltas"
				, cargaHora, totalFaltas);

	printf("\n\n------------------------------------------------------");

	printf("\n\nDigite a quantidade de notas: ");
	scanf("%d", &totalNotas);

	printf("\n------------------------------------------------------\n");

	for ( int numNotas = 0; numNotas < totalNotas; numNotas += 1 ) {

		printf("\nNota %d: ", (numNotas + 1));
		scanf("%f", &nota[numNotas]);

		printf("Peso %d: ", (numNotas + 1));
		scanf(" %f", &peso[numNotas]);

	}

	printf("\n------------------------------------------------------");

	printf("\n\nDigite a quantidade de faltas (%d a %d): ", minFaltas, maxFaltas);
	scanf(" %d", &numFaltas);

	while ( numFaltas < minFaltas || numFaltas > maxFaltas ) {

		printf("\n\x1b[31mFora do intervalo de faltas!\x1b[0m Tente novamente: ");
		scanf("%d", &numFaltas);

	}

	media = calculoMedia(totalNotas, nota, peso);
	media = arredondamento(media);

	printf("\n------------------------------------------------------");
	
	printf("\n\nFicha do Aluno:\n");

	for ( int numNotas = 0; numNotas < totalNotas; numNotas += 1 )
		printf("\nNota %d: \x1b[34m%-3.1f\x1b[0m | Peso: \x1b[34m%.1f\x1b[0m"
					, (numNotas + 1), nota[numNotas], peso[numNotas]);

	printf("\n\nMédia: \x1b[34m%.1f\x1b[0m", media);

	printf("\n\nFaltas: \x1b[34m%d\x1b[0m de \x1b[34m%d\x1b[0m", numFaltas, totalFaltas);

	printf("\n\n------------------------------------------------------");

	if ( numFaltas > totalFaltas )
		printf("\n\nSituação do Aluno: \x1b[31mReprovado!\x1b[0m (Falta).");

	else {

		if ( media >= 7.0 )
			printf("\n\nSituação do Aluno: \x1b[32mAprovado!\x1b[0m");

		else if ( media >= 1.7 ) {

			necessarioFinal = calculoFinal(media);

			printf("\n\nSituação do Aluno: \x1b[33mProva Final!\x1b[0m (Necessário = \x1b[34m%.1f\x1b[0m)", necessarioFinal);

			printf("\n\n------------------------------------------------------");

			printf("\n\nDigite a nota da Prova Final: ");
			scanf("%f", &notaFinal);

			printf("\n\n------------------------------------------------------\n");

			media = arredondamento(media * 0.6 + notaFinal * 0.4);

			printf("\nMédia: \x1b[34m%.1f\x1b[0m", media);

			printf("\n\n------------------------------------------------------");

			if ( media >= 5.0 )
				printf("\n\nSituação do Aluno: \x1b[32mAprovado!\x1b[0m (Prova Final)");

			else
				printf("\n\nSituação do Aluno: \x1b[31mReprovado!\x1b[0m (Prova Final)");

		}

		else
			printf("\n\nSituação do Aluno: \x1b[31mReprovado!\x1b[0m (Nota < \x1b[34m1.7\x1b[0m)");

	}

	printf("\n\n------------------------------------------------------");

	return 0;

}
