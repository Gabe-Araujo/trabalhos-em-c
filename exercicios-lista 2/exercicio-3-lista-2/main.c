#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main()
{
      setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português

    int dia,mes,ano, dezenas;

    printf("Digite uma data valida \n");
    scanf("%d/%d/%d", &dia, &mes, &ano);


    dezenas = (ano%100) / 1; //descobrir se o ano e bisexto



    if(ano < 2020 ) //valida o ano
    {
        printf("Não e uma data valida");
    }

    if(mes > 12 || mes < 0) //valida o mes || ou && e
    {
        printf("Não e uma data valida ");
    }

    if (dia > 32 || dia < 0 ) //ou
    {
        printf("Não e uma data valida");
    }

    if(mes == 4 && dia > 30) //&& 4 e o dia e 31 and
    {
        printf("Nao e uma data valida");
    }

    if(mes == 6 && dia > 30)
    {
        printf("Não e uma data valida");
    }

    if(mes == 9 && dia >30)//se o mes for 9 E o dia for maior que 31
    {
        printf("Não e uma data valida");
    }

    if(mes == 11 && dia > 30)
    {
        printf("Não e uma data valida");
    }

    if(mes == 2 && dezenas%4 == 0 && dia >29 )//ano bisexto exemplo:2020
    {
        printf("Não e uma data valida");

    }
    else if(mes == 2 && dezenas%4 == 1 && dia > 28 )//nao e ano bisexto exemplo:2021
    {
        printf("Não e uma data valida ");

    }



}
