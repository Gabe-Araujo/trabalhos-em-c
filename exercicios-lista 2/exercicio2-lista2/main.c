#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");//habilita a acentua��o para o portugu�s

    int senha;
    char y='y';


    while(y == 'y' || y == 'Y')
    {

        printf("Digite a sua senha : ");
        scanf("%d", &senha);


        if(senha == 5555)
        {
        printf("Senha correta ");

            y = 'n';
        }
        else
        {
            printf("Senha incorreta");

            printf("\n Deseja tentar novamente : Y(SIM) // N(N�O) ");
            scanf("%s", &y); //%s para char %d para int %f para float // double
        }
    }

}
