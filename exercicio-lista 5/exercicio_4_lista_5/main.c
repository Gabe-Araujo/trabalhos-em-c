#include <stdio.h>
#include <stdlib.h>

double funcao_maluca()
{
   double aumentando = 1,diminuindo = 99,resultado;
    int i = 1;


    while(i <= 20)
    {
        resultado = diminuindo/aumentando + resultado;


        diminuindo --;
        aumentando ++;
        i++;

       printf("\n%f",resultado);
    }

}

int main()
{
    funcao_maluca();

}
