#include <stdio.h>
#include <stdlib.h>

int main()
{

 float x=100,y=0,soma=0;
 int i=1;


    while(i<=20)
    {

        x = x - 1;
        y = y + 1;

        soma = (x/y) + soma;

        printf("\n %f \n",soma);


        i++;
    }

    printf("%f", soma + 100); //estou somando pois divis�o por 0 n�o existe 100/0

}
