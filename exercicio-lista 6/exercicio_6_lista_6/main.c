#include <stdio.h>
#include <stdlib.h>

void misterio1(int xval)
    {
    int x;
    x = xval;
    /* Imprima o endere�o e valor de x aqui */
    printf("\n %d\n",x);

    //mostra o valor que foi atribuido a X,como na fun��o
    //o valor de 7 e substituido pela variavel da fun��o xval;
    //e quando igualamos a variavel x o valor ira se tornar o mesmo da chamada/variavel xval que foi atribuido a 7;


    }

void misterio2(int nada)
     {
       int y ;
     /* Imprima o endere�o e valor de y aqui */

     printf("\n %d",y);


     }

 int main()
     {
         misterio1(7);
         misterio2(11);
         return 0;
     }
