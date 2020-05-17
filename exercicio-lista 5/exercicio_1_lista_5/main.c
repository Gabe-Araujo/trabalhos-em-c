#include <stdio.h>
#include <stdlib.h>

int funcao_valor_meio(int n1,int n2, int n3)
{
    printf("%d",n2);
}



int main()
{
    int num1,num2,num3;

    printf("Insira dois numeros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

   funcao_valor_meio(num1,num2,num3); // chama a funcão valor meio




}
