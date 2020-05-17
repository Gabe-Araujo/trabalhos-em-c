#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int soma(int num)
{

    if(num%10==num)
    {
    return num;
    }
    else
    {
    return ((num%10)+soma(num/10));
    }



}




int main()
{
  int numero,resultado;

  printf("Digite um numero! ");
  scanf("%d",&numero);

  resultado = soma(numero);

  printf("%d",resultado);


}
