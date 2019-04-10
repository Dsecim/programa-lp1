#include <stdio.h>
int main (void){
   int num1,num2;
   printf("digite o num1:\n");
   scanf("%d", &num1);
   printf("digite o num2:\n");
   scanf("%d", &num2);
   printf("numeros:%d , %d \n", num1 , num2);
   int* p;
   if (num1>num2){
      p = &num1;
   }else{
      p = &num2;
   }
   *p = *p - 50;
   printf("novos valores:%d ,%d\n", num1 , num2);
}
