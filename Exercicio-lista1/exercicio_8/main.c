#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double salario_atual,percentual_reajuste; //%e %f %g  double

    //%i %o %u %x para int

    //%c para char

    printf("Digite o salario atual : ");
    scanf("%lf", &salario_atual);  //%f ou %i para double

    printf("Digite a porcentagem do seu reajuste de salario : ");
    scanf("%lf", &percentual_reajuste );

     printf("O Seu reajuste sera de %f", ((salario_atual/100)* percentual_reajuste) + salario_atual);

     return 0;
}
