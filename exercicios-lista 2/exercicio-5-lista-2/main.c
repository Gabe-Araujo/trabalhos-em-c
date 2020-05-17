    #include <stdio.h>
    #include <stdlib.h>
    #include <ctype.h>//biblioteca p/ as funções isalpha isdigit toupper tolower
    int main(void)
    {
      char letra;
      char y ='y';


      printf("Digite um caracter qualquer: ");
      scanf("%c",&letra); //%c para char %s para char

      //isalpha verifica se é uma letra minuscula
      if (islower(letra)) //VERIFICA SE A LETRA E MINUSCULA
      {
        printf("\nVoce digitou uma letra minuscula %c \n\n",letra);

      }
      else if(isupper(letra)) // VERIFICA SE A LETRA E MAIUSCULA
      {
          printf("\nVoce digitou uma letra maiusculua");
      }
      else if(isalnum(letra)) //VERIFICA SE E UM CARACTER ALFA NUMERICO
      {
         printf("\n Voce digitou um numero ");
      }
      else
      {
        printf("Voce nao digitou uma letra!!! nem um numero !!! \n");
      }







}

