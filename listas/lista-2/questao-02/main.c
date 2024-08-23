/*
Yuri Thomaz dos Santos Carvalho
Lista II - Questão 02
*/

/*
Crie um programa qual entre com argumentos e desenvolva funções que:

-> Transforme Celsius e Farenheit a depender da escolha;
*/

#include <stdio.h>
#include <stdlib.h>

void paraFarenheit(float temperatura);
void paraCelsius(float temperatura);

int main(int argc, char *argv[]) {

  int conversor = atoi(argv[1]);
  float temperatura = atof(argv[2]);

  switch ( conversor ) {

    case 1:

        paraFarenheit(temperatura);
        break;

    case 2:

        paraCelsius(temperatura);
        break;

  }

  return 0;

}

void paraFarenheit(float temperatura) {

  float conversao = ((temperatura * 9.0/5.0) + 32.0);

  printf("\n%g °C = %g °F\n", temperatura, conversao);

}

void paraCelsius(float temperatura) {

  float conversao = ((temperatura - 32.0) * 5.0/9.0);

  printf("\n%g °F = %g °C\n", temperatura, conversao);

}
