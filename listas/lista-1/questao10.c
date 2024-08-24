/*
Yuri Thomaz dos Santos Carvalho
Lista I - Questão 10
*/

/*
Escreva um programa que leia da entrada padrão o lado de um quadrado e imprima:

-> O tamanho da diagonal do mesmo;

-> O valor do perímetro;

-> Sua área.
*/

#include <stdio.h>
#include <math.h>

int main() {

	float lado = 0.0, diagonal = 0.0, perimetro = 0.0, area = 0.0;

	printf("\nDigite o tamanho de um dos lados de um quadrado (m): ");
		scanf("%f", &lado);

	diagonal = (lado * sqrtf(2));

	printf("\nA diagonal deste quadrado equivale a %g m.\n", diagonal);

	perimetro = (lado * 4);

	printf("\nO perímetro deste quadrado equivale a %g m.\n", perimetro);

	area = (pow(lado, 2));

	printf("\nA área deste quadrado equivale a %g m².\n", area);

	return 0;

}
