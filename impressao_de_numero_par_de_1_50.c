#include <stdio.h>

/*Crie um programa que mostre na tela todos os números pares que estão no intervalo inclusivo entre 1 e 50.*/

int main()
{
  for(int cont=0; cont<=50; cont=cont+2)
  {
   printf("\nOs Numeros Pares de 1 a 50 sao: %d\n", cont);
   sleep(1);
  }
}
