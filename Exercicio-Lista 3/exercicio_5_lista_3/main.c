#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese"); //coloca os caracteres com acentos em portugues e latim

    int num1,num2 ;
    char y,opcao;//string

    do
    {
        printf("MENU DE OPCOES\n\n");
		printf("+ - PARA SOMA \n");
		printf("- - PARA SUBTRAÇÃO 2\n");
		printf("* - PARA MULTIPLICAÇÃO 3\n");
		printf("/ - PARA DIVISÃO 4\n");
		printf("\nDigite sua opcao:\n");
		scanf(" %c", &opcao);
        fflush(stdin); // retira caracteres de controle do buffer de teclado que estão sobrando, por ex. \n

        printf("Digite o Primeiro Numero\n");
        scanf("%d", &num1);

        printf("Digite o segundo numero\n");
        scanf("%d", &num2);


        switch(opcao)
        {
        case '+':
            printf("A soma dos valores é %d\n", num1 + num2);
            break;
        case '-':
            printf("A subtração dos valores é %d\n", num1 - num2);
            break;
        case '*':
            printf("A multiplicação dos valores é %d\n", num1 * num2);
            break;
        case '/':
            printf("A Divisão dos valores é %d\n", num1 / num2);
            break;

            default: // Caso nao tenha parado em nenhuma das anteriores
            printf("Opcao invalida!");
            break;
        }

         printf("Deseja continuar Y(SIM) || N(NÃO)\n");
         scanf(" %c", &y);
         fflush(stdin);// retira caracteres de controle do buffer de teclado que estão sobrando, por ex. \n
    }
    while(y == 'y' || y == 'Y');


    printf("OK ENTÃO BYE!");
}
