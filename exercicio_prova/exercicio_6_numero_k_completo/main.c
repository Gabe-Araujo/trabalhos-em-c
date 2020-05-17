#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int procedimento(int * k)
{
    int n=2;


    while(pow(*k,n) <= pow(n,*k))
    {
        n++;



    }
   return n;


}



int main()
{

  int k,resultado;

      printf("Digite um numero ");
      scanf("%d",&k);

      if(k<0)
      {
          printf("Digite um numero valido");
      }
      else
      {
         resultado = procedimento(&k);

         printf("%d",resultado);


      }





}
