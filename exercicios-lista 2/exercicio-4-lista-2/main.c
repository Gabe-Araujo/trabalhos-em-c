#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{

     setlocale(LC_ALL, "Portuguese");//habilita a acentua��o para o portugu�s

    float x,y;


    printf("Digite um ponto X e Y : ");
    scanf("%f %f", &x, &y);


    if(x > 0 && y > 0)//|| ou && and(�)  x>0 � Y>0
    {
        printf("Est�o no primeiro quadrante ");
    }
     else if (x < 0 && y > 0)
    {
        printf("Est�o no segundo quadrante");
    }

    else if (x < 0 && y < 0)
    {
        printf("Est�o no terceiro quadrante");
    }
   else if ( x>0 && y<0)
    {
        printf("Est�o no quarto quadrante ");
    }



    return 0;
}




