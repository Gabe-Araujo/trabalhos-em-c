#include <stdio.h>
#include <stdlib.h>


int funcao_menu(int a)
{
    printf("Digite a sua opção");
    printf("---SABER SE A LETRA E MAIUSCULA--------------1");
    printf("-----------------2");
    printf("-----------------3");
    if(a == 1)
        {
                    char a; //letra

            printf("Digite uma letra ");
            scanf("%s",&a); //recebe a string

            if( funcao_maiuscula(a) == true )
            {
                printf("Essa letra e minuscula");
            }
            else
            {
                printf("Essa letra e maiuscula");
            }

        }
}


int main()
{
    printf("Hello world!\n");
    return 0;
}
