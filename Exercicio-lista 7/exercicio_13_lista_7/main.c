#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int vetor_fx[30];


    for(int x=0;x<30;x++)
    {

        vetor_fx[x] = 3*(pow(x,3)) + 2*(pow(x,2)) + 1*x-5;

        printf("\n%d",vetor_fx[x]);
    }





}
