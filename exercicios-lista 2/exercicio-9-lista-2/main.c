#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num1, num2;
    char opcao,y ='y';


  while(y =='y'||y =='Y')
  {



    printf("\n--------CALCULADORA--------");
    printf("\n+ PARA SOMAR");
    printf("\n- PARA SUBTRAIR");
    printf("\n/ PARA DIVIDIR");
    printf("\n* PARA MULTIPLICAR\n");
    scanf("%s", &opcao); //%s para string




        if(opcao == '+')
        {
            printf("\nDigite os 2 numeros que deseja somar\n");
            scanf("%d %d",&num1, &num2);

            printf("\n A soma � %d", num1 + num2);

             printf("\nDeseja continuar y(sim) || n(n�o) ");
             scanf("%s", &y);

        }
        else if (opcao == '-')
        {
              printf("\nDigite os 2 numeros que deseja subtrair\n");
              scanf("%d %d",&num1, &num2);

               printf("A Subtra��o � %d", num1 - num2);

                  printf("\nDeseja continuar y(sim) || n(n�o) ");
                scanf("%s", &y);
        }
        else if (opcao == '*')
        {
            printf("\nDigite os 2 numeros que deseja multiplicar\n");
            scanf("%d %d",&num1, &num2);

             printf("A multiplica��o � %d", num1 * num2);

                printf("\nDeseja continuar y(sim) || n(n�o) ");
                scanf("%s", &y);

        }
        else if (opcao == '/')
        {

            printf("\nDigite os 2 numeros que deseja dividir\n");
            scanf("%d %d",&num1, &num2);
            if(num1 == 0 || num2 == 0)
            {
                printf("N�o existe divis�o por 0");

                  printf("\nDeseja continuar y(sim) || n(n�o) ");
                  scanf("%s", &y);
            }
            else
            {
                printf("A divis�o � %d", num1 / num2);

                  printf("\nDeseja continuar y(sim) || n(n�o) ");
                  scanf("%s", &y);


            }


        }


    }



}
