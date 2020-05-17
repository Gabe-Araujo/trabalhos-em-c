#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
     srand(time(NULL));//fazer numeros aleatorios entre segundos de 1970 ate hoje

    int temperatura[15];
    int temp_maior=0,temp_menor=999,media;



    for(int i = 0;i <15;i++)
    {
        temperatura[i] = 15 + rand() % (40 - 15); //gera numeros nos limites de 40 e 15

        //temperatura maior
        if(temperatura[i] > temp_maior) //temp maior comeca com 0; se a temperatura gerada for maior que 0 sera atribuida ao valor da temperatura
        {
          temp_maior = temperatura[i];

        }

        //temperatura menor
        if(temperatura[i]<temp_menor)
        {
            temp_menor = temperatura[i]; //atribui ao valor  temp_menor um valor muito alto e quando comparado recebera o valor menor

        }

        media = temperatura[i] + media /(sizeof(temperatura)/4);



        //printf("\n%d",temperatura[i]);
    }


    printf("\ntemperatura maior:%d",temp_maior);
    printf("\ntemperatura menor:%d",temp_menor);
    printf("\ntemperatura media:%d",media);


    for(int i = 0;i<15;i++)
    {
        if(temperatura[i] < media)
        {
            printf("\nValores que ficaram abaixo da media%d",temperatura[i]);
        }

    }








}
