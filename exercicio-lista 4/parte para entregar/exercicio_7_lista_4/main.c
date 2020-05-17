#include <stdio.h>
#include <stdlib.h>
#include <math.h>//necessária para usar as funções matemáticas
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");//coloca a linguagem acentuada em portugues/latin

    float x,y;
    float x2,y2;

    float p,q,d;

    do
        {
            printf("\nDigite as coordenadas x1 e x2 e y1 e y2\n");
            scanf("%f %f %f %f", &x, &x2, &y, &y2); /* o espaco faz diferença no codigo */

            p=(x2-x);
            q=(y2-y);

            d= (p*p)+(q*q);

           printf("A distancia sera: %f",d);
        }
    while(x!=0 && x2 !=0 && y !=0 && y2 != 0);





}
