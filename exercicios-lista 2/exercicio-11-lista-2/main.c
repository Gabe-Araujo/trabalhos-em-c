#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x1,y1,x2,y2;

    printf("\nDigite uma coordenada X e uma coordenada Y\n");
    scanf("%f  %f", &x1, &y1);

    printf("\nDigite uma outra coordenada X e uma coordenada Y\n");
    scanf("%f  %f", &x2, &y2);


    if(x1 < 0 && x2 < 0)
    {
     x1 = x1 * -1;
     x2 = x2 * -1;
    }
    if(y1 < 0 && y2 < 0)
    {
        y1 = y1 * -1;
        y2 = y2 * -1;
    }



    printf("\nA A distancia entre a coordenada X e : %.2f", x1 - x2); //.2 define quantos zeros 0 float vai ter
    printf("\nA A distancia entre a coordenada X e : %.2f", y1 - y2);
}
