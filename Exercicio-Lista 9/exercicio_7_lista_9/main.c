#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>

int main()
{

    char palavra[50],palavra_2[50];
    int retorno,tam_strng;


    printf("Digite uma palavra\n");
    gets(palavra);

    printf("Digite a segunda Palavra\n");
    gets(palavra_2);


    tam_strng = strlen(palavra); //transfere o tamanho da variavel para a variavel(tam_string)


    for(int i=0;i<tam_strng;i++)//vai rodar de acordo o i for menor que o tamanho da variavel string definido pelo comando strlen
    {
        palavra[i] = toupper(palavra[i]); //toupper transforma as palavras em maisuculas e joga para o valor da variavel
        palavra_2[i] = toupper(palavra_2[i]); //como toupper funciona apenas com uma string por vez temos de usar o for para trabalhar com todos os digitos

    }


    retorno = strcmp(palavra,palavra_2); //compara se as strings são iguais se for 0 e igual

    if(retorno == 0)
    {
     printf("As palavras são iguais");
    }
    else
    {
        printf("As palavras não sao iguais");
    }


}
