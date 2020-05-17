#include <stdio.h>
#include <stdlib.h>

int main()
{

   int massa_inicial = 0,massa_final = 0,aux ;
   int segundos = 0,minutos,horas ;



   printf("Digite o valor da massa inicial\n ");
   scanf("%d",&massa_inicial);

     //atribui o valor da massa final com a inicial

   //vai parar de executar  quando o valor for menor que 0.5

    massa_final = massa_inicial;

    aux = massa_inicial;

  while(massa_final > 0.4)
  {

      segundos = 50 + segundos;  //e somado 50s a cada processo de de divisão

      aux = aux/2; //divide o valor por 2 -> aux tem o valor atribuido pela massa inicial

      massa_final = aux; //massa final recebe  o valor do aux pela metade

      aux = massa_final; //aux recebe o valor da massa final para divir pela metade novamente.




  }


     minutos = segundos/60;

     horas = minutos/60;

    printf("\n tempo em minutos: %d\n",minutos);

    printf("O tempo em horas %d \n",horas);








}
