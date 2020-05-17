#include <stdio.h>
#include <stdlib.h>

int funcao_area_trapezio(int *base_menor,int *base_maior,int *altura) //recebimento dos parametros por referencia - ponteiros
{

    return ((*base_maior + *base_menor) * *altura)/2 ;//comparação dos valores referentes aos parametros de memoria enviados(variaveis)

}




int main()
{
    int base_menor,base_maior,altura,resultado;

    printf("Calcular a area do trapezio\n");

    printf("Digite a area da base menor e maior\n");
    scanf("%d %d",&base_menor,&base_maior);

    printf("Digite a altura\n");
    scanf("%d", &altura);



    resultado = funcao_area_trapezio(&base_menor,&base_maior,&altura); //envio dos parametros

    printf("o valor da areá do trapezio é %d",resultado);


}
