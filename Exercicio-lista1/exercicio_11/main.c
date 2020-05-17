#include <stdio.h>
#include <stdlib.h>

int main()
{
    int celcius,farenhein;

    printf("Digite a temperatura em celcius: ");
    scanf("%d",&celcius);

    farenhein = (celcius * 9/5) + 32;

    printf("Sua temperatura em farenhein e : %d", farenhein);


}
