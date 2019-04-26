#include<stdio.h>
void preenche(int *pxs, int num){
   int i;
   for (i=0;i<num;i++){
       scanf("%d",(pxs+i));
   }
}
float media(int *p, int qtd){
   int soma=0;
   for (int i=0;i<qtd;i++){
       soma+=*(p+i);
   }
   float media=(soma/qtd);
   return media;
}

int main(void){
  int n;
  printf("digite o tam do vetor:\n");
  scanf("%d",&n);
  int xs[n];
  preenche(xs,n);
  for (int i=0;i<n;i++){
      printf("xs%d=%d\t",i,xs[i]);
  }
  printf("\n");
  printf("media dos alunos=%f\n",media(xs,n));
