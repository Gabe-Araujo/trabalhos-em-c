#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");


   char ent_char[50],aux_char[50];


   printf("Digite uma palavra\n");
   gets(ent_char);



   for(int i=0;i<strlen(ent_char);i++)
   {

       ent_char[i] = toupper(ent_char[i]);
   }


   strcpy(aux_char,ent_char); //copia da segunda para primeira variavel


   strrev(aux_char); //inverte os caracteres



   if(strcmp(ent_char,aux_char)== 0) //se as palavras forem iguais o valor sera 0
   {
       printf("A palavra é palíndromo");
   }
   else
   {
       printf("Não e um palíndromo");
   }


}
