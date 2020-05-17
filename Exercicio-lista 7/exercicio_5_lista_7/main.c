#include <stdio.h>
#include <stdlib.h>

int funcao_geometrica(int num1,int num2,int num3)
{

    if(num3 == 0)
    {
        return 0;
    }
    else
    {

        return num1 * num2 + funcao_geometrica(num1,num2,num3-1);

    }

}



int main()
{
    int num1,num2,multiplo,resultado;


      printf("Digite um numero e a razao geometrica que ele sera multiplicado ");
      scanf("%d %d",&num1,&num2);

      printf("Digite quantas vezes ele sera multiplicado ");
      scanf("%d",&multiplo);

      resultado = funcao_geometrica(num1,num2,multiplo);

      printf("%d",resultado);
}
