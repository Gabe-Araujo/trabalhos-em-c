#include <stdio.h>
#include <stdlib.h>

int main()
{


 int tamanho_vetor=10,vetor[tamanho_vetor],i=0;

 int aux=0;



    printf("Digite o tamanho do vetor ");
    scanf("%d",&tamanho_vetor); //ira definir o tamanho do vetor


    for(int i=0;i<tamanho_vetor;i++) //i comeca com 0,vai repetir enquanto for menor que o numero digitado para igualar as casas do vetor declaradas pelo usuario anteriormente
        {
            printf("Digite o valor ");
            scanf("%d",&vetor[i]);


           for (int j = 0; j < tamanho_vetor; j++) //vai fazer a comparação de todos os vetores com o valor de i=0 e assim sucessivamente
                {
                    if (vetor[i] < vetor[j]) //vetor atual e menor que o vetor anterior
                    {
                    //aqui acontece a troca, do maior cara  vaia para a direita e o menor para a esquerda
                        aux = vetor[i];
                        vetor[i] = vetor[j];
                        vetor[j] = aux;
                    }


                 }

        }

            printf("Segundo menor valor é : %d",vetor[1]); //mostra o menor valor


}
