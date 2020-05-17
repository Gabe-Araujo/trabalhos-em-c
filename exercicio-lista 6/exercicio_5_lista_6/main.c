#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
     srand(time(NULL));

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

    printf("\nO Endereço do ponteiro com refencia na variavel double %lf é 0x%p. Essa variável ocupa %d bytes.",*ponteiro_double,&ponteiro_double,sizeof(ponteiro_double));




}
