#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h> //para sempre gerar numeros aleatorios
int main()
{

    srand(time(0));   /* srand(time(NULL)) objetiva inicializar o gerador de números aleatórios
                         com o valor da função time(NULL). Este por sua vez, é calculado
                         como sendo o total de segundos passados desde 1 de janeiro de 1970
                         até a data atual.
                         Desta forma, a cada execução o valor da "semente" será diferente.
                     */

    int num1,soma;

    for(int i=0; i <= 100;i++) /* (DECLARAÇÃO) o i comeca com 0 /(CONDIÇÃO) i ira repetir enquanto for menor ou igual a 100 /(INCREMENTO) i sempre incrementara mais 1*/
    {

        num1 = rand() % 100; //gera numero de 0 a 100 pela função rand

        printf("\n%d",num1);


    }





}
