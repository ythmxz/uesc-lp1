/*
Yuri Thomaz dos Santos Carvalho
Lista I - Questão 03
*/

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

#include <stdio.h>

int questao3() {

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

  return 0;

}
