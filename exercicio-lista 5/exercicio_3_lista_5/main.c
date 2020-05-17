#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include <locale.h>

bool funcao_xor(bool num1,bool num2)
{

    return num1 ^ num2; //faz a operacao xor (que para retornar verdadeiro '1' tem de ser 0/1 ou 1/0 e nunca 1/1 ou 0/0


}



int main()
{
    setlocale(LC_ALL, "Portuguese");

    int a,b;
    bool resultado;


     printf("Digite um valor boleano :  ");
     scanf("\n%d", &a);

     printf("Digite o segundo valor booleano: ");
     scanf("\n%d", &b);


    //valida as opcoens
    if(a == 1)
    {
        a = true;
    }
    else if(a == 0)
    {
        a = false;
    }
    else{
        printf("Digite uma opção valida \n");
    }

    if(b == 1)
    {
        b = true;
    }
    else if(b == 0)
    {
        b = false;
    }
    else{
        printf("Digite um numero valido \n");
    }

    resultado = funcao_xor(a,b);

    printf("%d",resultado); //percent d para dar o resultado




}
