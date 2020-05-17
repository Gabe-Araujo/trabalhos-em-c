 int somar (int n1)
 {
     int i,n2,soma = 0;

     i = 3;

    while(i >= 0)
    {

       printf("Digite um numero");
       scanf("%d", &n1);

        n1 = n2;

        soma = n2 + soma;

        n2 = 0;

        i--;
    }
      printf("%d", soma);


 }

 int main()
 {
     int n1,n2,resultado;

     scanf("%d", &n1);

     somar(n1);


 }
