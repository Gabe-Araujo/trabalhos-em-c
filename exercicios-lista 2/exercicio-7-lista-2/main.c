#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura,peso,imc ;

        printf("Digite a sua altura : \n");
        scanf("%f", &altura);

        printf("Digite o seu peso : \n");
        scanf("%f", &peso);

    imc =  peso / (altura * altura)  ;

    printf("\nimc = %0.f", imc);

    if(imc < 19)
    {
        printf("\nAbaixo do peso");
    }
    else if (imc > 19 && imc < 24)
    {
        printf("\nPeso normal");
    }
    else if (imc > 24 && imc < 30)
    {
        printf("\nAcima do peso");
    }
    else if ( imc > 30 && imc < 34)
    {
        printf("\nObesidade grau 1");
    }
    else if ( imc > 35 && imc < 40)
    {
        printf("\nObesidade grau 2");
    }
    else if (imc > 40)
    {
        printf("\nObesidade grau 3");
    }
}
