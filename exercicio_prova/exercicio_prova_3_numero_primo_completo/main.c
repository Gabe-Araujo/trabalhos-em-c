#include<stdio.h>

#include <locale.h>

void funcao_maior_primo(int num1)
{

int resultado = 0, cont_resto=0;

for (int i = 2; i <= num1/2 ; i++) // i comeca com 2; vai repetir  enquanto o numero foir maior ou igual ao i ; i vai acrescentar mais 1;
    {

    if (num1 % i == 0) //se o valor não for primo ele entra na condição e diminuira 1 do valor e resetara o i para comparação
    //caso ele seja primo ,ele não entrara na condicao 'como no codigo main' e printara na tela
        {
          i=2;
         num1--;
        }

    }

    if (resultado == 0)
    printf("\n%d é um número primo\n", num1);
    else
    printf("\n%d não é um número primo\n", num1);



}













int main() {
 setlocale(LC_ALL, "");



 int num, resultado = 0;

 printf("Digite um número: ");
 scanf("%d",&num);


    funcao_maior_primo(num);


 for (int i = 2; i <= num / 2; i++) // i comeca com 2; vai repetir  enquanto o numero foir maior ou igual ao i ; i vai acrescentar mais 1;
    {
    if (num % i == 0) //se o resto da divisão de i for igual a 0
        {

       resultado++; //resultado vai acrescentar 1
       break; //parar o codigo

        }
    }


 if (resultado == 0)
    printf("\n%d é um número primo\n", num);
 else
    printf("\n%d não é um número primo\n", num);

 return 0;



}
