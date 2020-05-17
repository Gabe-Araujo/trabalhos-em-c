#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10]; //valor tem de ser igual ou maior os caracteres


    for(int i=0;i<10;i++) //tem de ser sempre menor que a condicao e 'nunca menor ou igual'
    {
        if(i%2==0) //se for par(resto for 0)
        {
            vetor[i] = 1; //armazenara no vetor o valor 1
        }
        else if (i%2!=0) //se for impar(resto for diferente de 0)
        {
            vetor[i] = 0;//armazena no vetor o valor 0
        }

    printf("%d",vetor[i]);


    }

}
