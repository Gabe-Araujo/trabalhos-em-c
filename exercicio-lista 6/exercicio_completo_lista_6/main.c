#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <locale.h>


/*
Envia os parametros das das variaveis do main(valor1,valor2,valor3)

a funcao recebe por REFERENCIA os parametros(endereco das variaveis) e atribui as
variaveis ponteiros(*a,*b,*c)

depois os valores s�o comparados nos ponteiros utilizando *(asterisco) para mostrar
o valor indexado no endereco de memoria armazendo por parametro de refencia nos ponteiros

*/


void funcao_maior_parametro(int *a,int *b, int *c) //referencia dos parametros das variaveis(valor1,valor2,valor3)
{
    if(*a > *b && *a > *c && *b > *c) //pega as variaveis ponteiros , e compara com os valores digitados
    {
        printf("%d e maior que %d que � maior que %d",*a,*b,*c); //asterisco mostra os valores dos ponteiros
    }
    else if(*a > *b && *a > *c && *c > *b)
    {
         printf("%d e maior que %d que � maior que %d",*a,*c,*b);//asterisco mostra os valores onde apontam os ponteiros
    }
    else if(*b > *a && *b > *c && *a > *c)
    {
         printf("%d e maior que %d que � maior que %d",*b,*a,*c);//asterisco mostra os valores onde apontam os ponteiros
    }
    else if(*b > *a && *b > *c && *c > *a)
    {
         printf("%d e maior que %d que � maior que %d",*b,*c,*a);//asterisco mostra os valores onde apontam os ponteiros
    }
     else if(*c > *a && *c > *b && *a > *b)
    {
         printf("%d e maior que %d que � maior que %d",*c,*a,*b);//asterisco mostra os valores onde apontam os ponteiros
    }
    else if(*c > *a && *c > *b && *b > *a)
    {
         printf("\n%d e maior que %d que � maior que %d",*c,*b,*a);//asterisco mostra os valores onde apontam os ponteiros
    }

}


/*
    Recebe por parametros dos valores digitados que s�o atribuidos aos ponteiros
    da fun��o(*a,*b,*c) e depois retorna a media desses 3 valores(comparando os valores dos enderecos
                                                                    que  est�o armazenados nos ponteiros)

    utilizando *(asterisco) e a variavel


*/

int funcao_media_parametro(int *a,int *b,int *c)//recebe a referencia dos parametros
{
    return (*a+*b+*c)/3;


}



/* Recebe os parametros das variaveis por refencia que s�o atribuidos
aos ponteiros *a/*b

atribui n�o ao ponteiro e sim a variavel que esta referenciado ao ponteiro(valor1)

o valor booleano true ou false nos valores.


*/


int funcao_comparacao_boleano(int *a,int *b)
{

 if(*a == 0)
    {
        *a = false; //atribui n�o ao ponteiro e sim a variavel que esta referenciado ao ponteiro(valor1)
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


/*Envia os parametors digitados pelo usuario,que s�o atribuidos por referencia

n�o s�o as variaveis que est�o sendo trocadas,e sim neste metodo
o endereco dos ponteiros que estao sendo modificados.

 */


void funcao_troca_ponteiro(int *a, int *b, int *c, int *d, int *e) //recebe as referencias dos parametros
{
    int *aux;

    printf("\n NOME DA VARIAVEL:a / b / c / d / e \n");
    printf("\n ENDERECO :%p %p %p %p %p\n",a,b,c,d,e); //%p = com * (da os valores hexadecimais) // %p apenas com as variaveis( mostra os parametros(ENDERECO DA MEMORIA) armazenados pela referencia das variaveis)
    printf("\n VALOR ANTIGO: %d %d %d %d %d\n",*a,*b,*c,*d,*e); //%D e asterisco mostra os valores por referencia recebida pelos parametros armazenados nos ponteiros

     //esta comparando os ponteiros e n�o os valores para ser valores teria de ser *,ESTA TROCANDO OS PONTEIROS DE LUGAR
    aux = a;
    a = e; //troca os parametros entre os ponteiros(endereco das variaveis);
    e = aux;

    //troca b com d
    aux = b;
    b = d;
    d = aux;



    printf("\n VALOR NOVO: %d %d %d %d %d\n",*a,*b,*c,*d,*e);




}


/*a fun��o n�o recebe valores do main
eles s�o gerados  pela fun��o rand

e os valores do char=s�o atribuidos por mim;



 */


void funcao_analise_memoria()
{



       //declara��o das variaveis
    int valor_int;
    char valor_char;
    float valor_float;
    double valor_double;
    //fim declara��o das variaveis

    //declara��o dos ponteiros
    int *ponteiro_int;
    char *ponteiro_char;
    float *ponteiro_float;
    double *ponteiro_double;


    //&(mostra o parametro - endereco de memoria da variavel) - ponteiro recebe esse dados

    //gera��o de numeros/valores para ocupar variaveis
    valor_int = rand() %100;
    valor_char = 't'; //so armazena um caracter
    valor_float = rand() %100;
    valor_double = rand() %100;

    //Gera��o de ponteiros



    //sizeof(permite saber quanto ocupa a variavel na memoria principal-ram)
    printf("O Endere�o do int %d � 0x%p. Essa vari�vel ocupa %d bytes.",valor_int,&valor_int,sizeof(valor_int));
    //char permite armazenar um byte(8bits) = equivale a um caracter;
    printf("\nO Endere�o do char %c � 0x%p. Essa vari�vel ocupa %d bytes.",valor_char,&valor_char,sizeof(valor_char));
    //float permite armazenar numeros reais reais entre (aproximadamente) 10-38 e 1038, utiliza 6 bytes, precis�o de 8 d�gitos;
    printf("\nO Endere�o do char %f � 0x%p. Essa vari�vel ocupa %d bytes.",valor_float,&valor_float,sizeof(valor_float));
    //para representar o double e preciso utilizar o %lf(long float)
    printf("\nO Endere�o do char %lf � 0x%p. Essa vari�vel ocupa %d bytes.\n",valor_float,&valor_float,sizeof(valor_double));



    ponteiro_int = &valor_int; //tem de ter o &(e-comercial) pois voce esta mandando o parametro(endereco da variavel) e potenrio esta pegando o parametro por referencia
    ponteiro_double = &valor_double;
    ponteiro_char = &valor_char;
    ponteiro_float = &valor_float;

          printf("\n ----1-----1----1---1--Mudan�a de variaveis pelo ponteiro(mundaca por referencia do endere�o) -----1-----1-----1------1---1--");

    *ponteiro_int = 3; //esta alterando o valor da variavel que o ponteiro indica(ou seja na variavel int;
    *ponteiro_double = 3;
    *ponteiro_char = 'G';
    *ponteiro_float = 3;


        //mostrando os valores alterados da variavel pelos ponteiros

 //sizeof(permite saber quanto ocupa a variavel na memoria principal-ram)
    printf("\nO Endere�o do int %d � 0x%p. Essa vari�vel ocupa %d bytes.",valor_int,&valor_int,sizeof(valor_int));
    //char permite armazenar um byte(8bits) = equivale a um caracter;
    printf("\nO Endere�o do char %c � 0x%p. Essa vari�vel ocupa %d bytes.",valor_char,&valor_char,sizeof(valor_char));
    //float permite armazenar numeros reais reais entre (aproximadamente) 10-38 e 1038, utiliza 6 bytes, precis�o de 8 d�gitos;
    printf("\nO Endere�o do float %f � 0x%p. Essa vari�vel ocupa %d bytes.",valor_float,&valor_float,sizeof(valor_float));
    //para representar o double e preciso utilizar o %lf(long float)
    printf("\nO Endere�o do double %lf � 0x%p. Essa vari�vel ocupa %d bytes.\n",valor_float,&valor_float,sizeof(valor_double));

     printf("\n ----1-----1----1---1--Mudan�a de variaveis do ponteiro -----1-----1-----1------1---1--\n");

        printf("\nO Endere�o do ponteiro com referencia na variavel int %d � 0x%p. Essa vari�vel ocupa %d bytes.",*ponteiro_int,ponteiro_int,sizeof(*ponteiro_int));
        //caso o ponteiro esteja com *(%p) ira mostrar o endereco de memoria do ponteiro  // e n�o sua referencia da variavel
        //quando tirado o * // ele ira mostrar o ponteiro de referencia(ou seja - o endereco/parametro da variavel int referencia do ponteiro)

    printf("\nO Endere�o do ponteiro com referencia na variavel char %c � 0x%p. Essa vari�vel ocupa %d bytes.",*ponteiro_char,ponteiro_char,sizeof(valor_char));
  //*+ponteiro no %d/%c ira mostrar o valor da variavel que esta por parametro no ponteiro
    printf("\nO Endere�o do ponteiro com referencia na variavel float %f � 0x%p. Essa vari�vel ocupa %d bytes.",*ponteiro_float,ponteiro_float,sizeof(ponteiro_float));

    printf("\nO Endere�o do ponteiro com refencia na variavel double %lf � 0x%p. Essa vari�vel ocupa %d bytes.\n",*ponteiro_double,&ponteiro_double,sizeof(ponteiro_double));




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
    printf(" \n                        -------Menu de op��ens-------\n");
    printf("\nOp��o 1 : -- retorna por refer�ncia o maior e o menor numero digitado.");
    printf("\nOp��o 2 : -- retorna a m�dia dos n�meros digitados usando par�metro por refer�ncia.");
    printf("\nOp��o 3 : -- retorna por  refer�ncia o valor verdade da opera��o (A^B ou A && B).");
    printf("\nOp��o 4 : -- retorna   5  n�meros  inteiros por refer�ncia e realizea altera��es de seus valores, deslocando os valores da esquerda para a direita.");
    printf("\nOp��o 5 : -- retorna  o valor, endere�o e tamanho na mem�ria para cada um dos seguintes tipos:\nchar, int, float, double, int *, char *, int *, float *, double *.");
    printf("\nOp��o 6 : -- D E S A F I O ");
    printf("\nOp��o 7 : -- Sair do programa \n ");
    scanf("\n%d",&opcao);

        switch(opcao)
                {

            case 1:
            printf("Digite 3 valores separados por espa�o \n");
            scanf("%d %d %d", &valor1, &valor2, &valor3);

            funcao_maior_parametro(&valor1,&valor2,&valor3);//com o &(e-comercial) e passado por /*parametro*/

            break;
            //primeira fun��o finalizada

            case 2:
                   printf("Digite 3 numeros \n");
                   scanf("%d %d %d", &num1, &num2, &num3);

                   resultado = funcao_media_parametro(&num1,&num2,&num3); //envia os parametros

                   printf("\nA media � %d",resultado);

            break;
            //segunda fun��o finalizada

            case 3:
                printf("Digite um valor boleano ");
                scanf("%d", &valor1);


                printf("Digite um valor boleano ");
                scanf("%d", &valor2);

                resultado_bool = funcao_comparacao_boleano(&valor1,&valor2);

                printf("\nO resultado da opera��o (a && b) � %d",resultado_bool);


            break;

              //fim da terceira fun��o


            case 4:

                printf("\n Digite 5 numeros que iremos trocalos de posi��o \n");
                scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5); //ENVIA OS PARAMETROS

                funcao_troca_ponteiro(&num1,&num2,&num3,&num4,&num5);

                break;
                //fim da quarta fun��o


            case 5:

                 funcao_analise_memoria();

                break;

                 //fim da quinta fun��o



            case 6:

                printf("Quando voc� executar esse programa(misterio.exe) � criado uma pilha, e nela se v�o armazenando todas as vari�veis:");
                printf("O Y est� imprimindo lixo");

                break;

                //fim da sexta fun��o

            case 7:

                printf("");

                break;

            default :

                    printf("Digite uma op��o valida");

                break;

                }
        }

        if(opcao == 7)
        {
            printf("Obrigado por usar o programa");
        }

}
