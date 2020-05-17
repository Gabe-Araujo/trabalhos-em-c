#include <stdio.h>
#include <stdlib.h>

int funcao_numero(int numero)
{
    if(numero >= 1)
    {
        return 1 + funcao_numero(numero/10);
    }


}


int main()
{
    int num,resultado;

    printf("Digite um numero ");
    scanf("%d",&num);


    resultado = funcao_numero(num);


    printf("%d",resultado);

}
