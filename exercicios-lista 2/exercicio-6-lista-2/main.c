#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{

     setlocale(LC_ALL, "Portuguese");//habilita a acentua��o para o portugu�s

   int angulo1,angulo2,angulo3,soma;

   printf("Digite 3 angulos de um triangulo : ");
   scanf("%d %d %d", &angulo1, &angulo2, &angulo3);

    soma = angulo1 + angulo2 + angulo3;

    if ( soma > 180)
    {
        printf("N�o e um triangulo");
    }

   else if(angulo1 == 90 || angulo2 == 90 || angulo3 == 90)
   {
       printf("e um triangulo retangulo");
   }
   else if (angulo1 > 90 || angulo2 > 90 || angulo3 > 90) //ou
   {
       printf("E um truangulo Obtus�ngulo");
   }
   else if (angulo1 < 90 && angulo2 < 90 && angulo3 < 90)
    {
        printf("E um triangulo acut�ngulo");
    }


}
