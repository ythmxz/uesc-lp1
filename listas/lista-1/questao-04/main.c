/*
Yuri Thomaz dos Santos Carvalho
Lista I - Questão 04
*/

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

#include <stdio.h>

int main() {

	int numero = 0;

	printf("\nDigite um número inteiro positivo: ");
	scanf("%d", &numero);

	numero = ( numero < 0 ) ? (-numero) : numero;
	numero = ( numero > 127 ) ? (numero % 127) : numero;
	numero = ( numero < 32 ) ? 32 : numero;

	printf("\nDecimal: %d \nOctal: %o \nHexadecimal: %x \nCaractere: %c\n", numero, numero, numero, numero);

    return 0;

}
