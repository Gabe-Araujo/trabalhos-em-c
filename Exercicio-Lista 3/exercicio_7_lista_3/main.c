#include <stdio.h>
#include <stdlib.h>

int main()
{

   int alunos,idade = 0,soma = 0, i=0; //declara as variaveis tendo de ser igualada a 0 pois se n�o ficara o lixo e isto ira travar a soma
   //precisa declarar o i fora do for para fazer a divis�o

   printf("\nDigite quantos alunos deseja cadastrar\n");
   scanf("%d",&alunos);

   for(i=0;i < alunos;i++)
    {
       printf("\nDigite as idades dos alunos\n");
       scanf("%d", &idade);

       soma = soma + idade;
    }

  printf("A Idade media dos alunos � %d", soma/i);

}
