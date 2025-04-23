#include <stdio.h>


void update(int *a,int *b) {
   // Complete this function  
   int *temporaria;
   *temporaria = *a;         //para fazer duas contas com *a
   
   *a = *a + *b;             //soma
   if (*temporaria >= *b) {           //devolver o modulo
       *b = *temporaria - *b;
   } else {
       *b = *b - *temporaria;
   }  
}


int main() {
   int a, b;
   int *pa = &a, *pb = &b;
  
   scanf("%d %d", &a, &b);
   update(pa, pb);
   printf("%d\n%d", a, b);


   return 0;
}