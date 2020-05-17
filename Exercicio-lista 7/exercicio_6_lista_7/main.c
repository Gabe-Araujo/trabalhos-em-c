#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num_dig[10];


    for(int i=0;i<sizeof(num_dig)/4;i++)
    {
        printf("Digite um numero ");
        scanf("%d",&num_dig[i]); //mostrar o tamanho do vetor

    }


    for(int i=sizeof(num_dig)/4;i>0;i--)
    {
        printf("\n%d",num_dig[i-1]);

    }



}
