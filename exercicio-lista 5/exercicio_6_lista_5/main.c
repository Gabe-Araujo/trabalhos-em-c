#include <stdio.h>
#include <stdlib.h>

int main()
{


   float x,dividendo,divisor = 3,resultado = 0,aux = -1 ;

   printf("Digite um valor");
   scanf("%f", &x);

    dividendo = x * x;

   for(int i =0; i <=x;i++) //repetir quantas vezes o x for digitado se for 5/ vai ser executado 5 vezes;
   {
      resultado = ((x*dividendo/divisor)*aux) + resultado ;// x^3/3  == x^5/5 == x^7/7 + valor anterior
    //aux esta invertendo pois sempre sera soma e subtracao

      dividendo = x * x * dividendo;
      divisor = divisor + 2;
      aux = aux * -1;

        printf("\n%0.4f", resultado + x); //esta somando pois so precisa dessa soma 1 vez

   }



}
