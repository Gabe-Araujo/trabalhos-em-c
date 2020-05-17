#include<math.h>
#include<stdio.h>
#include<string.h>

int main(){

	int  i, menor10 = 0, entre10e20 = 0, maior20 = 0;
	int codigo;
	float precocompra, precovenda, calculo, totalvenda, totalcompra, lucro, aux;



	do{
		i++;

		printf("\nDigite o codigo do produto ");
		scanf("%d",&codigo);
		printf("\nDigite o preco de compra ");
		scanf("%f",&precocompra);
		printf("\nDigite o preco de venda: ");
		scanf("%f",&precovenda);

		totalcompra += precocompra;
		totalvenda += precovenda;
		lucro = totalvenda - totalcompra;

		aux = precovenda - precocompra; //lucro
		calculo = (float)(100 * aux) / precocompra; //(100 * lucro) / preco compra = porcentagem

			if (calculo < 10){
				menor10++;
			}
			else if (calculo >= 10 && calculo <= 20){
				entre10e20++;
			}
			else if (calculo > 20){
				maior20++;
			}

}while(codigo>0);

		printf("%d com lucro < 10%%\n",menor10);
		printf("%d com lucro >= 10%% ou lucro <= 20%%\n",entre10e20);
		printf("%d com lucro > 20%%\n",maior20);
		printf("Total de compra = %.2f\n",totalcompra);
		printf("Total de venda = %.2f\n",totalvenda);
		printf("Lucro = %.2f\n",lucro);



}
