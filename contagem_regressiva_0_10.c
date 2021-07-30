#include <stdio.h>

/*
faça um programa que mostre na tela uma contagem regressiva para o estouro de fogos de artifício,
indo de 10 até 0, com uma pausa de 1 segundo entre eles.
*/

int main()
{
 int contagem;

 for(contagem=0;contagem<=10;contagem++)
 {
  printf("\n%d segundo(s) para o estouro dos fogos de artificio\n", contagem);
  sleep(1);
 }
 printf("\nFeliz 2022!!!!\n");

 return(0);
}
