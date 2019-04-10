#include <stdio.h>
int eh_primo(int num1){
  int i;
  for (i=2;i<num1;i++){
     if (num1%i==0){
        return 0;
     }
  }
  return 1;
}
int main(void){
   int num;
   printf("digite um num maximo:\n");
   scanf("%d",&num);
   int k=1;
   while (k<=num){
      if (eh_primo(k)){
         printf("numeros primos:%d\n",k);
      }
      k++;
   }
}
