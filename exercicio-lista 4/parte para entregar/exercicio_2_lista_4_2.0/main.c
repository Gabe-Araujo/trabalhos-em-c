#include <stdio.h>
#include <stdlib.h>

int main()
{

   char num[999]; //vetor

   int  iTamanho;

    printf("Digite um numero ");
    scanf(" %s",&num);//pega o numero em string

    iTamanho = strlen(num); //da em caracteres quanto e o numero digitado retirando o nulo



    for(int i=iTamanho;i>=0;i--)/* comeca com o numero de caracteres digitado//ira repetir enquanto for maior ou igual a 0/ o i ira diminuir*/
    {
        printf("%c",num[i]);
    }


}
