#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h> //para sempre gerar numeros aleatorios
int main()
{

    srand(time(0));   /* srand(time(NULL)) objetiva inicializar o gerador de n�meros aleat�rios
                         com o valor da fun��o time(NULL). Este por sua vez, � calculado
                         como sendo o total de segundos passados desde 1 de janeiro de 1970
                         at� a data atual.
                         Desta forma, a cada execu��o o valor da "semente" ser� diferente.
                     */

    int num1,soma;

    for(int i=0; i <= 100;i++) /* (DECLARA��O) o i comeca com 0 /(CONDI��O) i ira repetir enquanto for menor ou igual a 100 /(INCREMENTO) i sempre incrementara mais 1*/
    {

        num1 = rand() % 100; //gera numero de 0 a 100 pela fun��o rand

        printf("\n%d",num1);


    }





}
