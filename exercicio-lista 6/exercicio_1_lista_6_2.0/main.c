#include <stdio.h>
#include <stdlib.h>

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
         printf("%d e maior que %d que é maior que %d",*c,*b,*a);//asterisco mostra os valores onde apontam os ponteiros
    }



}



int main()
{
   int valor1,valor2,valor3;

   printf("Digite 3 valores separados por espaço \n");
   scanf("%d %d %d", &valor1, &valor2, &valor3);


   funcao_maior_parametro(&valor1,&valor2,&valor3);//com o &(e-comercial) e passado por /*parametro*/

}
