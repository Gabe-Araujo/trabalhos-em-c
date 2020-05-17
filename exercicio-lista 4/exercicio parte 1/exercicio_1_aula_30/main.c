#include <stdio.h>
#include <stdlib.h>

/*Função para comparar o maior numero */
int Selecionar_maior(int x,int y)
{
    if(x>y)
    {
        printf("%d e maior que o  numero %d ",x,y);
    }
    else
    {
        printf("%d e maior que o  numero %d ",y,x);
    }

}



int main()
{

    int num1,num2;

    printf("Digite o primeiro numero ");
    scanf("%d",&num1);

    printf("Digite o segundo numero ");
    scanf("%d",&num2);

    Selecionar_maior(num1,num2); //chama s função selecionar maior,e substitui os valores (num1,num2) para o (x,y) da função

}
