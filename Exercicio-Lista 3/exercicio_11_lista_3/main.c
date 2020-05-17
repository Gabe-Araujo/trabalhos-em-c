#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{

  setlocale(LC_ALL, "Portuguese");

     int n = 0; //tem de declarar o valor inicial para a funcao n++

    while(n > -1) //repetir enquanto n for menor que 1(infinitas vezes sendo que comeca com 0)
    {

        if(n % 3 == 2 && n % 5 == 3 && n % 7 == 4)
        {
            printf("o numero em comum entre (resto da divisão de n por 3 = 2) e (resto da divisão de n por 5 = 3) e \n(resto da divisão de n por 7 = 4) é %d", n);
            break; //vai parar quando achar o numero correto
        }

        n++; //acrescentara mais 1 no n

    }


}
