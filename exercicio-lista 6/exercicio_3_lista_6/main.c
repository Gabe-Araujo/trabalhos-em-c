#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>


int funcao_comparacao_boleano(int *a,int *b)
{

 if(*a == 0)
    {
        *a = false;
    }
    else if(*a == 1)
    {
        *a = true;
    }
     else if(*a != 1 || *a != 0)
    {
        *a = false;
        printf("\n Digite um valor valido");
    }

    if(*b == 0)
    {
        *b = false;
    }
    else if(*b == 1)
    {
        *b = true;
    }
    else if(*b != 1 || *b != 0)
    {
        *b = false;
        printf("\n Digite um valor valido");
    }


    return *a && *b;


}


int main()
{
    int valor1,valor2;
    bool resultado;


        printf("Digite um valor boleano ");
        scanf("%d", &valor1);


        printf("Digite um valor boleano");
        scanf("%d", &valor2);

       resultado = funcao_comparacao_boleano(&valor1,&valor2);

       printf("%d",resultado);


}
