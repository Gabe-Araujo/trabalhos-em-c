#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{

    double n, parteinteira,partedecimal;

    scanf("%lf",&n);

    parteinteira = floor(n); //função que separa inteira da decimal
                            /*O N possui a parte total e vai separar pelo comando floor(n) da parte decimal
                                      e vai pegar o n(total) - a parte inteira que vai dar a decimal;*/
    partedecimal = n - parteinteira;





    //parte inteira
    if(parteinteira == 1)
    {
        printf("um real");

    }
    else if(parteinteira == 2)
    {
        printf("dois reais");
    }
    else if(parteinteira == 3)
    {
        printf("tres reais");
    }
    else if(parteinteira == 4)
    {
        printf("quatro reais");
    }
    else if(parteinteira == 5)
    {
        printf("cinco reais");
    }
    else if(parteinteira == 6)
    {
        printf("seis reais");
    }
    else if(parteinteira == 7)
    {
        printf("sete reais");
    }
    else if(parteinteira == 8)
    {
        printf("oito reais");
    }
    else if(parteinteira == 9)
    {
        printf("nove reais");
    }
    else if(parteinteira == 10)
    {
        printf("dez reais");
    }
    else if(parteinteira == 11)
    {
        printf("onze reais");
    }
    else if(parteinteira == 12)
    {
        printf("doze reais");
    }
    else if(parteinteira == 13)
    {
        printf("treze reais");
    }
    else if(parteinteira == 14)
    {
        printf("quatorze reais");
    }
    else if(parteinteira == 15)
    {
        printf("quinze reais");
    }
    else if(parteinteira == 16)
    {
        printf("dezesseis reais");
    }
    else if(parteinteira == 17)
    {
        printf("dezessete reais");
    }
    else if(parteinteira == 18)
    {
        printf("dezoito reais");
    }
    else if(parteinteira == 19)
    {
        printf("dezenove reais");
    }
    else if(parteinteira == 20)
    {
        printf("vinte reais");
    }
    else if(parteinteira == 21)
    {
        printf("vinte um reais");
    }
    else if(parteinteira == 22)
    {
        printf("vinte e dois reais");
    }
    else if(parteinteira == 23)
    {
        printf("vinte e tres reais");
    }
    else if(parteinteira == 24)
    {
        printf("vinte e quatro reais");
    }
    else if(parteinteira == 25)
    {
        printf("vinte e cinco reais");
    }
    else if(parteinteira == 26)
    {
        printf("vinte e seis reais");
    }
    else if(parteinteira == 27)
    {
        printf("vinte e oito reais");
    }
    else if(parteinteira == 28)
    {
        printf("vinte e nove reais");
    }

    //Parte inteira



     if(partedecimal == 0.1)
    {
        printf(" dez ");
    }

      if(partedecimal == 0.2)
    {
        printf(" vinte ");
    }

      if(partedecimal == 0.3)
    {
        printf(" trinta ");
    }
      if(partedecimal == 0.4)
    {
        printf(" quarenta ");
    }
      if(partedecimal == 0.5)
    {
        printf(" cinquenta ");
    }
      if(partedecimal == 0.6)
    {
        printf(" sessenta ");
    }
      if(partedecimal == 0.7)
    {
        printf(" setenta ");
    }
      if(partedecimal == 0.8)
    {
        printf(" oitenta ");
    }
     if(partedecimal == 0.9)
    {
        printf(" oitenta ");
    }



}
