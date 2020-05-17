#include <stdio.h>
#include <stdlib.h>

int main()
{
    double first_largura,first_comprimento,second_largura,second_comprimento,third_largura,third_comprimento,area_total;

    printf("Digite a largura do primeiro comodo :");
    scanf("%lf", &first_largura);

    printf("Digite o comprimento do primeiro comodo :");
    scanf("%lf", &first_comprimento);

    printf("Digite a largura do segundo comodo : ");
    scanf("%lf", &second_largura);

    printf("Digite o comprimento do segundo comodo: ");
    scanf("%lf", &second_comprimento);

    printf("Digite a largura do terceiro comodo: ");
    scanf("%lf", &third_largura);

    printf("Digite o comprimento do terceiro comodo: ");
    scanf("%lf", &third_comprimento);

    area_total = ( first_largura*first_comprimento) + (second_largura*second_comprimento) + (third_comprimento* third_largura);

    printf("A area do primeiro comodo e : %0.2f", first_largura*first_comprimento);
    printf("A area do segundo comodo e : %0.2f", second_largura*second_comprimento);
    printf("A area do terceiro comodo e : %0.2f", third_largura*third_comprimento);



    printf("\n Area total: %f ", area_total);




    return 0;




}
