#include <stdio.h>
  
int main(void){
     char temps[10];
     int i,j;
     int soma , cont =0;
     for (i=0;i<10; i++){
         printf("digite a temperatura:\n");
         scanf("%hhd", &temps[i]);
         soma = soma + temps[i];
     }
     float media= (soma/10);
     for (j=0; j<10; j++){
         if (temps[j]>media){
              cont++;
         }
     }
     printf("num de alunos acima da med:%d\n", cont);
     return 0;
}
