/*
Yuri Thomaz dos Santos Carvalho
Lista I - Questão 02
*/

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

#include <stdio.h>

int main() {

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

	return 0;

}
