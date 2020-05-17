#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{

     setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português

    float x,y;


    printf("Digite um ponto X e Y : ");
    scanf("%f %f", &x, &y);


    if(x > 0 && y > 0)//|| ou && and(é)  x>0 É Y>0
    {
        printf("Estão no primeiro quadrante ");
    }
     else if (x < 0 && y > 0)
    {
        printf("Estão no segundo quadrante");
    }

    else if (x < 0 && y < 0)
    {
        printf("Estão no terceiro quadrante");
    }
   else if ( x>0 && y<0)
    {
        printf("Estão no quarto quadrante ");
    }



    return 0;
}




