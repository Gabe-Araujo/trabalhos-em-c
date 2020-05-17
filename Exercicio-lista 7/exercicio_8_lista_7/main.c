#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor_rand[15];

    for(int i=0;i<15;i++)
    {
        vetor_rand[i] = rand()%10; //gera numeros pela função rand / e atribui no vetor 0 se extendendo ate o vetor 14 pois com 15 ele ira ter a condicao de parada


         printf("\n%d",vetor_rand[i]); //ira imprimir os valores de acordo com a variavel i que e  incrementada
    }




}
