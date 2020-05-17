#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <locale.h>

int resultado = 0 ,i = 0,  a[5],maior_valor=0,menor_valor=999;;


int funcao_exercicio_1()
{
  int retorno;
   int k=5;
   printf("Digite 5 valores:\n");
   for(i = 0;i<5;i++)
   {
        scanf("%d", &a[i]); //prenche os 5 vetores
   }
   retorno = retorn(a,k); //manda o vetor e o valor de k

   printf("-----------\nResultado: %d\n", retorno);



}


int retorn(int a[],int k) //recebe os
{

    if(i<5)
    { // aqui utilizei a condicional if, mas da certo tbm se utilizar o laço de repetição while.
        if(a[i] == k)
        {
            return i + retorn(a,k);
        }
        else
        {
            return -1 + retorn(a,k);
        }
    // resultado vai ser somado por ele mesmo + o valor que o ponteiro *p esta apontando atualmente
    i++; // encrementa i para logo após chamar a função soma passando o endereço do proximo elemento do array
    retorn(a,k); // recursão
    }



}




int funcao_exercicio_2()
{
   int retorno;
   printf("Digite 5 valores:\n");
   for(int i = 0;i<5;i++)
   {
        scanf("%d", &a[i]);
   }
   retorno = maximo(a);
   printf("-----------\nResultado: %d\n", retorno);

}


int maximo(int *p)
{

    if(i<5){ // aqui utilizei a condicional if, mas da certo tbm se utilizar o laço de repetição while.
        if(*p > maior_valor)
        maior_valor = *p; //ira igualar ao maior valor
        i++; // encrementa i para logo após chamar a função soma passando o endereço do proximo elemento do array
        maximo(&a[i]); // recursão manda o enderecamento do vetor global com o valor de i incrementado
    }
    return maior_valor;
}



int funcao_exercicio_3()
{
     int retorno;
   printf("Digite 5 valores:\n");
   for(int i = 0;i<5;i++){
        scanf("%d", &a[i]);
   }
   retorno = menor(a);//nao precisa colocar o &(e comercial) pois o ponteiro ja e uma referencia
   printf("-----------\nResultado: %d\n", retorno);


}


int menor(int *p)
{

    if(i<5){ // aqui utilizei a condicional if, mas da certo tbm se utilizar o laço de repetição while.
        if(*p < menor_valor)
        menor_valor = *p; //ira igualar ao maior valor
        i++; // encrementa i para logo após chamar a função soma passando o endereço do proximo elemento do array
        menor(&a[i]); // recursão manda o enderecamento do vetor global com o valor de i incrementado
    }
    return menor_valor;
}



int funcao_exercicio_4()
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

int soma(int *p)
{
    if(i<5)
    {
        resultado = *p + resultado; // resultado vai ser somado por ele mesmo + o valor que o ponteiro *p esta apontando atualmente
        i++; // encrementa i para logo após chamar a função soma passando o endereço do proximo elemento do array
        soma(&a[i]); // recursão
    }
    return resultado;
}


int funcao_exercicio_5()
{
    int retorno;

   printf("Digite 5 valores:\n");
   for(int i = 0;i<5;i++)
   {
        scanf("%d", &a[i]);
   }
   retorno = produto(a);
   printf("-----------\nResultado: %d\n", retorno);

}


int produto(int a[])
{
    int res_multiplicacao=0;

    if(i<5)
    {
        resultado = a[i] * a[i];
        res_multiplicacao = resultado * resultado  ; // resultado vai ser somado por ele mesmo + o valor que o ponteiro *p esta apontando atualmente
        i++; // encrementa i para logo após chamar a função soma passando o endereço do proximo elemento do array
        produto(&a[i]); // recursão
    }
    return res_multiplicacao;
}



int funcao_exercicio_6()
{
    int retorno;

   printf("Digite 5 valores:\n");
   for(int i = 0;i<5;i++)
   {
        scanf("%d", &a[i]);
   }
   retorno = media(a);
   printf("-----------\nResultado: %d\n", retorno);


}

int media(int *p)
{
    if(i<5)
    {
        resultado = *p + resultado; // resultado vai ser somado por ele mesmo + o valor que o ponteiro *p esta apontando atualmente
        i++; // encrementa i para logo após chamar a função soma passando o endereço do proximo elemento do array
        media(&a[i]); // recursão
    }
    return resultado/i;
}





int funcao_exercicio_7()
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



int funcao_exercicio_8()
{
     char nome_1[50],nome_2[50],nome_3[50];
    int tam_string,retorno;

    printf("Digite o primeiro nome\n");
    gets(nome_1);

    printf("Digite o segundo nome\n");
    gets(nome_2);

    printf("Digite o terceiro nome\n");
    gets(nome_3);


    tam_string = strlen(nome_1);

    for(int i=0;i<tam_string;i++)
    {
        nome_1[i] = toupper(nome_1[i]);
        nome_2[i] = toupper(nome_2[i]);
        nome_3[i] = toupper(nome_3[i]);
    }


    //-1 se a primeira letra for menor ,1 se a primeira letra for maior(valido para ordem alfabetica padrao ascII


    if(strcmp(nome_1,nome_2) == -1 && strcmp(nome_1,nome_3) == -1 && strcmp(nome_2,nome_3) == -1)
    {
        printf("A ordem é primeiro: %s,segundo: %s,terceiro: %s",nome_1,nome_2,nome_3);
    }
    else if(strcmp(nome_1,nome_2) == -1 && strcmp(nome_1,nome_3) == -1 && strcmp(nome_2,nome_3) == 1)
    {
          printf("A ordem é primeiro: %s,segundo: %s,terceiro: %s",nome_1,nome_3,nome_2);
    }
    else if(strcmp(nome_1,nome_2) == 1 && strcmp(nome_1,nome_3) == 1 && strcmp(nome_2,nome_3) == 1)
    {
         printf("A ordem é primeiro: %s,segundo: %s,terceiro: %s",nome_3,nome_2,nome_1);
    }
    else if(strcmp(nome_1,nome_2) == 1 && strcmp(nome_1,nome_3) == 1 && strcmp(nome_2,nome_3) == -1) //1 se o primeira palabra for maior /-1 se o primeira palavra for menor
    {
        printf("A ordem é primeiro: %s,segundo: %s,terceiro: %s",nome_2,nome_3,nome_1);
    }
    else if(strcmp(nome_1,nome_2) == 1 && strcmp(nome_1,nome_3) == -1 && strcmp(nome_2,nome_3) == -1) //1 se o primeira palabra for maior /-1 se o primeira palavra for menor
    {
        printf("A ordem é primeiro: %s,segundo: %s,terceiro: %s",nome_2,nome_1,nome_3);
    }
    else if(strcmp(nome_1,nome_2) == -1 && strcmp(nome_1,nome_3) == 1 && strcmp(nome_2,nome_3) == 1) //1 se o primeira palabra for maior /-1 se o primeira palavra for menor
    {
        printf("A ordem é primeiro: %s,segundo: %s,terceiro: %s",nome_3,nome_1,nome_2);
    }
    else if(strcmp(nome_1,nome_2) == 0 && strcmp(nome_1,nome_3) == 0)
    {
        printf("As palavras são iguais");
    }






}



int funcao_exercicio_9()
{


   char ent_char[50],aux_char[50];


   printf("Digite uma palavra\n");
   gets(ent_char);



   for(int i=0;i<strlen(ent_char);i++)
   {

       ent_char[i] = toupper(ent_char[i]);
   }


   strcpy(aux_char,ent_char); //copia da segunda para primeira variavel


   strrev(aux_char); //inverte os caracteres



   if(strcmp(ent_char,aux_char)== 0) //se as palavras forem iguais o valor sera 0
   {
       printf("A palavra é palíndromo");
   }
   else
   {
       printf("Não e um palíndromo");
   }



}



int funcao_exercicio_10()
{

    char str1[50];
    int resultado;
    int i=0,j;

    printf("Digite uma palavra\n");
    gets(str1);

    j = strlen(str1);

    resultado = funcao_invertida(str1,i,j);


    return 0;

}



int funcao_invertida(char *v, int i, int j)
{
  if (v[i] != v[j]) {
    printf("\nNao e palindromo\n");
    return -1;
  } else if (j == -1) {
    printf("\nE um palindromo\n");
    return 1;
  }

  return funcao_invertida(v, ++i, --j);
}





void main()
{

 setlocale(LC_ALL, "Portuguese");


 int opcao;

 do
 {
     printf("\nSelecione uma opção\n");
     printf("1 opção de retorno\n");
     printf("2 O elemento máximo do vetor.\n");
     printf("3 O elemento mínimo do vetor \n");
     printf("4 A soma dos elementos do vetor.\n");
     printf("5 O produto dos elementos do vetor\n");
     printf("6 A média dos elementos do vetor. \n");
     printf("7 e verifique se as string são idênticas.\n");
     printf("8 leia três nomes os imprima em ordem alfabética\n");
     printf("9 Verifica se a palavra e um  palíndromo\n");
     printf("10 Verifica se a palavra e um  palíndromo de forma recursiva\n");
     printf("11 Para sair\n");
     scanf("%d",&opcao);

    fflush(stdin);

        switch(opcao)
        {
        case 1:
            funcao_exercicio_1();
            break;
        case 2:
            funcao_exercicio_2();
            break;
        case 3:
            funcao_exercicio_3();
            break;
        case 4:
            funcao_exercicio_4();
            break;
        case 5:
            funcao_exercicio_5();
            break;
        case 6:
            funcao_exercicio_6();
            break;
         case 7:
            funcao_exercicio_7();
            break;
        case 8:
            funcao_exercicio_8();
            break;
         case 9:
            funcao_exercicio_9();
            break;
         case 10:
            funcao_exercicio_10();
            break;

         case 11:
            printf("");
            break;

        default:
            printf("Digite uma opção valida");

        }




 }
 while(opcao !=11);


if(opcao == 11)
{
    printf("\nObrigado por usar o programa\n");
}






//funcao_exercicio_4();



//funcao_exercicio_6();

 // funcao_exercicio_7();

 //funcao_exercicio_8();

 //funcao_exercicio_9();

    //funcao_exercicio_10();


}

