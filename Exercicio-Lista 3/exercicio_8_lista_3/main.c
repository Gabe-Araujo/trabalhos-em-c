#include <stdio.h>
#include <stdlib.h>

int main()
{
    int condicao;

    printf("Digite quantas casas o triangulo deve ter\n ");
    scanf("%d", &condicao); //

    //faz a coluna
    for(int i=0;i<condicao;i++) //repetir enquanto a condicao foi maior que I(que comeca com 0)
    {
      //faz a linha
      for(int j=0;j<i;j++) // compara a condição com o for(i) de cima, EX: enquanto o i: for 3 // for(j): executara 3 vezes adicionando o asterisco
      {//
          printf("*");
      }

      printf("\n"); //faz a quebra de linha

    }


}
