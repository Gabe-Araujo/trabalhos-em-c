#include <stdio.h>
#include <stdlib.h>

void funcao_numero_extenso()
{
        char valor[4];

     printf("Informe a numero: ");
     scanf("%s",valor); //não precisa de & para string so para char




     switch(valor[0]){
    case '1':
            printf("um real");
        break;
    case '2': printf("dois reais");
        break;
    case '3': printf("tres reais");
        break;
    case '4': printf("quatro reais");
        break;
    case '5': printf("cinco reais");
        break;
    case '6': printf("seis reais");
        break;
    case '7': printf("sete reais");
        break;
    case '8': printf("oito reais");
        break;
    case '9': printf("nove reais");
        break;

                    }






        switch(valor[2]){
    case '1':
            printf(" e dez");
        break;
    case '2': printf(" e vinte ");
        break;
    case '3': printf(" e trinta ");
        break;
    case '4': printf(" e quarenta ");
        break;
    case '5': printf(" e cinquenta ");
        break;
    case '6': printf(" e sessenta ");
        break;
    case '7': printf(" e setenta ");
        break;
    case '8': printf(" e oitenta ");
        break;
    case '9': printf(" e noventa ");
        break;
    case '0': printf(" ");
        break;

        }

      switch(valor[3]){
    case '1': //comparando string
            printf(" e um centavos");
        break;
    case '2': printf(" e dois centavos ");
        break;
    case '3': printf(" e tres centavos ");
        break;
    case '4': printf(" e quatro centavos ");
        break;
    case '5': printf(" e cinco centavos ");
        break;
    case '6': printf(" e seis centavos ");
        break;
    case '7': printf(" e sete centavos ");
        break;
    case '8': printf(" e oito centavos ");
        break;
    case '9': printf(" e nove centavos ");
        break;
    case '0': printf(" centavos ");
        break;

        default :
    printf ("centavos!\n");
     break;

        }

}


int main()
{

  funcao_numero_extenso();



}
