#include <stdio.h>
#include <stdlib.h>
#include <math.h>//necess�ria para usar as fun��es matem�ticas
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Portuguese");//coloca a linguagem acentuada em portugues/latin
    int i=1,x; //
    int cont= 0;
    char y='y';

    while(y=='y'||y =='Y')
    {

        printf("\nDigite um numero para dar inicio a sequencia \n");
        scanf("%d",&x);

        if(x<pow(10,-4))
        {
            printf("Digite um numero valido\n");

            printf("DESEJA CONTINUAR? Y(SIM)");
            scanf("%s",&y); //string

        }
        else
        {
            while(i<=x)
            {

                cont = (pow(x,i)/i) + cont;//eleva a fun��o (x e o numero que sera elevado,i a potencia)

                i++;
            }

                printf("\n O resultado �: %d ",cont + 1);  /*somo "1" devido ao inicio elevado da fun��o ser 0= todo numero elevado a 0 e 1,
         e a fun��o elevada(POW) ao ser colocado 0 da um erro */
        }
    }

}
