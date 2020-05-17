#include <stdio.h>
#include <stdlib.h>

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


int main()
{

    int num1,num2,num3,num4,num5;

    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5); //ENVIA OS PARAMETROS

    funcao_troca_ponteiro(&num1,&num2,&num3,&num4,&num5);



}
