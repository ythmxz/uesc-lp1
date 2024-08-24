/*
Yuri Thomaz dos Santos Carvalho
Lista II - Questão 04
*/

/*
Crie um programa qual entre com argumentos e desenvolva funções que:

a) Calcule o índice de massa corporal (IMC);

b) Deve apresentar resultado determinado pela faixa etária
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float imc(float peso, float altura);

int main(int argc, char *argv[]) {

	float peso = atof(argv[1]);
	float altura = atof(argv[2]);
	float resultado = 0;

	resultado = imc(peso, altura);

	printf("\nSeu peso: %.3f Kg\n", peso);
	printf("Sua altura: %.2f m\n", altura);

	if ( resultado < 18.5 )
		printf("\nSeu IMC é %.1f \nClassificação: Magreza\n", resultado);

	else if ( resultado >= 18.5 && resultado <= 24.9 )
		printf("\nSeu IMC é %.1f \nClassificação: Normal\n", resultado);

	else if ( resultado >= 25.0 && resultado <= 29.9 )
		printf("\nSeu IMC é %.1f \nClassificação: Sobrepeso\n", resultado);

	else if ( resultado >= 30.0 && resultado < 40.0 )
		printf("\nSeu IMC é %.1f \nClassificação: Obesidade\n", resultado);

	else if ( resultado > 40.0 )
		printf("\nSeu IMC é %.1f \nClassificação: Obesidade Grave\n", resultado);

	return 0;

}

float imc(float peso, float altura) {

	float valorIMC = 0;

	valorIMC = (peso / pow(altura, 2.0));

	return valorIMC;

}
