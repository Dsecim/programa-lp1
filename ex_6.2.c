#include<stdio.h>
void preenche(int arr[4][4],int l , int c){
   for (int i=0; i<l; i++){
      for (int j=0;j<c;j++){
          scanf("%d",&arr[i][j]);
      }
  }
}


int  main(void){
   int l,c;
   printf("digite o tam  de l:\n");
   printf("digite o tam  de c:\n");
   scanf("%d%d",&l,&c);
   int arr[4][4];
   preenche(arr,l,c);
   for (int i=0; i<4; i++){
      for (int j=0;j<4;j++){
          printf("arr%d%d=%d\t",i,j,arr[i][j]);
      }
   }
   return 0;
}
