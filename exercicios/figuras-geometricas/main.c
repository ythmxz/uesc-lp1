/*
Yuri Thomaz dos Santos Carvalho
Exercício - Figuras Geométricas
*/

#include <stdio.h>
#include <math.h>

int main() {

	#define TRIANGULO_ERRADO ( tipoFigura < 1 && tipoFigura > 3 )
	#define QUADRILATERO_ERRADO ( tipoFigura < 1 && tipoFigura > 4 )

	int tipoFigura = 0;
	float pontoA = 0.0, pontoB = 0.0;
	float ladoA = 0.0, ladoB = 0.0, ladoC = 0.0;
	float seguimentoReta = 0.0, areaFigura = 0.0, perimetroFigura = 0.0, diagonalFigura = 0.0, alturaFigura = 0.0;

	printf("\nFIGURAS GEOMÉTRICAS PLANAS:\n");

	printf("\nPara começar, escolha o tipo de figura que deseja calcular:\n");
	printf("\n1 - Retas; \n2 - Triângulos; \n3 - Quadriláteros.\n");
	scanf("%d", &tipoFigura);

	switch( tipoFigura ) {

		case 1:

			printf("\nDigite as coordenadas do primeiro ponto: ");
			scanf("%f", &pontoA);

			printf("\nDigite as coordenadas do segundo ponto: ");
			scanf("%f", &pontoB);

			seguimentoReta = (pontoB - pontoA);

			printf("\nO seguimento de reta definido mede %g m.\n", seguimentoReta);

			break;

		case 2:

			REPETE_TRIANGULO:

			printf("\nEscolha o tipo de triângulo para calcular:\n");
			printf("\n1 - Triângulo Retângulo; \n2 - Triângulo Isóceles; \n3 - Triângulo Equilátero.\n");
			scanf("%d", &tipoFigura);

			while ( TRIANGULO_ERRADO ) {

				printf("\nEste valor é inválido! Tente novamente.\n");
				goto REPETE_TRIANGULO;

			}

			if ( tipoFigura == 1 ) {

				printf("\nDigite o valor do cateto adjacente (base) (m): ");
				scanf("%f", &ladoA);

				printf("\nDigite o valor do cateto oposto (altura) (m): ");
				scanf("%f", &ladoB);

				printf("\nDigite o valor da hipotenusa (m): ");
				scanf("%f", &ladoC);

				perimetroFigura = ( ladoA + ladoB + ladoC );
				areaFigura = ( (ladoA * ladoB) / 2 );

				printf("\nPerímetro: %g m \nÁrea: %g m²\n", perimetroFigura, areaFigura);

			}

			if ( tipoFigura == 2 ) {

				printf("\nDigite o valor da base (m): ");
				scanf("%f", &ladoA);

				printf("\nDigite o valor dos lados (m): ");
				scanf("%f", &ladoB);

				perimetroFigura = ( ladoA + (ladoB * 2) );
				alturaFigura = ( sqrt(pow(ladoB, 2) - (pow(ladoA, 2) / 4)) );
				areaFigura = ( (ladoA * alturaFigura) / 2 );

				printf("\nPerímetro: %g m \nAltura: %g m \nÁrea: %g m²\n", perimetroFigura, alturaFigura, areaFigura);

			}

			if ( tipoFigura == 3 ) {

				printf("\nDigite o valor dos lados (m): ");
				scanf("%f", &ladoA);

				perimetroFigura = ( ladoA * 3 );
				alturaFigura = ( (ladoA * sqrt(3)) / 2 );
				areaFigura = ( (pow(ladoA, 2) * sqrt(3)) / 4 );

				printf("\nPerímetro: %g m \nAltura: %g m \nÁrea: %g m²\n", perimetroFigura, alturaFigura, areaFigura);

			}

			break;

		case 3:

			REPETE_QUADRADO:

			printf("\nEscolha o tipo de quadrilátero para calcular:\n");
			printf("\n1 - Quadrado; \n2 - Retângulo; \n3 - Trapézio; \n4 - Losango.\n");
			scanf("%d", &tipoFigura);

			while ( QUADRILATERO_ERRADO ) {

				printf("\n\nEste valor é inválido! Tente novamente.\n");
				goto REPETE_QUADRADO;

			}

			if ( tipoFigura == 1 ) {

				printf("\nDigite o valor dos lados (m): ");
				scanf("%f", &ladoA);

				perimetroFigura = ( ladoA * 4 );
				areaFigura = ( pow(ladoA, 2) );
				diagonalFigura = ( ladoA * (sqrt(2)) );

				printf("\nPerímetro: %g m \nÁrea: %g m² \nDiagonal: %g m\n"
						, perimetroFigura, areaFigura, diagonalFigura);

			}

			if ( tipoFigura == 2 ) {

				printf("\n\nDigite o valor da base/topo (m): ");
				scanf("%f" , &ladoA);

				printf("\n\nDigite o valor das laterais (m): ");
				scanf("%f", &ladoB);

				perimetroFigura = ( 2 * (ladoA + ladoB) );
				areaFigura = ( ladoA * ladoB );
				diagonalFigura = ( sqrt(pow(ladoA, 2) + pow(ladoB, 2)) );

				printf("\nPerímetro: %g m \nÁrea: %g m² \nDiagonal: %g m\n"
						, perimetroFigura, areaFigura, diagonalFigura);

			}

			if ( tipoFigura == 3 ) {

				printf("\n\nDigite o valor da base (m): ");
				scanf("%f", &ladoA);

				printf("\n\nDigite o valor do topo (m): ");
				scanf("%f", &ladoB);

				printf("\n\nDigite o valor das laterais (m): ");
				scanf("%f", &ladoC);

				perimetroFigura = ( ladoA + ladoB + (2 * ladoC) );
				areaFigura = ( ((ladoA + ladoB) * ladoC) / 2 );

				printf("\nPerímetro: %g m \nÁrea: %g m²\n", perimetroFigura, areaFigura);

			}

			if ( tipoFigura == 4 ) {

				printf("\nDigite o valor dos lados (m): ");
				scanf("%f", &ladoA);

				perimetroFigura = (ladoA * 4);

				printf("\nPerímetro: %g m\n", perimetroFigura);

			}

			break;

		default:

			printf("\nEste valor é inválido!\n");
			return 1;

	}

	return 0;

}
