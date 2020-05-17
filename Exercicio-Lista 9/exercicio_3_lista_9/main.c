#include <stdio.h>
#include <stdlib.h>



int resultado = 0 ,i = 0,  a[5],menor_valor=999; //variaveis globais


int soma(int *p)
{

    if(i<5){ // aqui utilizei a condicional if, mas da certo tbm se utilizar o laço de repetição while.
        if(*p < menor_valor)
        menor_valor = *p; //ira igualar ao maior valor
        i++; // encrementa i para logo após chamar a função soma passando o endereço do proximo elemento do array
        soma(&a[i]); // recursão manda o enderecamento do vetor global com o valor de i incrementado
    }
    return menor_valor;
}


void main()
{
    int retorno;
   printf("Digite 5 valores:\n");
   for(int i = 0;i<5;i++){
        scanf("%d", &a[i]);
   }
   retorno = soma(a);//nao precisa colocar o &(e comercial) pois o ponteiro ja e uma referencia
   printf("-----------\nResultado: %d\n", retorno);
}
