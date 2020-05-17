#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include <locale.h>
#include<time.h>


/*
Descrição:recebe 3 numeros e mostra o numero do meio
Entrada:entrada de 3 variaveis int: num1,num2,num3
saida:o numero do meio : int

*/
int funcao_valor_meio(int n1,int n2, int n3)
{
    printf("O numero do meio é : %d",n2);
}

/*
Descrição:recebe 10 numeros digitados pelo usuario e mostra a media
Entrada:entrada de 10 variaveis do tipo inteiro
saida:retorna a media

*/

int media_10()
{
    int soma;
    int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10;

    printf("Digite 10 numeros \n");
    scanf("%d %d %d %d %d %d %d %d %d %d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10);

    soma = num1 + num2 + num3 +num4 +num5 + num6 +num7 + num8 + num9 +num10;

     printf("A media dos numeros é :%d",soma/10);
}

/*
Descrição:recebe 2 valores boleanos(0,1)
e valida a entrada caso digite errado e faz a validação
da tabela verdade da operação xor

Entrada:entrada de 2 variaveis do tipo bool(0,1) que serão convertidas na variaveis a,b em (true e false)
saida:0 se for false(1,1) ou (0,0) ou 1 se for true baseado na operação xor (1,0) e (0,1)

*/

bool funcao_xor(bool num1,bool num2)
{
    return num1 ^ num2; //faz a operacao xor (que para retornar verdadeiro '1' tem de ser 0/1 ou 1/0 e nunca 1/1 ou 0/0
}


/*
Descrição:calcula os 20 primeiros numeros da serie 100/0 a 99/1 ...
Entrada:não possui entrada de usuario e sao valores double(aumentando=1;diminuindo=100) e o int i=1 que vai aumentando
possibilitando a execucao da estrutura de repeticao while
saida:a soma das divisoens assim que são adicionadas a soma(executadas no while)

*/


//funcao 4
double funcao_maluca()
{
   double aumentando = 1,diminuindo = 99,resultado;
    int i = 1;


    while(i <= 20)
    {
        resultado = diminuindo/aumentando + resultado;


        diminuindo --;
        aumentando ++;
        i++;

       printf("\n%f",resultado);
    }

}



/*
Descrição:faz a soma do somatorio solicitado
Entrada:não possui entrada de usuario, e os valores ja são fixos
x = 1(aumenta +1) y=225 que e diminuido pela variavel z=29 que dessacrece 2 unidades por vez
saida:retorna o valor da somatoria :19078,849609

*/
//função 5
float funcao_somatorio()
{
  float x = 1,y=225,z= 29,soma = 0;

  while(z >= 2)
  {
    x = x * 2;
    y = y - z;

    z = z -2;

    soma = (x/y) + soma;

    printf("\n%f",x/y);
  }
    printf("\n A somatoria é %f", soma);

}

//fim da funcao 5


/*
Descrição:recebe o valor do usuario para dar sequencia no calculo do seno
Entrada:num_funcao:6 //
e atribuida ao float x //
que e acrescentado no dividendo e na comparaçao do for//
dividendo sempre e acrecido de 2 x=(valor digitado pelo usuario)//para representar o numero elevado
dividor = 3 e acrescido de 2 digitos durante a execucao do for// para executar a divisao
aux = -1 // serve para fazer a inversão de sinal que a função exige.
saida:retorna a soma solicitada + o acrescimo do x inicial da funcao que nao pode ser incluida no for
*/

//função 6
float funcao_seno(float x)
{
    float dividendo,divisor = 3,resultado = 0,aux = -1 ;

    dividendo = x * x;




   for(int i =0; i <=x;i++) //repetir quantas vezes o x for digitado se for 5/ vai ser executado 5 vezes;
   {
      resultado = ((x*dividendo/funcao_seno(divisor))*aux) + resultado ;// x^3/3  == x^5/5 == x^7/7 + valor anterior
    //aux esta invertendo pois sempre sera soma e subtracao

      dividendo = x * x * dividendo;
      divisor = divisor + 2;
      aux = aux * -1;

      //esta somando pois so precisa dessa soma 1 vez

   }
       return resultado + x;

}

int funcao_fatorial(int valor1)
{
    int resposta;

    if(valor1 == 1)
    {
        resposta=1;
    }
    else
    {
        resposta = valor1 * funcao_fatorial(valor1 - 1);
    }

    return resposta;

}

/*
Descrição:recebe 2 numeros digitados pelo usuario e gera neste intervalo
Entrada:
2 valores inteiros pelo usuario:min / max
subtrai o valor maximo e minimo e acrescenta mais 1 para ir na geração do numero digitado
e soma depois o limite inferior ao calculo.

utiliza a função rand para gerar numeros entre o intervalo.

saida:retorna um valor aleatorio entre os numeros digitados

*/

//funcao 7
int gerar_numero(int limite_inferior, int limite_superior)
{

	return  rand() %((limite_superior - limite_inferior + 1) + limite_inferior);
	/* Math.floor(Math.random() * (5 - 3 + 1) + 3);

	 Conseguimos um limite mínimo (3), mas estoramos o limite máximo (5).
	 Podemos resolver isso subtraindo o valor mínimo (3) do valor máximo (5).

	 de 0 a 1 por exemplo para incluir o número 5 (nosso limite maximo) nos resultados precisamos somar com 1.
     */

}

//final funcao 7


/*
Descrição:recebe um numero digitado pelo usuario e torna ele por extenso
Entrada:recebe uma variavel do tipo string e seu numero baseado em seu vetor
ex:vetor[0] reais ; vetor[1] virgula ; vetor[2] dezenas(centavos); vetor[3] unidades(centavos)
saida:retorna o numero por extenso com 2 casas decimais

*/

//inicio funcao 8
void funcao_numero_extenso()
{
        char valor[4];

     printf("Informe a numero: ");
     scanf("%s",valor); //não precisa de & para string so para char




     switch(valor[0]){
    case '1':
            printf("um real");
        break;
    case '2': printf("dois reais");
        break;
    case '3': printf("tres reais");
        break;
    case '4': printf("quatro reais");
        break;
    case '5': printf("cinco reais");
        break;
    case '6': printf("seis reais");
        break;
    case '7': printf("sete reais");
        break;
    case '8': printf("oito reais");
        break;
    case '9': printf("nove reais");
        break;

                    }






        switch(valor[2]){
    case '1':
            printf(" e dez");
        break;
    case '2': printf(" e vinte ");
        break;
    case '3': printf(" e trinta ");
        break;
    case '4': printf(" e quarenta ");
        break;
    case '5': printf(" e cinquenta ");
        break;
    case '6': printf(" e sessenta ");
        break;
    case '7': printf(" e setenta ");
        break;
    case '8': printf(" e oitenta ");
        break;
    case '9': printf(" e noventa ");
        break;
    case '0': printf(" ");
        break;

        }

      switch(valor[3]){
    case '1':
            printf(" e um centavos");
        break;
    case '2': printf(" e dois centavos ");
        break;
    case '3': printf(" e tres centavos ");
        break;
    case '4': printf(" e quatro centavos ");
        break;
    case '5': printf(" e cinco centavos ");
        break;
    case '6': printf(" e seis centavos ");
        break;
    case '7': printf(" e sete centavos ");
        break;
    case '8': printf(" e oito centavos ");
        break;
    case '9': printf(" e nove centavos ");
        break;
    case '0': printf(" centavos ");
        break;

        default :
    printf ("centavos!\n");
     break;

        }

}

//final funcao 8




int main()
{
    setlocale(LC_ALL, "Portuguese"); //coloca os caracteres alfanumericos latinos


    char opcao;
    int escolha;
    int num1,num2,num3;

    //função 3
    int a,b;
    bool resultado;
    //função 3

    //funcao 6
    float num_funcao6,resultado_funcao6;
    //funcao 6

    //funcao 7
    int min,max,resultado_funcao7;
    //funcao 7



    srand(time(NULL));

    while(escolha != 9)
    {
     printf("\n\n ----------------------- ");

    printf("\n 1 - função que recebe três númerose retorne o elemento do meio ");
    printf("\n 2 - função que recebe 10 números e faz a medía dos números. ");
    printf("\n 3 - funcao que retorna o  valor verdade  da operação XOR de dois valores boleanos (A  e  B)  ");
    printf("\n 4 - funcao que soma dos 20 primeiros números da série ");
    printf("\n 5 - função que faz o somatorio delimitado ");
    printf("\n 6 - função que calcula o seno com o valor informado ");
    printf("\n 7 - função que recebe dois inteiros(min e max) e retonar um valor aleatório ");
    printf("\n 8 - função escreva  o valor por extenso . ");
    printf("\n 9 - Digite nove para sair . ");
    printf("\n\n  uma opcao: ");
    scanf("%d",&escolha);


    switch(escolha)
        {
        case 1:
        printf("Insira tres numeros: ");
        scanf("%d %d %d", &num1, &num2, &num3);
        funcao_valor_meio(num1,num2,num3);
        break;

        case 2:
            media_10();
            break;

        case 3:
            printf("Digite um valor boleano :  ");
            scanf("\n%d", &a);

            printf("Digite o segundo valor booleano: ");
            scanf("\n%d", &b);

                //valida as opcoens
                if(a == 1)
                {
                    a = true;
                }
                else if(a == 0)
                {
                    a = false;
                }
                else{
                    printf("Digite uma opção valida \n");
                }

                if(b == 1)
                {
                    b = true;
                }
                else if(b == 0)
                {
                    b = false;
                }
                else{
                    printf("Digite um numero valido \n");
                }

                resultado = funcao_xor(a,b);

                printf("%d",resultado);
                break;

                //fim da função 3

          case 4:funcao_maluca();
                break;
                //fim da função 4

        case 5:funcao_somatorio();
              break;

              //FIM DA FUNCAO 5

        case 6:
            printf("Digite um valor \n");
            scanf("%f", &num_funcao6);

            resultado_funcao6 = funcao_seno(num_funcao6);

            printf("O valor do seno digitado é %0.4f",resultado_funcao6);

            break;
            //FIM DA FUNCAO 6

        case 7:

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
                   resultado_funcao7 = gerar_numero(min,max);

                   printf("o numero gerado entre o intervalo %d é %d sera de : %d",min,max,resultado_funcao7);
                }

            break;

        case 8: funcao_numero_extenso();
            break;

        case 9:
            printf("");
        break;

        default:
            printf("Digite um valor valido");


        }

    if(escolha == 9)
    {
        printf("Obrigado por usar o programa.");
    }





    } //vai executar enquanto for diferente do numero.





}
