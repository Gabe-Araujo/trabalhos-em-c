#include <stdio.h>
#include <stdlib.h>

int main()
{

    char num[99];
    int i,tamanho;


    printf("digite um numero \n");
    scanf("%s",&num); //salvar o numero em string



    printf("\nDigite o digito que deseja ver da esquerda para direita\n");
    scanf("%d",&i);

    tamanho = i -1; //o vetor comeca do 0

    printf("%c",num[tamanho]);

}
