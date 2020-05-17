#include <stdio.h>
#include <stdlib.h>

int funcao_media_parametro(int *a,int *b,int *c)//recebe a referencia dos parametros
{
    return (*a+*b+*c)/3;


}


int main()
{
    int num1,num2,num3,resultado;
   printf("Digite 3 numeros \n");
   scanf("%d %d %d", &num1, &num2, &num3);

   resultado = funcao_media_parametro(&num1,&num2,&num3); //envia os parametros

    printf("A media é %d",resultado);



}
