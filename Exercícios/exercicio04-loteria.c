/*
Exercício 04 - Mega-Sena
Yuri Thomaz dos Santos Carvalho - 202410520
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  #define FORA_LIMITE ( dezena1 < baseValores || dezena1 > limiteValores || dezena2 < baseValores || dezena2 > limiteValores || dezena3 < baseValores || dezena3 > limiteValores || dezena4 < baseValores || dezena4 > limiteValores || dezena5 < baseValores || dezena5 > limiteValores || dezena6 < baseValores || dezena6 > limiteValores )

  #define REPETIDO ( dezena1 == dezena2 || dezena1 == dezena3 || dezena1 == dezena4 || dezena1 == dezena5 || dezena1 == dezena6 || dezena2 == dezena3 || dezena2 == dezena4 || dezena2 == dezena5 || dezena2 == dezena6 || dezena3 == dezena4 || dezena3 == dezena5 || dezena3 == dezena6 || dezena4 == dezena5 || dezena4 == dezena6 || dezena5 == dezena6 )

  #define CONDICAO_SORTEIO ( parada1 == 0 || parada2 == 0 || parada3 == 0 || parada4 == 0 || parada5 == 0 || parada6 == 0 )

  #define CONDICAO_FIM ( parada1 == 1 && parada2 == 1 && parada3 == 1 && parada4 == 1 && parada5 == 1 && parada6 == 1 && tentativa <= 1000000 )
  
  int dezena1 = 0, dezena2 = 0, dezena3 = 0, dezena4 = 0, dezena5 = 0, dezena6 = 0;
  int sorteio1 = 0, sorteio2 = 0, sorteio3 = 0, sorteio4 = 0, sorteio5 = 0, sorteio6 = 0;
  int parada1 = 0, parada2 = 0, parada3 = 0, parada4 = 0, parada5 = 0, parada6 = 0;
  int baseValores = 1, limiteValores = 10;
  int tentativa = 0;

  while ( FORA_LIMITE || REPETIDO ) {
    
    printf("Seja bem-vindo(a) ao sorteio da Mega-Sena."
          "\n\nDigite 6 dezenas únicas entre %d e %d (coloque espaços entre elas): \n\n", baseValores, limiteValores);
      scanf("%d %d %d %d %d %d",&dezena1, &dezena2, &dezena3, &dezena4, &dezena5, &dezena6);

    if ( FORA_LIMITE || REPETIDO ) {
      
      printf("\n\nVocê entrou com um valor fora dos limites ou valores repetidos. \nTente novamente!");
      
    }
    
  }

  printf("\n\nAgora vamos ao sorteio:");
  
  srand(time(NULL));

  while ( CONDICAO_SORTEIO ) {

    tentativa += 1;

    parada1 = 0;
    parada2 = 0;
    parada3 = 0;
    parada4 = 0;
    parada5 = 0;
    parada6 = 0;

    sorteio1 = rand() % limiteValores + baseValores;
    sorteio2 = rand() % limiteValores + baseValores;
    sorteio3 = rand() % limiteValores + baseValores;
    sorteio4 = rand() % limiteValores + baseValores;
    sorteio5 = rand() % limiteValores + baseValores;
    sorteio6 = rand() % limiteValores + baseValores;

    printf("\n\nTentativa: %d \n\nD1: %2d | D2: %2d | D3: %2d | D4: %2d | D5: %2d | D6: %2d"
          ,tentativa, sorteio1, sorteio2, sorteio3, sorteio4, sorteio5, sorteio6);

    parada1 = ( sorteio1 == dezena1 ) ? 1 : parada1;
    parada1 = ( sorteio1 == dezena2 ) ? 1 : parada2;
    parada1 = ( sorteio1 == dezena3 ) ? 1 : parada3;
    parada1 = ( sorteio1 == dezena4 ) ? 1 : parada4;
    parada1 = ( sorteio1 == dezena5 ) ? 1 : parada5;
    parada1 = ( sorteio1 == dezena6 ) ? 1 : parada6;

    parada2 = ( sorteio2 == dezena1 ) ? 1 : parada1;
    parada2 = ( sorteio2 == dezena2 ) ? 1 : parada2;
    parada2 = ( sorteio2 == dezena3 ) ? 1 : parada3;
    parada2 = ( sorteio2 == dezena4 ) ? 1 : parada4;
    parada2 = ( sorteio2 == dezena5 ) ? 1 : parada5;
    parada2 = ( sorteio2 == dezena6 ) ? 1 : parada6;

    parada3 = ( sorteio3 == dezena1 ) ? 1 : parada1;
    parada3 = ( sorteio3 == dezena2 ) ? 1 : parada2;
    parada3 = ( sorteio3 == dezena3 ) ? 1 : parada3;
    parada3 = ( sorteio3 == dezena4 ) ? 1 : parada4;
    parada3 = ( sorteio3 == dezena5 ) ? 1 : parada5;
    parada3 = ( sorteio3 == dezena6 ) ? 1 : parada6;

    parada4 = ( sorteio4 == dezena1 ) ? 1 : parada1;
    parada4 = ( sorteio4 == dezena2 ) ? 1 : parada1;
    parada4 = ( sorteio4 == dezena3 ) ? 1 : parada1;
    parada4 = ( sorteio4 == dezena4 ) ? 1 : parada1;
    parada4 = ( sorteio4 == dezena5 ) ? 1 : parada1;
    parada4 = ( sorteio4 == dezena6 ) ? 1 : parada1;

    parada5 = ( sorteio5 == dezena1 ) ? 1 : parada1;
    parada5 = ( sorteio5 == dezena2 ) ? 1 : parada1;
    parada5 = ( sorteio5 == dezena3 ) ? 1 : parada1;
    parada5 = ( sorteio5 == dezena4 ) ? 1 : parada1;
    parada5 = ( sorteio5 == dezena5 ) ? 1 : parada1;
    parada5 = ( sorteio5 == dezena6 ) ? 1 : parada1;

    parada6 = ( sorteio6 == dezena1 ) ? 1 : parada1;
    parada6 = ( sorteio6 == dezena2 ) ? 1 : parada1;
    parada6 = ( sorteio6 == dezena3 ) ? 1 : parada1;
    parada6 = ( sorteio6 == dezena4 ) ? 1 : parada1;
    parada6 = ( sorteio6 == dezena5 ) ? 1 : parada1;
    parada6 = ( sorteio6 == dezena6 ) ? 1 : parada1;

    printf("\n\nAcertados: %d | %d | %d | %d | %d | %d"
          , parada1, parada2, parada3, parada4, parada5, parada6);

    if ( CONDICAO_FIM ) {

      printf("\n\nParabéns! Você acertou as dezenas (%d) (%d) (%d) (%d) (%d) (%d) em %d tentativas!"
            , sorteio1, sorteio2, sorteio3, sorteio4, sorteio5, sorteio6, tentativa);
    }

    if ( tentativa > 54000000 ) {

      printf("\n\nOps, algo deu errado e você não conseguiu encontrar as dezenas!"
            "Mais sorte da próxima vez!");

    }
    
  }

  return 0;
  
}
