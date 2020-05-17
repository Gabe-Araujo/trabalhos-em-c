#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>


void funcao_distancia(int *num1,int *num2)
{
    int dados,i=0; //repetição

    int dado_x,dado_y,resultado; //valores gerados aleatoriamente

    printf("Digite quantos pontos deseja calcular");
    scanf("%d",&dados);


    while(i<dados)
    {
          dado_x= rand() %100;
          dado_y= rand() %100;

          resultado = (*num1 - dado_x) + (*num2 - dado_y);


          if(resultado < -1)
          {
              resultado = resultado * -1; //distancia possitiva
          }

        printf("\n a distancia dos pontos gerados aleatoriamente:  %d", resultado);



        dados--;
    }




}




int main()
{
     setlocale(LC_ALL, "");


     srand(time(NULL));

    int x_inicial,y_inicial;
    int x_final,y_final;
    int resultado;


    printf("Digite os ponto x e y inicial\n");
    scanf("%d %d",&x_inicial,&y_inicial);


    printf("Digite os ponto x e y final\n");
    scanf("%d %d",&x_final,&y_final);


    funcao_distancia(&x_inicial,&y_inicial);


    resultado = (x_inicial - x_final) + (y_inicial - y_final);

     if(resultado < -1)
          {
              resultado = resultado * -1; //distancia possitiva
          }


    printf("\n a diferenca entre as distancias digitadas é %d", resultado);


}
