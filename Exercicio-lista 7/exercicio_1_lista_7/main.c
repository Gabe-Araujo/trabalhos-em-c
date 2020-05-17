#include <stdio.h>
#include <stdlib.h>


int funcao_div_sub(int a,int b)
{

    if (b == 1)
    {
        return a; //vai retorna o valor de á pois divisão por 1 e ele mesmo
    }
    else if (a<b)
    {
          return 0; //não existe divisão que o divisor e maior que dividendo
    }
    else
    {
         return 1 + funcao_div_sub(a-b,b); //esta retornando 1 e somando fazendo quantas vezes o numero b cabe em a (a - ele(b))
    }



}



int main()
{
   int a, b, resultado;

   printf("forneca valores para a e b: ");
   scanf("%d%d", &a, &b);
   resultado=funcao_div_sub(a,b);

   printf("resultado=%d",resultado);






}
