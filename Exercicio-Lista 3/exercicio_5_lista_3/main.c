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
		printf("- - PARA SUBTRA��O 2\n");
		printf("* - PARA MULTIPLICA��O 3\n");
		printf("/ - PARA DIVIS�O 4\n");
		printf("\nDigite sua opcao:\n");
		scanf(" %c", &opcao);
        fflush(stdin); // retira caracteres de controle do buffer de teclado que est�o sobrando, por ex. \n

        printf("Digite o Primeiro Numero\n");
        scanf("%d", &num1);

        printf("Digite o segundo numero\n");
        scanf("%d", &num2);


        switch(opcao)
        {
        case '+':
            printf("A soma dos valores � %d\n", num1 + num2);
            break;
        case '-':
            printf("A subtra��o dos valores � %d\n", num1 - num2);
            break;
        case '*':
            printf("A multiplica��o dos valores � %d\n", num1 * num2);
            break;
        case '/':
            printf("A Divis�o dos valores � %d\n", num1 / num2);
            break;

            default: // Caso nao tenha parado em nenhuma das anteriores
            printf("Opcao invalida!");
            break;
        }

         printf("Deseja continuar Y(SIM) || N(N�O)\n");
         scanf(" %c", &y);
         fflush(stdin);// retira caracteres de controle do buffer de teclado que est�o sobrando, por ex. \n
    }
    while(y == 'y' || y == 'Y');


    printf("OK ENT�O BYE!");
}
