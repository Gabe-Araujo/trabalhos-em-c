#include <stdio.h>
#include <stdlib.h>

int main()
{

    int condicao,k=0;

    printf("Digite o tamanho da piramide\n");
    scanf("%d",&condicao);

  for(int i=0;i < condicao;i++) //faz a linha //semore aumenta mais 1
  {
     for(int j=0;j <= i;j++) // desenha a coluna //assim no momento que o j passou a ser maior que o i ele ira parar o for
     {

         k++; //como a a piramide sempre aumenta apenas 1 ,estabelece uma variavel igual a 0 e soma ela
         printf(" %d ",k);

     }



  printf("\n"); //pula a linha

  }


}
