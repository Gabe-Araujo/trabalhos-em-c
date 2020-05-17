#include <stdio.h>
#include <stdlib.h>


int funcao_maior_ponteiro(int a,int b,int c)
{

int *p,*p2,*p3;

p=a;
p2=b;
p3=c;


printf("%p %p %p",a,b,c);



}


int main()
{
 int *p , i;//*(asterisco)p declara a variavel



  printf("Digite um valor \n");
  scanf("%d", &i);

  p = &i; // aponta o ponteiro do valor de i=4 em p ou seja p aponta o valor para o ponteiro de i

   printf("valor e %p e %p",&p,&i); //*p mostra o valor de p
   //&i mostra o ponteiro




}
