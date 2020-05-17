#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont = 100;
    int fim = 110;


    while(cont < fim ) //enquanto o contador foe menor que o fim
    {
        if(cont % 2 != 0) //se a sobra do contador for diferente de 0/(impar) ira imprimir os numeros
            {
                printf("\n%d", cont);
            }
        cont ++;
    }

}
