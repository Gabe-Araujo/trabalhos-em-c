#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

   int tamanho_vetor=1,validador;
   int vetor[tamanho_vetor];
   int vetor_dez[] = {0,0,0,0,0,0,0,0,0,0,0}; //tamanho do vetor definido por variavel para nao somar lixo


   printf("Digite o tamanho do vetor: ");
   scanf("%d",&tamanho_vetor); //definir o tamanho do vetor


   for(int i=0;i<tamanho_vetor;i++) //vai rodar quantas vezes foi estipulado pelo usuario
   {
       printf("Digite o valor entre 0 e 9:");
       scanf("%d",&validador);

       if(validador>9 || validador<0) //validar se o numero e entre 0 e 9
       {
           printf("\nDigite um numero valido!!!");
           vetor[i] = rand() % 9;
       }
       else
       {
           vetor[i]= validador;
       }



   }

 //cada valor de j e comparado no vetor de [k] //vetor de k e percorrido totalmente toda vez que e incrementado
    for(int j=0;j<10;j++) //vetor de dez
    {

        for(int k=0;k<tamanho_vetor;k++) //rodar quantas vezes foi declarado
        {
           if(vetor[k] == j)//se o valor do vetor k(rodara o vetor todo) for igual a j(vai estar com 0 e executara a comparacao com 10 loops de for k)
           {
               vetor_dez[j] = 1 + vetor_dez[j] ; //soma uma unidade toda vez que o valor do vetor[k](completo) for comparado ao encremento j
           }

        }



    }

    for(int x = 0;x<10;x++)
    {
        printf("\n%d",vetor_dez[x]);

    }


}
