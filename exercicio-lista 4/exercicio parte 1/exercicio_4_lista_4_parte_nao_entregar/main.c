#include <stdio.h>
#include <stdlib.h>

int funcao_media(int num1,int num2,int num3)
{

    return (num1 + num2 + num3)/3;

}

int funcao_desvio_padrao(int num1,int num2,int num3,int media)
{

    int resultado;




    resultado = ( pow(num1 - media,2) + pow(num2 - media,2) + pow(num3 - media,2)) /2  ;

    return sqrt(resultado);


}


int main()
{
    int a,b,c;
    int media,desvio;
    printf("Digite 3 numero separados por espaços ");
    scanf("%d %d %d", &a, &b, &c);

    media = funcao_media(a,b,c);

    printf("A media é %d\n",media);

    desvio = funcao_desvio_padrao(a,b,c,media);

    printf("O desvio padrão é %d",desvio);


}
