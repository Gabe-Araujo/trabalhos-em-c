#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float altura,peso,imc;

    printf("Digite a sua altura : ");
    scanf("%f",&altura);

    printf("Digite o seu peso : ");
    scanf("%f",&peso);

    imc = peso/(altura * altura);

    printf("Seu imc  %f", imc);

    if(imc <= 18.5) //||) retorna verdadeirose pelo menos umdos operandos for verdadeiro; retorna falsoapenas seambos forem falsos
	{
		printf("\n\t\t\t abaixo do peso");
	}

    else if(imc >= 18.50 && imc <= 24.90)
    {
        printf("\nIMC: %.2f\n Peso normal", imc);
    }
    else if (imc >= 25 && imc <= 29.9)
    {
        printf("\nIMC: %.2f\n sobre peso", imc);
    }
     else if (imc >= 30 && imc <= 34.9)
    {
        printf("\nIMC: %.2f\n obesidade grau 1", imc);
    }
     else if (imc >= 35 && imc <= 39.9)
    {
        printf("\nIMC: %.2f\n obesidade grau 2", imc);
    }
    else if (imc >= 40)
    {
        printf("\nIMC: %.2f\n obesidade grau 3");
    }


    return 0;

}
