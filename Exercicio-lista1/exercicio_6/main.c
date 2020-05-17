#include <stdio.h>
#include <stdlib.h>

int main()
{
    int km_inicial,km_final,litros_abastecidos;

    printf("Digite a Km inicial : ");
    scanf("%d",&km_inicial);

    printf("Digite a Km Final : ");
    scanf("%d",&km_final);

    printf("Digite os Litros abastecidos : ");
    scanf("%d",&litros_abastecidos);

    printf("O gasto do seu veiculo por KM/L E %d", (km_final-km_inicial)/litros_abastecidos );

}
