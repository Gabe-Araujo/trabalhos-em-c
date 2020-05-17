#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{

     setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português

   int angulo1,angulo2,angulo3,soma;

   printf("Digite 3 angulos de um triangulo : ");
   scanf("%d %d %d", &angulo1, &angulo2, &angulo3);

    soma = angulo1 + angulo2 + angulo3;

    if ( soma > 180)
    {
        printf("Não e um triangulo");
    }

   else if(angulo1 == 90 || angulo2 == 90 || angulo3 == 90)
   {
       printf("e um triangulo retangulo");
   }
   else if (angulo1 > 90 || angulo2 > 90 || angulo3 > 90) //ou
   {
       printf("E um truangulo Obtusângulo");
   }
   else if (angulo1 < 90 && angulo2 < 90 && angulo3 < 90)
    {
        printf("E um triangulo acutãngulo");
    }


}
