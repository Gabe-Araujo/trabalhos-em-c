#include <stdio.h>
#include <stdlib.h>

int resultado = 0 ,i = 0,  a[5];


int soma(int a[])
{
    int res_multiplicacao=0;

    if(i<5)
    {
        resultado = a[i] * a[i];
        res_multiplicacao = resultado * resultado  ; // resultado vai ser somado por ele mesmo + o valor que o ponteiro *p esta apontando atualmente
        i++; // encrementa i para logo ap�s chamar a fun��o soma passando o endere�o do proximo elemento do array
        soma(&a[i]); // recurs�o
    }
    return res_multiplicacao;
}


void main()
{
   int retorno;

   printf("Digite 5 valores:\n");
   for(int i = 0;i<5;i++)
   {
        scanf("%d", &a[i]);
   }
   retorno = soma(a);
   printf("-----------\nResultado: %d\n", retorno);
}
