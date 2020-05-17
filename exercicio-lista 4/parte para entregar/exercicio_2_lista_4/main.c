#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char num[9];

     int  iTamanho;

    printf("Digite um numero ");
    scanf(" %s",&num);


     iTamanho = strlen(num); //retornar a quantidade de caracteres existentes em uma string,
     //não considerando o caractere NULL na contagem dos caracteres.


      if(strlen(num)==1)
        {
        printf("\n %c \n", num[0]);
       }

     else if(strlen(num)==2)
        {
        printf("\n %c \n", num[1]);
        printf("\n %c  \n\n", num[0]);
        }

     else if (strlen(num)==3)
    {
     printf(" %c  ", num[2]);
     printf(" %c   ", num[1]);
     printf(" %c  ", num[0]);
     }
     else if (strlen(num)==4)
    {
     printf(" %c  ", num[3]);
     printf(" %c  ", num[2]);
     printf(" %c   ", num[1]);
     printf(" %c  ", num[0]);
     }
     else if (strlen(num)==5)
    { //se tiver 5 caracteres vai executar esta funcao
     printf(" %c  ", num[4]);
     printf(" %c  ", num[3]);
     printf(" %c  ", num[2]);
     printf(" %c   ", num[1]);
     printf(" %c  ", num[0]);
     }
     else if (strlen(num)==6) //se tiver 6 caracteres vai executar esta funcao
    {
     printf(" %c  ", num[5]);
     printf(" %c  ", num[4]);
     printf(" %c  ", num[3]);
     printf(" %c  ", num[2]);
     printf(" %c   ", num[1]);
     printf(" %c  ", num[0]);
     }
     else if (strlen(num)==7)//se tiver 7 caracteres vai executar esta funcao
    {
      printf(" %c  ", num[6]);
     printf(" %c  ", num[5]);
     printf(" %c  ", num[4]);
     printf(" %c  ", num[3]);
     printf(" %c  ", num[2]);
     printf(" %c   ", num[1]);
     printf(" %c  ", num[0]);
     }
      else if (strlen(num)==8)//se tiver 7 caracteres vai executar esta funcao
    {
     printf(" %c  ", num[7]);
     printf(" %c  ", num[6]);
     printf(" %c  ", num[5]);
     printf(" %c  ", num[4]);
     printf(" %c  ", num[3]);
     printf(" %c  ", num[2]);
     printf(" %c   ", num[1]);
     printf(" %c  ", num[0]);
     }
    else if (strlen(num)== 9)//se tiver 7 caracteres vai executar esta funcao
    {
     printf(" %c  ", num[8]);
     printf(" %c  ", num[7]);
     printf(" %c  ", num[6]);
     printf(" %c  ", num[5]);
     printf(" %c  ", num[4]);
     printf(" %c  ", num[3]);
     printf(" %c  ", num[2]);
     printf(" %c   ",num[1]);
     printf(" %c  ", num[0]);
     }





}
