#include <stdio.h>
#include <stdlib.h>

int funcao_fatorial(int valor1)
{
    int resposta;

    if(valor1 == 1)
    {
        resposta=1;
    }
    else
    {
        resposta = valor1 * funcao_fatorial(valor1 - 1);
    }
    return resposta;

}

float funcao_seno(float x)
{
    float dividendo,divisor = 3,resultado = 0,aux = -1 ;

    dividendo = x * x;

   for(int i =0; i <=x;i++) //repetir quantas vezes o x for digitado se for 5/ vai ser executado 5 vezes;
   {
      resultado = (( (x*dividendo)/funcao_fatorial(divisor) )*aux) + resultado ;// x^3/3  == x^5/5 == x^7/7 + valor anterior
    //aux esta invertendo pois sempre sera soma e subtracao

      dividendo = x * x * dividendo;
      divisor = divisor + 2;
      aux = aux * -1;

      //esta somando pois so precisa dessa soma 1 vez

   }
       return resultado + x;

}

int main()
{
    float num1,resultado;

      printf("Digite um valor \n");
      scanf("%f", &num1);

      resultado = funcao_seno(num1);

      printf("O valor do seno digitado é %0.4f",resultado);


}
