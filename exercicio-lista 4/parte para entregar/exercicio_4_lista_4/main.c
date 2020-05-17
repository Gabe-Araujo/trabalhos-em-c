#include <stdio.h>
#include <stdlib.h>

int main()
{

    float x=1;
    float y=225;
    float z=29;
    float q = 1/225; // pois vai iniciar com uma casa a mais pois com 0 não daria a multiplicacao
    float aux,soma;
    int i=1;

    while(i<z)
    {

        x = x * 2; //1*2 / 2*2 / 4*2/
        y = y - z; //225 - 29// 225-27

        aux = x/y;

        soma = aux + soma;


        z =z -2;


    }

     printf("\n %0.4f  \n",soma+q);


}
