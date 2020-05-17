#include <stdio.h>
#include <stdlib.h>

int main()
{
   int numero[10];

   for(int i = 0;i<=9;i++)
   {
       scanf("%d",&numero[i]);
   }


  for(int i = 0;i<=9;i++)
   {
        //faz a comparação do i(incrementado) que sera servira de comparacao para o vetor // se o valor de i que comeca 0 for igual ao valor armazenado do vetor[i](que tambem sera 0) for igual sera impresso o valor

       if(numero[i] == i) //se o valor do vetor[0] foi igual a 0 ele ira imprimir;vetor[1] for igual 1 ele ira imprimir
       {
           printf("\n%d",numero[i]);
       }
   }




}
