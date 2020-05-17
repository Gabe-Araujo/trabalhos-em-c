#include <stdio.h>
#include <stdlib.h>

int main()
{
  int vetor_fibbonati[100];
  unsigned long long  a=0,b=1,aux=0,i=0;


  while(i<100)
  {
      aux=a+b;
      a=b;//a recebe b
      b=aux;//b recebe auxiliar


      if(aux < 0)
      {
          aux = aux*-1;
      }

      vetor_fibbonati[i] = aux;

      i++;
  }


    for(int j=0;j<100;j++)
    {
        printf("\n%d",vetor_fibbonati[j]);

    }



}
