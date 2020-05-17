#include <stdio.h>
#include <stdlib.h>


int funcao_numero(int num1,int num2)
{
    int soma;

    if(0 == num1*num2)//vai parar de repetir quando a multiplicação for 0
     {
        return 0;
     }
    else
     {

        return num1 * num1 + funcao_numero(num1,num2-1); //soma o primeiro numero ate a multiplicacao dar 0 //ai dando decrecimento do segundo numero

    }

}



int main()
{
    int num1,num2,resultado;


    printf("Digite dois numeros para serem multiplicados ");
    scanf("%d %d",&num1,&num2);

    resultado = funcao_numero(num1,num2);


    printf("%d",resultado);

}
