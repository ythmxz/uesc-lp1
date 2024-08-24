/*
Yuri Thomaz dos Santos Carvalho
Lista I - Questão 09
*/

/*
Escreva um programa que:

-> Declare três variáveis de tipo float, vamos chamar de x, y e z mas você pode escolher outro identificador
se achar mais apropriado;

-> Peça ao usuário para digitar dois números de ponto flutuante, obtenha-os da entrada padrão, usando scanf, e
atribua os valores digitados às variáveis x e y respectivamente;

-> Considerando que x e y são coordenadas num plano cartesiano, identifique em que lado da curva se encontra
(esquerda, direita ou na curva). Imprima o resultado na tela;

-> Atribua à variável z o valor da distância euclidiana do ponto (x, y) ao centro de coordenadas (distância
euclidiana se calcula como? Pode utilizar a função sqrt() fornecida no arquivo de cabeçalho math.h);

-> Atribua à variável z o produto entre as variáveis x e y, imprima o resultado na tela em notação científica.
*/

#include <stdio.h>
#include <math.h>

int main() {

	float pontoX = 0.0, pontoY = 0.0, pontoZ = 0.0;

	printf("\nDigite o ponto X: ");
	scanf("%f", &pontoX);

	printf("\nDigite o ponto Y: ");
	scanf("%f", &pontoY);

	( pontoX > 0 ) ?
		printf("\nSeu ponto X está localizado à direita no plano cartesiano.\n") :

	( pontoX < 0 ) ?
		printf("\nSeu ponto X está localizado à esquerda no plano cartesiano.\n") :

	printf("\nSeu ponto X é 0, logo está em cima do eixo Y.\n");

	( pontoY > 0 ) ?
		printf("\nSeu ponto Y está localizado acima no plano cartesiano.\n") :

	( pontoY < 0 ) ?
		printf("\nSeu ponto Y está localizado abaixo no plano cartesiano.\n") :

	printf("\nSeu ponto Y é 0, logo está em cima do eixo X.\n");

	pontoZ = sqrtf(pow((pontoX - 0), 2) + pow((pontoY - 0), 2));

	printf("\nA distância euclidiana do ponto (%g, %g) à origem equivale a %g.\n", pontoX, pontoY, pontoZ);

	pontoZ = (pontoX * pontoY);

	printf("\nO produto entre os pontos %g e %g equivale a %e.\n", pontoX, pontoY, pontoZ);

	return 0;

}
