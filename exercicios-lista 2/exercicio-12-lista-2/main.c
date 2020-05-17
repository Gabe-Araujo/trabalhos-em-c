#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{

setlocale(LC_ALL, "Portuguese");

printf("\n------------ -----LOJA DE PARAFUSOS---------------\n");
printf("\n------------ QUALIDADE QUE VOCE MERECE---------------\n");

int parafusos,valor;

printf("\n        Digite os parafusos que deseja COMPRAR\n");
scanf("%d", &parafusos);

valor = (parafusos * 0.50);


    if(parafusos > 100 && parafusos < 201)
    {
        valor = valor - (valor * 0.1);
        printf("O valor da compra é : %d R$", valor);
    }
    else if(parafusos > 200 && parafusos < 301) //maiores que 200(ou seja 201) e menores que 301(ou seja 300)
    {
        valor = valor - (valor * 0.2);
        printf("O valor da compra é : %d R$", valor);
    }
    else if(parafusos > 300 && parafusos < 401) //MAIOR QUE 300(301) E MENOR QUE 401(ATE 400)
    {
        valor = valor - (valor * 0.3);
        printf("O valor da compra é : %d R$", valor);
    }
    else if ( parafusos > 400)
    {
         valor = valor - (valor * 0.4);
        printf("O valor da compra é : %d R$", valor);
    }
    else if (parafusos <= 0)
    {
    printf("VALOR INVALIDO");
    }
    else
    {
        printf("O valor da compra é : %d R$", valor);
    }






}
