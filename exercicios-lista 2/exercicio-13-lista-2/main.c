#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int opcao,parafusos,valor,desconto;
  char y ='y'; //como em c não posso declarar string entao colocamos a string em char

while (y == 'y'||y == 'Y')
{//|| ou(or) && e(and)

    printf("\n------------ -----LOJA DE PARAFUSOS---------------\n");
    printf("\n------------ QUALIDADE QUE VOCE MERECE---------------\n");

    printf("\n        Digite os parafusos que deseja COMPRAR\n");
    scanf("%d", &parafusos);

    valor = (parafusos * 0.50);

    //CALCULOS
     if(parafusos > 100 && parafusos < 201)
    {
        valor = valor - (valor * 0.1);
    }
    else if(parafusos > 200 && parafusos < 301) //maiores que 200(ou seja 201) e menores que 301(ou seja 300)
    {
        valor = valor - (valor * 0.2);
    }
    else if(parafusos > 300 && parafusos < 401) //MAIOR QUE 300(301) E MENOR QUE 401(ATE 400)
    {
        valor = valor - (valor * 0.3);
    }
    else if ( parafusos > 400)
    {
         valor = valor - (valor * 0.4);
    }

//CALCULOS


    if(parafusos > 0)
        {
        printf("\nCodigo     Forma de pagamento      Desconto");
        printf("\n  1            Dinheiro             5%% ");
        printf("\n  2         Cartão Débito           3%%");
        printf("\n  3         Cartão Crédito          0%%");
        printf("\n  4             BOLETO              2%%\n");
        scanf("%d", &opcao);

           switch(opcao)
            {
                case 1:
                     desconto = valor * 0.05;
                     printf("O valor foi de : %d R$",valor- desconto);
                     printf("\nDeseja Recomprar\n Y(SIM) || N(NÃO)\n ");
                     scanf("%s", &y);
                     break;
                case 2:
                    desconto = valor * 0.03;
                    printf("O valor foi de : %d R$",valor- desconto);
                    printf("\nDeseja Recomprar\n Y(SIM) || N(NÃO)\n ");
                    scanf("%s", &y);
                break;
                case 3:
                    printf("Não possui desconto \n");
                   printf("O valor foi de : %d R$",valor- desconto);
                    printf("\nDeseja Recomprar\n Y(SIM) || N(NÃO)\n ");
                    scanf("%s", &y);
                break;
                case 4:
                     desconto = valor * 0.02;
                   printf("O valor foi de : %d R$",valor- desconto);
                    printf("\nDeseja Recomprar\n Y(SIM) || N(NÃO)\n ");
                    scanf("%s", &y);
                break;

                default:
                    printf("Digite um valor valido\n");
                    printf("Deseja repetir\n Y(SIM) || N(NÃO)\n ");
                    scanf("%s", &y);

            }//fecha o switch


        }//fecha o if

   }//fecha o while
}
