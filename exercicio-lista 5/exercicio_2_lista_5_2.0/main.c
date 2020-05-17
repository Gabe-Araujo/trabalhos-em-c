#include <stdio.h>
#include <stdlib.h>


int media_10(int num1,int num2,int num3,int num4,int num5,int num6, int num7, int num8,int num9, int num10)
{

    int soma;

    soma = num1 + num2 + num3 +num4 +num5 + num6 +num7 + num8 + num9 +num10;

     return soma/10 ;

}

int main()
{
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;
    int resultado;

    printf("Digite 1 \n");
    scanf("%d %d %d %d %d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10);


   resultado = media_10(n1,n2,n3,n4,n5,n6,n7,n8,n9,n10);

   printf("%d",resultado);



}
