#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    //%e %f e %lf %g  double

    //%i %o %u %x para int

    //%c para char



    double valor_investido,juros,meses,ganho_juros;


    printf("Digite o valor do investimento: ");
    scanf("%lf",&valor_investido);

    printf("Digite a taxa de juros: ");
    scanf("%lf",&juros);

    printf("Digite em meses o tempo da aplicacao : ");
    scanf("%lf",&meses);

    ganho_juros = ((valor_investido/100)*juros)* meses ;

    printf("O valor investido foi %0.2f  \nO valor ganho foi de %0.2f \nTendo o ganho total de : %0.2f",valor_investido, ganho_juros, valor_investido+ganho_juros);

    return 0;

}
