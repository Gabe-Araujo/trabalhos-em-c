#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");

    char opcao, y = 'y' ;
    int numero1,numero2;






 while(y == 'y' || y == 'Y')
    {
          printf("\nA CALCULADORA MAIS PICA DO UNIVERSO");
          printf("\n\n ----------------------- ----------");
          printf("\n\n + PARA SOMAR");
          printf("\n\n - PARA SUBTRAIR");
          printf("\n\n / PARA DIVIDIR");
          printf("\n\n * PARA MULTIPLICAR\n ");
          scanf("\n %s", &opcao);

 switch(opcao)
      {
      case '+':
        printf("Digite 2 valores :");
        scanf("%d %d", &numero1, &numero2);
        printf("A SOMA DOS VALORES é %d\n",numero1 + numero2 );

         break;
      case '-':
        printf("Digite 2 valores :");
        scanf("%d %d", &numero1, &numero2);
        printf("A SUBTRAÇÃO DOS VALORES é %d",numero1 - numero2 );

         break;
      case '*':
        printf("Digite 2 valores :");
        scanf("%d %d", &numero1, &numero2);
        printf("A MULTIPLICAÇÃO DOS VALORES é %d",numero1 * numero2 );

         break;
      case '/':
        printf("Digite 2 valores :");
        scanf("%d %d", &numero1, &numero2);
        printf("A DIVISÃO DOS VALORES é %d",numero1 / numero2 );

        break;

      default:
            printf("DIGITE UMA OPÇÃO VALIDA ");

        }

    printf("\n Deseja continuar Y(SIM) e N(NÃO) ");
    scanf("\n%s", &y); // %s para char ou %c
   }
}
