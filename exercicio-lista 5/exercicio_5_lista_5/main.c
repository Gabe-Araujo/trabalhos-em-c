#include <stdio.h>
#include <stdlib.h>

float funcao_somatorio()
{
  float x = 1,y=225,z= 29;

  while(z >= 2)
  {
    x = x * 2;
    y = y - z;

    z = z -2;

    printf("\n%f",x/y);
  }


}


int main()
{

funcao_somatorio();


}
