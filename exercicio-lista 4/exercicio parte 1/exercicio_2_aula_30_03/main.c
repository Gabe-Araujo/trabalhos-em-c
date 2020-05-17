#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool funcao_maiuscula(char a)
{
    if(a >= 'a' && a <= 'z') //valida se a letra vai ser minuscula
    {
        return true;
    }
    else
    {
        return false;
    }

}



int main()
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
