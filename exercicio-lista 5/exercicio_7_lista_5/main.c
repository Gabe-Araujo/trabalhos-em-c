#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <locale.h>
#include<time.h>

int gerar_numero(int limite_inferior, int limite_superior)
{

	return  rand() %((limite_superior - limite_inferior + 1) + limite_inferior);
	/* Math.floor(Math.random() * (5 - 3 + 1) + 3);

	 Conseguimos um limite m�nimo (3), mas estoramos o limite m�ximo (5).
	 Podemos resolver isso subtraindo o valor m�nimo (3) do valor m�ximo (5).

	 incluir o n�mero 5 (nosso limite maximo) nos resultados precisamos somar com 1.
     */

}



int main()
{
    setlocale(LC_ALL, "Portuguese");

  /* srand(time(NULL)) objetiva inicializar o gerador de n�meros aleat�rios
  com o valor da fun��o time(NULL). Este por sua vez, � calculado
  como sendo o total de segundos passados desde 1 de janeiro de 1970
  at� a data atual.
  Desta forma, a cada execu��o o valor da "semente" ser� diferente.
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


       printf("o numero gerado entre o intervalo %d � %d sera de : %d",min,max,resultado);
    }







}
