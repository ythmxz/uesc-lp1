/*
Yuri Thomaz dos Santos Carvalho - 202410520
Lista de Questões 1 - Início
*/

#include <stdio.h>

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
    printf("\nEscolha a questão que deseja acessar:\n");
    printf("\nQuesão 1: 1 \nQuesão 2: 2 \nQuesão 3: 3 \nQuesão 4: 4 \nQuesão 5: 5 "
           "\nQuesão 6: 6 \nQuesão 7: 7 \nQuesão 8: 8 \nQuesão 9: 9 \nQuesão 10: 10\n");
    printf("\nQuestão: ");
    scanf("%d", questao);

    switch ( questao ) {

        case 1:
            questao1();
            break;
/*
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

        default:
            printf("\nQuestão inválida!\n");
            return 1;
*/
    }

    return 0;

}
