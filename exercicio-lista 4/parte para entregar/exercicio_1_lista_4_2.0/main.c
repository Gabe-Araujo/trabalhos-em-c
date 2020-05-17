#include <stdio.h>

 int main()
 {

   int aux = 0,n,i=0;
   int a = 0;
   int b = 1;

    printf("Digite um numero para comecar a sequencia de fibbonati : ");
    scanf("%d", &n);


   while(i <= n)
   {

    printf("%d\n",aux);

       aux = a + b; //0 + 1 //1 + 1//1+2// 2 +3//3+5//13//
       a = b; // 1 // 1 // 2// 3//5//
       b = aux;//1// 2// 3//5//8


       i++;
   }


 }


