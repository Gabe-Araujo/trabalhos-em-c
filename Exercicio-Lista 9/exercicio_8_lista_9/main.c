#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome_1[50],nome_2[50],nome_3[50];
    int tam_string,retorno;

    printf("Digite o primeiro nome\n");
    gets(nome_1);

    printf("Digite o segundo nome\n");
    gets(nome_2);

    printf("Digite o terceiro nome\n");
    gets(nome_3);


    tam_string = strlen(nome_1);

    for(int i=0;i<tam_string;i++)
    {
        nome_1[i] = toupper(nome_1[i]);
        nome_2[i] = toupper(nome_2[i]);
        nome_3[i] = toupper(nome_3[i]);
    }


    //-1 se a primeira letra for menor ,1 se a primeira letra for maior(valido para ordem alfabetica padrao ascII


    if(strcmp(nome_1,nome_2) == -1 && strcmp(nome_1,nome_3) == -1 && strcmp(nome_2,nome_3) == -1)
    {
        printf("A ordem é primeiro: %s,segundo: %s,terceiro: %s",nome_1,nome_2,nome_3);
    }
    else if(strcmp(nome_1,nome_2) == -1 && strcmp(nome_1,nome_3) == -1 && strcmp(nome_2,nome_3) == 1)
    {
          printf("A ordem é primeiro: %s,segundo: %s,terceiro: %s",nome_1,nome_3,nome_2);
    }
    else if(strcmp(nome_1,nome_2) == 1 && strcmp(nome_1,nome_3) == 1 && strcmp(nome_2,nome_3) == 1)
    {
         printf("A ordem é primeiro: %s,segundo: %s,terceiro: %s",nome_3,nome_2,nome_1);
    }
    else if(strcmp(nome_1,nome_2) == 1 && strcmp(nome_1,nome_3) == 1 && strcmp(nome_2,nome_3) == -1) //1 se o primeira palabra for maior /-1 se o primeira palavra for menor
    {
        printf("A ordem é primeiro: %s,segundo: %s,terceiro: %s",nome_2,nome_3,nome_1);
    }
    else if(strcmp(nome_1,nome_2) == 1 && strcmp(nome_1,nome_3) == -1 && strcmp(nome_2,nome_3) == -1) //1 se o primeira palabra for maior /-1 se o primeira palavra for menor
    {
        printf("A ordem é primeiro: %s,segundo: %s,terceiro: %s",nome_2,nome_1,nome_3);
    }
    else if(strcmp(nome_1,nome_2) == -1 && strcmp(nome_1,nome_3) == 1 && strcmp(nome_2,nome_3) == 1) //1 se o primeira palabra for maior /-1 se o primeira palavra for menor
    {
        printf("A ordem é primeiro: %s,segundo: %s,terceiro: %s",nome_3,nome_1,nome_2);
    }





}
