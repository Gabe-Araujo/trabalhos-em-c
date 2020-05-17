#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese"); //coloca os caracteres com acentos em portugues e latim

int i, condicao;

printf("Digite o valor inicial da variavel\n"); //a variavel vai comecar com um valor e ira diminuir de 1 em 1 e imprimir os valores ( ate o numero digitado pelo usuario"condicao" for maior que o i(valor digitado inicialmente);
scanf("%d",&i);

printf("Digite o valor final ate a variavel ir// a condição\n");
scanf("%d", &condicao);

  for( i; i>=condicao; i--) // inicializacao-- quanto a variavel vai comecar; condicao  para fazer o loop; incremento -- se vai somar ou diminuir)
   {
       printf("\n%d",i);
   }


}
