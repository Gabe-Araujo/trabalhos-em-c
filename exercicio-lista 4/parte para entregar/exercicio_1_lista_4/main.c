#include <stdio.h>
#include <stdlib.h>

int main()
{

   int aux = 0,n,i=0;
   int a = 0;
   int b = 1;
   char y;

    do
    {
        printf("Digite um numero para dar inicio a sequencia de Fibonacci: ");
        scanf("%d",&n);

        if(n >= 0)
        {

            while(i <= n ) //vai executar enquanto o contador for menor ou igual ao numero digitado
                {

                printf("%d\n",aux);

                aux = a + b; //0 + 1 //1 + 1//1+2// 2 +3//3+5//13//
                a = b; // 1 // 1 // 2// 3//5//
                b = aux;//1// 2// 3//5//8


                i++;



                }


            }
    else
        {
        printf("Digite um numero valido!\n");

        printf("Deseja continuar ? y(SIM) // n(NÃO) ");
        scanf("%s",&y); //string


        }

    }
    while(y == 'y' || y == 'Y');








}
