/*
Yuri Thomaz dos Santos Carvalho
Lista I - Início
*/

#include <stdio.h>

#define FORA_ALCANCE ( questao < 1 && questao > 10 )

int questao1();
int questao2();
int questao3();
int questao4();
int questao5();
int questao6();
int questao7();
int questao8();
int questao9();
int questao10();

int main() {

    int questao = 0;

    printf("\nLISTA DE QUESTÕES 1\n");

    TENTE_NOVAMENTE:

    printf("\nEscolha a questão que deseja acessar:\n");
    printf("\nQuesão 01: 1 \nQuesão 02: 2 \nQuesão 03: 3 \nQuesão 04: 4 \nQuesão 05: 5 "
           "\nQuesão 06: 6 \nQuesão 07: 7 \nQuesão 08: 8 \nQuesão 09: 9 \nQuesão 10: 10\n");
    printf("\nQuestão: ");
    scanf("%d", questao);

    while ( FORA_ALCANCE ) {

        printf("Questão inválida! Tente novamente.");

        goto TENTE_NOVAMENTE;

    }

    switch ( questao ) {

        case 1:

            questao1();

            break;

        case 2:

            questao2();

            break;

        case 3:

            questao3();

            break;

        case 4:

            questao4();

            break;

        case 5:

            questao5();

            break;

        case 6:

            questao6();

            break;

        case 7:

            questao7();

            break;

        case 8:

            questao8();

            break;

        case 9:

            questao9();

            break;

        case 10:

            questao10();
            break;

    }

    return 0;

}
