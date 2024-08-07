/*
Yuri Thomaz dos Santos Carvalho
Lista I - Início
*/

#include <stdio.h>
#include <math.h>

void questao01();
void questao02();
void questao03();
void questao04();
void questao05();
void questao06();
void questao07();
void questao08();
void questao09();
void questao10();

int main() {

    #define FORA_ALCANCE ( questao < 1 && questao > 10 )

    int questao = 0;

    printf("\nLISTA DE QUESTÕES 1\n");

    TENTE_NOVAMENTE:

    printf("\nEscolha a questão que deseja acessar:\n");
    printf("\nQuestão 01: 1 \nQuestão 02: 2 \nQuestão 03: 3 \nQuestão 04: 4 \nQuestão 05: 5 "
           "\nQuestão 06: 6 \nQuestão 07: 7 \nQuestão 08: 8 \nQuestão 09: 9 \nQuestão 10: 10\n");
    printf("\nQuestão: ");
    scanf("%d", questao);

    while ( FORA_ALCANCE ) {

        printf("Questão inválida! Tente novamente.");

        goto TENTE_NOVAMENTE;

    }

    switch ( questao ) {

        case 1:

            questao01();

            break;

        case 2:

            questao02();

            break;

        case 3:

            questao03();

            break;

        case 4:

            questao04();

            break;

        case 5:

            questao05();

            break;

        case 6:

            questao06();

            break;

        case 7:

            questao07();

            break;

        case 8:

            questao08();

            break;

        case 9:

            questao09();

            break;

        case 10:

            questao10();

            break;

    }

    return 0;

}


void questao01() {

    /*
    Defina, descreva e explique:

    a) Linguagem de Programação;
    b) Contexto histórico e as várias vertentes de programação;
    c) Níveis de Linguagens de Programação;
    d) Compilador;
    e) Algoritmos e suas características;
    */

    printf("\na) Uma linguagem de programação é um conjunto de regras sintáticas, "
           "semânticas e comandos que permitem ao programador especificar as ações "
           "que o computador deverá realizar.\n");

    printf("\nb) As linguagens de Programação se diversificaram bastante ao longo do tempo e "
           "seguiram por diversos caminhos diferentes, podendo ser classificadas por seu paradigma, "
           "sua estrutura de tipos, sua plataforma de desenvolvimento, entre outros fatores.\n");

    printf("\nc) As linguagens de Programação são categorizadas em níveis de acordo "
           "com a proximidade de comunicação direta com o hardwares. Eles são 'baixo nível', "
           "que engloba linguagem de máquina e Assembly. 'alto nível', que engloba a maior parte "
           "das linguagens, como C, Python, Java, etc...\n");

    printf("\nd) Um compilador é um programa que lê um código feito em uma linguagem de alto "
           "nível e traduz os comandos para a linguagem de máquina, o que permite o computador "
           "realizá-los e rodar o código ou programa.\n");

    printf("\ne) Algorítmos são um conjunto de passos que são utilizados para realizar "
           "alguma ação ou resolver algum problema. Normalmente eles são sequenciais, organizados "
           "e sistematizados e não existem apenas no mundo digital.\n");

}


void questao02() {

    /*
    Escreva um programa que:

    -> Declare três variáveis de tipo caractere, vamos chamar de ch1, ch2 e ch3 mas você pode escolher outro
    identificador se achar mais apropriado;

    -> O usuário deve digitar um caractere, obtenha o mesmo da entrada padrão, usando scanf, e atribua o valor
    digitado à variável ch1;

    -> Verifique, utilizando o operador condicional (?) se se trata de:

    a) uma letra maiúscula;
    b) uma letra minúscula;
    c) um dígito;
    d) outro tipo de caractere;

    -> Atribua à variável ch2 o caractere 81, identifique e imprima na tela, utilizando printf, o caractere
    em formato numérico decimal, octal, hexadecimal e como caractere;

    -> Dado que o caractere ch2 é uma letra maiúscula, atribua à variável ch3 o caractere que corresponde à
    mesma letra minúscula (não pode procurar na tabela ASCII) e imprima ch3 na tela, utilizando printf, em
    formato numérico decimal, octal, hexadecimal e como caractere.
    */

    char caractere;
    char maiusculo = 81, minusculo;
	int verificacao = 0;

	printf("\nDigite um caractere: ");
	scanf("%c", &caractere);

	verificacao = ( caractere >= 'A' && caractere <= 'Z' ) ? 1 :
                  ( caractere >= 'a' && caractere <= 'z' ) ? 2 :
                  ( caractere >= '0' && caractere <= '9' ) ? 3 : 0;

	verificacao == 1 ?
        printf("\nEste caractere é uma letra maiúscula.\n") :

	verificacao == 2 ?
		printf("\nEste caractere é uma letra minúscula.\n") :

	verificacao == 3 ?
		printf("\nEste caractere é um dígito.\n") :

	printf("\nEste caractere não é uma letra nem um dígito.\n");

	printf("\nCaractere 81 (maiúsculo):\n");
    printf("\nDecimal: %d \nOctal: %o \nHexadecimal: %X \nCaractere: %c\n"
           , maiusculo, maiusculo, maiusculo, maiusculo);

	minusculo = maiusculo + ('a' - 'A');

	printf("\nCaractere 81 (minúsculo):\n");
    printf("\nDecimal: %d \nOctal: %o \nHexadecimal: %x \nCaractere: %c\n"
           , minusculo, minusculo, minusculo, minusculo);

}


void questao03() {

    /*
    Escreva um programa, usando quando necessário o operador (?), que:

    -> Declare três variáveis de tipo int, vamos chamar de a, b e c mas você pode escolher outro identificador se
    achar mais apropriado;

    -> Peça ao usuário para digitar dois números inteiros, obtenha-os da entrada padrão, usando scanf, e atribua
    os valores digitados às variáveis a e b respectivamente;

    -> Atribua à variável c a somas das variáveis a e b, imprima o resultado na tela em formato hexadecimal;

    -> Atribua à variável c o produto das variáveis a e b, imprima o resultado na tela em formato octal;

    -> Atribua à variável c o módulo (valor absoluto) da diferença entre as variáveis a e b, imprima o resultado
    na tela; (valor absoluto: se c < 0 imprimir -c, caso contrário imprima c);

    -> Atribua à variável c o quociente entre variáveis a e b, imprima o resultado na tela; (se b = 0 a divisão
    não é possível e um aviso deve ser apresentado ao usuário);

    -> Se a divisão anterior for possível, determinar se a é divisível de forma exata por b, mostrar o resultado na tela.
    */

  int valorA = 0, valorB = 0;
  int resultado = 0, resto = 0;

  printf("\nDigite o primeiro valor: ");
  scanf("%d", &valorA);

  printf("\nDigite o segundo valor: ");
  scanf("%d", &valorB);

  printf("\nSoma:");

  resultado = valorA + valorB;

  printf("\nA soma entre %d e %d em valor hexadecimal equivale a %x.\n", valorA, valorB, resultado);

  printf("\nMultiplicação:");

  resultado = valorA * valorB;

  printf("\nO produto entre %d e %d em valor octal equivale a %o.\n", valorA, valorB, resultado);

  printf("\nSubtração:");

  resultado = valorA - valorB;

  ( resultado < 0 ) ? resultado = (-resultado) : resultado;

  printf("\nO módulo da diferença entre %d e %d equivale a %d.\n", valorA, valorB, resultado);

  printf("\nDivisão:");

  resultado = valorA / valorB;
  resto = valorA % valorB;

	if ( valorB == 0 ) {

        printf("\nNão é possível dividir por 0!\n");

        return 1;

	}

    printf("\nO quociente da divisão de %d por %d equivale a %d.\n", valorA, valorB, resultado);

    if ( resto == 0 )
        printf("\n(A divisão é exata).\n");

    else
        printf("\n(A divisão não é exata).\n");

}


void questao04() {

    /*
    Escreva um programa, usando quando necessário o operador (?), que:

    -> Declare uma variável de tipo int, vamos chamar de cha mas você pode escolher outro identificador se achar
    mais apropriado;

    -> Peça ao usuário para digitar um número inteiro positivo, obtenha-o da entrada padrão, usando scanf, e atribua
    os valores digitados à variável cha; (se o valor fornecido for negativo, converter no correspondente valor positivo);

    -> Identifique se o valor fornecido pelo usuário faz parte dos valores utilizados para a representação de
    caracteres imprimíveis da tabela ASCII e imprima na tela, utilizando printf, o caractere em formato numérico
    decimal, octal, hexadecimal e como caractere;

    -> Se o valor estiver no intervalo dos caracteres não imprimíveis, menores que 32, converter no caractere 32
    e imprima na tela, utilizando printf, o caractere em formato numérico decimal, octal, hexadecimal e como caractere;

    -> Se o valor fornecido for maior que o valor máximo do intervalo, 127, utilizar o operador % para converter
    num valor do intervalo dos caracteres e aplique c ou d.
    */

	int numero = 0;

	printf("\nDigite um número inteiro positivo: ");
	scanf("%d", &numero);

	numero = ( numero < 0 ) ? (-numero) : numero;
	numero = ( numero > 127 ) ? (numero % 127) : numero;
	numero = ( numero < 32 ) ? 32 : numero;

	printf("\nDecimal: %d \nOctal: %o \nHexadecimal: %x \nCaractere: %c\n", numero, numero, numero, numero);

}


void questao05() {

    /*
    Escreva um programa que peça ao usuário para fornecer um número inteiro, obtenha-o da entrada padrão, usando
    scanf, e determine se o valor fornecido pode ser representado, sem perda de informação como um short int.

    Imprima na tela o valor fornecido, seguido das palavras “é maior que um short int” ou “este valor pertence ao
    intervalo dos short int”. Use apenas o operador condicional (?).
    */

	int numero = 0;

	printf("\nDigite um número inteiro: ");
	scanf("%d", &numero);

	( numero < -32768 ) ?
		printf("\nEste valor é menor que um short int.\n") :

	( numero >= -32768 && numero <= 32767 ) ?
		printf("\nEste valor está no intervalo dos short int.\n") :

	( numero > 32767 ) ?
		printf("\nEste valor é maior que um short int.\n") :

	printf("\nAlgo deu errado! Tente novamente.\n");

}


void questao06() {

    /*
    Escreva um programa que peça ao usuário para fornecer um número inteiro longo sem sinal, obtenha-o da entrada
    padrão, usando scanf, e determine se o valor fornecido pode ser representado, sem perda de informação como um int.

    Imprima na tela o valor fornecido, seguido das palavras “e maior que um int” ou “este valor pertence ao intervalo
    dos int”. Use apenas o operador condicional (?).
    */

	long unsigned int numero = 0;

	printf("\nDigite um número inteiro: ");
	scanf("%lud", &numero);

	( numero >= 0 && numero <= 2147483647 ) ?
		printf("\nEste valor pertence ao intervalo dos int.\n") :

	( numero > 2147483647 ) ?
		printf("\nEste valor é maior que o intervalo dos int.\n") :

    printf("\nAlgo deu errado! Tente novamente.\n");

}


void questao07() {

    /*
    Escreva um programa que leia um número inteiro e, utilizando o operador %, converta ele num valor entre 1 e 6.
    Imprima o resultado na tela;
    */

  int numero = 0;

  printf("\nDigite um número inteiro: ");
  scanf("%d", &numero);

  ( numero < 0 ) ? numero = (-numero): numero;
  ( numero > 6 || numero < 1 ) ? numero = (numero % 6) : numero;

  printf("\nO resultado é %d\n", numero);

}


void questao08() {

    /*
    Escreva um programa que leia um número inteiro positivo e retorne o valor da soma de todos os números inteiros
    de zero até o número fornecido. A soma dos números inteiros de 1 até n se calcula como? Imprima um resultado na tela.

    Como fazer para lidar com o fato de que o usuário pode fornecer um número negativo? (use apenas o que vimos em sala de aula até agora);
    */

  int numeroPositivo = 0;
  float resultadoSoma = 0.0;

  TENTE_NOVAMENTE_2:

  printf("\nDigite um número inteiro positivo: ");
  scanf("%d", &numeroPositivo);

  while ( numeroPositivo < 0 ) {

      printf("\nValor incorreto! Tente novamente.");

      goto TENTE_NOVAMENTE_2;

  }

  resultadoSoma = ((numeroPositivo * (1 + numeroPositivo) / 2));

  printf("\nO resultado da soma de todos os valores de 1 até %d é %g.\n", numeroPositivo, resultadoSoma);

}


void questao09() {

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

}


void questao10() {

    /*
    Escreva um programa que leia da entrada padrão o lado de um quadrado e imprima:

    -> O tamanho da diagonal do mesmo;

    -> O valor do perímetro;

    -> Sua área.
    */

	float lado = 0.0, diagonal = 0.0, perimetro = 0.0, area = 0.0;

	printf("\nDigite o tamanho de um dos lados de um quadrado (m): ");
		scanf("%f", &lado);

	diagonal = (lado * sqrtf(2));

	printf("\nA diagonal deste quadrado equivale a %g m.\n", diagonal);

	perimetro = (lado * 4);

	printf("\nO perímetro deste quadrado equivale a %g m.\n", perimetro);

	area = (pow(lado, 2));

	printf("\nA área deste quadrado equivale a %g m².\n", area);

}
