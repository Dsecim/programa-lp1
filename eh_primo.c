#include <stdio.h>
  
int main (void){
  int num1;
  printf ("digite um numero:\n");
  scanf("%d",&num1);
  int i;
  for (i=2;i<num1;i++){
     if (num1%i==0){
        printf("nao eh primo\n");
        return 0;
     }
  }
  printf("eh primo\n");
  return 1;
}
