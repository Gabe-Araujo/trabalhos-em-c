#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <locale.h>
#include<time.h>

int gerar_numero(int limite_inferior, int limite_superior)
{

	return  rand() %((limite_superior - limite_inferior + 1) + limite_inferior);
	/* Math.floor(Math.random() * (5 - 3 + 1) + 3);

	 Conseguimos um limite mínimo (3), mas estoramos o limite máximo (5).
	 Podemos resolver isso subtraindo o valor mínimo (3) do valor máximo (5).

	 incluir o número 5 (nosso limite maximo) nos resultados precisamos somar com 1.
     */

}



int main()
{
    setlocale(LC_ALL, "Portuguese");

  /* srand(time(NULL)) objetiva inicializar o gerador de números aleatórios
  com o valor da função time(NULL). Este por sua vez, é calculado
  como sendo o total de segundos passados desde 1 de janeiro de 1970
  até a data atual.
  Desta forma, a cada execução o valor da "semente" será diferente.
  */
  srand(time(NULL));

  int min,max,resultado;



  printf("Digite o valor minimo\n");
  scanf("\n%d",&min);

  printf("Digite o valor maximo\n");
  scanf("\n%d",&max);




    if(min > max)
    {
        printf("Digite um valor valido");
    }
    else
    {
       resultado = gerar_numero(min,max);


       printf("o numero gerado entre o intervalo %d é %d sera de : %d",min,max,resultado);
    }







}
