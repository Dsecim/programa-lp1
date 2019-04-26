#include<stdio.h>
void  troca(int *x,int *y){
   int temp;
   temp = *x;

   *x=*y;
   *y=temp;
}


void  main(void){
  int x,y;
  printf("digite dois valores:\n ");
  scanf("%d%d",&x,&y);
  troca(&x,&y);
  printf("%d %d\n", x , y);
}
