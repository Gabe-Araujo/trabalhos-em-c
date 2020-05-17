#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <locale.h>


/*
Envia os parametros das das variaveis do main(valor1,valor2,valor3)

a funcao recebe por REFERENCIA os parametros(endereco das variaveis) e atribui as
variaveis ponteiros(*a,*b,*c)

depois os valores são comparados nos ponteiros utilizando *(asterisco) para mostrar
o valor indexado no endereco de memoria armazendo por parametro de refencia nos ponteiros

*/


void funcao_maior_parametro(int *a,int *b, int *c) //referencia dos parametros das variaveis(valor1,valor2,valor3)
{
    if(*a > *b && *a > *c && *b > *c) //pega as variaveis ponteiros , e compara com os valores digitados
    {
        printf("%d e maior que %d que é maior que %d",*a,*b,*c); //asterisco mostra os valores dos ponteiros
    }
    else if(*a > *b && *a > *c && *c > *b)
    {
         printf("%d e maior que %d que é maior que %d",*a,*c,*b);//asterisco mostra os valores onde apontam os ponteiros
    }
    else if(*b > *a && *b > *c && *a > *c)
    {
         printf("%d e maior que %d que é maior que %d",*b,*a,*c);//asterisco mostra os valores onde apontam os ponteiros
    }
    else if(*b > *a && *b > *c && *c > *a)
    {
         printf("%d e maior que %d que é maior que %d",*b,*c,*a);//asterisco mostra os valores onde apontam os ponteiros
    }
     else if(*c > *a && *c > *b && *a > *b)
    {
         printf("%d e maior que %d que é maior que %d",*c,*a,*b);//asterisco mostra os valores onde apontam os ponteiros
    }
    else if(*c > *a && *c > *b && *b > *a)
    {
         printf("\n%d e maior que %d que é maior que %d",*c,*b,*a);//asterisco mostra os valores onde apontam os ponteiros
    }

}


/*
    Recebe por parametros dos valores digitados que são atribuidos aos ponteiros
    da função(*a,*b,*c) e depois retorna a media desses 3 valores(comparando os valores dos enderecos
                                                                    que  estão armazenados nos ponteiros)

    utilizando *(asterisco) e a variavel


*/

int funcao_media_parametro(int *a,int *b,int *c)//recebe a referencia dos parametros
{
    return (*a+*b+*c)/3;


}



/* Recebe os parametros das variaveis por refencia que são atribuidos
aos ponteiros *a/*b

atribui não ao ponteiro e sim a variavel que esta referenciado ao ponteiro(valor1)

o valor booleano true ou false nos valores.


*/


int funcao_comparacao_boleano(int *a,int *b)
{

 if(*a == 0)
    {
        *a = false; //atribui não ao ponteiro e sim a variavel que esta referenciado ao ponteiro(valor1)
    }
    else if(*a == 1)
    {
        *a = true;
    }
     else if(*a != 1 || *a != 0)
    {
        *a = false;
        printf("\n Digite um valor valido");
    }

    if(*b == 0)
    {
        *b = false;
    }
    else if(*b == 1)
    {
        *b = true;
    }
    else if(*b != 1 || *b != 0)
    {
        *b = false;
        printf("\n Digite um valor valido");
    }


    return *a && *b;


}


/*Envia os parametors digitados pelo usuario,que são atribuidos por referencia

não são as variaveis que estão sendo trocadas,e sim neste metodo
o endereco dos ponteiros que estao sendo modificados.

 */


void funcao_troca_ponteiro(int *a, int *b, int *c, int *d, int *e) //recebe as referencias dos parametros
{
    int *aux;

    printf("\n NOME DA VARIAVEL:a / b / c / d / e \n");
    printf("\n ENDERECO :%p %p %p %p %p\n",a,b,c,d,e); //%p = com * (da os valores hexadecimais) // %p apenas com as variaveis( mostra os parametros(ENDERECO DA MEMORIA) armazenados pela referencia das variaveis)
    printf("\n VALOR ANTIGO: %d %d %d %d %d\n",*a,*b,*c,*d,*e); //%D e asterisco mostra os valores por referencia recebida pelos parametros armazenados nos ponteiros

     //esta comparando os ponteiros e não os valores para ser valores teria de ser *,ESTA TROCANDO OS PONTEIROS DE LUGAR
    aux = a;
    a = e; //troca os parametros entre os ponteiros(endereco das variaveis);
    e = aux;

    //troca b com d
    aux = b;
    b = d;
    d = aux;



    printf("\n VALOR NOVO: %d %d %d %d %d\n",*a,*b,*c,*d,*e);




}


/*a função não recebe valores do main
eles são gerados  pela função rand

e os valores do char=são atribuidos por mim;



 */


void funcao_analise_memoria()
{



       //declaração das variaveis
    int valor_int;
    char valor_char;
    float valor_float;
    double valor_double;
    //fim declaração das variaveis

    //declaração dos ponteiros
    int *ponteiro_int;
    char *ponteiro_char;
    float *ponteiro_float;
    double *ponteiro_double;


    //&(mostra o parametro - endereco de memoria da variavel) - ponteiro recebe esse dados

    //geração de numeros/valores para ocupar variaveis
    valor_int = rand() %100;
    valor_char = 't'; //so armazena um caracter
    valor_float = rand() %100;
    valor_double = rand() %100;

    //Geração de ponteiros



    //sizeof(permite saber quanto ocupa a variavel na memoria principal-ram)
    printf("O Endereço do int %d é 0x%p. Essa variável ocupa %d bytes.",valor_int,&valor_int,sizeof(valor_int));
    //char permite armazenar um byte(8bits) = equivale a um caracter;
    printf("\nO Endereço do char %c é 0x%p. Essa variável ocupa %d bytes.",valor_char,&valor_char,sizeof(valor_char));
    //float permite armazenar numeros reais reais entre (aproximadamente) 10-38 e 1038, utiliza 6 bytes, precisão de 8 dígitos;
    printf("\nO Endereço do char %f é 0x%p. Essa variável ocupa %d bytes.",valor_float,&valor_float,sizeof(valor_float));
    //para representar o double e preciso utilizar o %lf(long float)
    printf("\nO Endereço do char %lf é 0x%p. Essa variável ocupa %d bytes.\n",valor_float,&valor_float,sizeof(valor_double));



    ponteiro_int = &valor_int; //tem de ter o &(e-comercial) pois voce esta mandando o parametro(endereco da variavel) e potenrio esta pegando o parametro por referencia
    ponteiro_double = &valor_double;
    ponteiro_char = &valor_char;
    ponteiro_float = &valor_float;

          printf("\n ----1-----1----1---1--Mudança de variaveis pelo ponteiro(mundaca por referencia do endereço) -----1-----1-----1------1---1--");

    *ponteiro_int = 3; //esta alterando o valor da variavel que o ponteiro indica(ou seja na variavel int;
    *ponteiro_double = 3;
    *ponteiro_char = 'G';
    *ponteiro_float = 3;


        //mostrando os valores alterados da variavel pelos ponteiros

 //sizeof(permite saber quanto ocupa a variavel na memoria principal-ram)
    printf("\nO Endereço do int %d é 0x%p. Essa variável ocupa %d bytes.",valor_int,&valor_int,sizeof(valor_int));
    //char permite armazenar um byte(8bits) = equivale a um caracter;
    printf("\nO Endereço do char %c é 0x%p. Essa variável ocupa %d bytes.",valor_char,&valor_char,sizeof(valor_char));
    //float permite armazenar numeros reais reais entre (aproximadamente) 10-38 e 1038, utiliza 6 bytes, precisão de 8 dígitos;
    printf("\nO Endereço do float %f é 0x%p. Essa variável ocupa %d bytes.",valor_float,&valor_float,sizeof(valor_float));
    //para representar o double e preciso utilizar o %lf(long float)
    printf("\nO Endereço do double %lf é 0x%p. Essa variável ocupa %d bytes.\n",valor_float,&valor_float,sizeof(valor_double));

     printf("\n ----1-----1----1---1--Mudança de variaveis do ponteiro -----1-----1-----1------1---1--\n");

        printf("\nO Endereço do ponteiro com referencia na variavel int %d é 0x%p. Essa variável ocupa %d bytes.",*ponteiro_int,ponteiro_int,sizeof(*ponteiro_int));
        //caso o ponteiro esteja com *(%p) ira mostrar o endereco de memoria do ponteiro  // e não sua referencia da variavel
        //quando tirado o * // ele ira mostrar o ponteiro de referencia(ou seja - o endereco/parametro da variavel int referencia do ponteiro)

    printf("\nO Endereço do ponteiro com referencia na variavel char %c é 0x%p. Essa variável ocupa %d bytes.",*ponteiro_char,ponteiro_char,sizeof(valor_char));
  //*+ponteiro no %d/%c ira mostrar o valor da variavel que esta por parametro no ponteiro
    printf("\nO Endereço do ponteiro com referencia na variavel float %f é 0x%p. Essa variável ocupa %d bytes.",*ponteiro_float,ponteiro_float,sizeof(ponteiro_float));

    printf("\nO Endereço do ponteiro com refencia na variavel double %lf é 0x%p. Essa variável ocupa %d bytes.\n",*ponteiro_double,&ponteiro_double,sizeof(ponteiro_double));




}






int main()
{

  srand(time(NULL));
  setlocale(LC_ALL, "Portuguese");


  int valor1,valor2,valor3,opcao;
  int num1,num2,num3,num4,num5,resultado;
  bool resultado_bool;




    while(opcao != 7)
        {
    printf(" \n                        -------Menu de opçõens-------\n");
    printf("\nOpção 1 : -- retorna por referência o maior e o menor numero digitado.");
    printf("\nOpção 2 : -- retorna a média dos números digitados usando parâmetro por referência.");
    printf("\nOpção 3 : -- retorna por  referência o valor verdade da operação (A^B ou A && B).");
    printf("\nOpção 4 : -- retorna   5  números  inteiros por referência e realizea alterações de seus valores, deslocando os valores da esquerda para a direita.");
    printf("\nOpção 5 : -- retorna  o valor, endereço e tamanho na memória para cada um dos seguintes tipos:\nchar, int, float, double, int *, char *, int *, float *, double *.");
    printf("\nOpção 6 : -- D E S A F I O ");
    printf("\nOpção 7 : -- Sair do programa \n ");
    scanf("\n%d",&opcao);

        switch(opcao)
                {

            case 1:
            printf("Digite 3 valores separados por espaço \n");
            scanf("%d %d %d", &valor1, &valor2, &valor3);

            funcao_maior_parametro(&valor1,&valor2,&valor3);//com o &(e-comercial) e passado por /*parametro*/

            break;
            //primeira função finalizada

            case 2:
                   printf("Digite 3 numeros \n");
                   scanf("%d %d %d", &num1, &num2, &num3);

                   resultado = funcao_media_parametro(&num1,&num2,&num3); //envia os parametros

                   printf("\nA media é %d",resultado);

            break;
            //segunda função finalizada

            case 3:
                printf("Digite um valor boleano ");
                scanf("%d", &valor1);


                printf("Digite um valor boleano ");
                scanf("%d", &valor2);

                resultado_bool = funcao_comparacao_boleano(&valor1,&valor2);

                printf("\nO resultado da operação (a && b) é %d",resultado_bool);


            break;

              //fim da terceira função


            case 4:

                printf("\n Digite 5 numeros que iremos trocalos de posição \n");
                scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5); //ENVIA OS PARAMETROS

                funcao_troca_ponteiro(&num1,&num2,&num3,&num4,&num5);

                break;
                //fim da quarta função


            case 5:

                 funcao_analise_memoria();

                break;

                 //fim da quinta função



            case 6:

                printf("Quando você executar esse programa(misterio.exe) é criado uma pilha, e nela se vão armazenando todas as variáveis:");
                printf("O Y está imprimindo lixo");

                break;

                //fim da sexta função

            case 7:

                printf("");

                break;

            default :

                    printf("Digite uma opção valida");

                break;

                }
        }

        if(opcao == 7)
        {
            printf("Obrigado por usar o programa");
        }

}
