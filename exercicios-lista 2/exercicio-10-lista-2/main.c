#include <stdio.h>
#include <stdlib.h>
#include <time.h> //serve para os numeros nunca repitirem
#include <math.h>

int main()
{


    float valor,valor2,parteinteira,partedecimal;


     srand(time(NULL)); //evita que gere sempre os mesmo numeros = depende da bliblioteca time
     valor =  100.0*((float)(rand() )/RAND_MAX); //gera numeros aleatorios ate
     valor2 = rand() % 100; //gera numeros aleatorios de 0 a 100 pela funcao rand e %100

    parteinteira = floor(valor); //floor separa o numero inteiro/dos decimais tem
    partedecimal = valor - parteinteira; // pego o valor gerado e subtrario pela parte decimal


    printf("%f",valor);
    printf("\nvalor inteiro: %f",parteinteira);
    printf("\nValor decimal: %f",partedecimal);










}
