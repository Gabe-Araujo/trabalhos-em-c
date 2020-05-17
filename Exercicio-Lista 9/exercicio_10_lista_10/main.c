#include <stdio.h>
#include <string.h>

int funcao_invertida(char ent_strg[50])
{

  int i=0;
  int tamanho = strlen(ent_strg);
  int resposta;
  char str2[50];

  if(i<tamanho)
  {
      str2[i] = ent_strg[i]; //1 e 1
      i++;
      funcao_invertida(&ent_strg[i]);
  }

    str2[i] = 0;

    printf("%s",str2);





}




int main()
{
    char str1[50];
    int resultado;
    printf("Digite uma palavra\n");
    gets(str1);

    resultado = funcao_invertida(str1);


    return 0;
}
