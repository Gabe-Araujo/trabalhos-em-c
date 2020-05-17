#include <stdio.h>
#include <stdlib.h>


int resultado  ,i = 0,  a[5];


int soma(int a[],int k) //recebe os
{

    if(i<5)
    { // aqui utilizei a condicional if, mas da certo tbm se utilizar o laço de repetição while.
        if(a[i] == k)
        {
            return i + soma(a,k);
        }
        else
        {
            return -1 + soma(a,k);
        }
    // resultado vai ser somado por ele mesmo + o valor que o ponteiro *p esta apontando atualmente
    i++; // encrementa i para logo após chamar a função soma passando o endereço do proximo elemento do array
    soma(a,k); // recursão
    }



}


void main()
{
   int retorno;
   int k=5;
   printf("Digite 5 valores:\n");
   for(i = 0;i<5;i++)
   {
        scanf("%d", &a[i]); //prenche os 5 vetores
   }
   retorno = soma(a,k); //manda o vetor e o valor de k

   printf("-----------\nResultado: %d\n", retorno);
}
