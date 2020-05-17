#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português


    int num1;
    char opcao ='y';



    while(opcao == 'y' || opcao == 'Y')
    {

        printf("Digite um numero positivo : ");
        scanf("%d", &num1);


        if(num1 < 0)
        {
            printf("O Numero tem de ser maior que zero\n");

            printf("Deseja repetir Y(sim)//N(não)  \n");
            scanf("%s", &opcao);

        }

        else if(num1%2 == 0)
        {
            printf("O numero e par \n");
        }
        else
        {
            printf("O numero e impar \n");
        }

}

    printf("Deseja continuar Y(sim)//N(não");
    scanf("%s", &opcao);


}
