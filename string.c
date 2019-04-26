#include<stdio.h>
#include<stdlib.h>
void  join(char f[] ,char f1[],char f2[]){
  int k=0;
  while (f1[k]!='\0'){
       f[k]=f1[k];
       k++;
  }
  int z=0;
  while (f2[z]!='\0'){
      f[k+z]=f2[z];
      z++;
  }
  f[k+z+1]='\0';
}
int strlen2(char f[]){
   int k=0;
   while ( f[k]!='\0'){
         k++;
   }
   return k;
}
int main(){
   char frase1[]="dani";
   char frase2[]="ela";
   int tam1 = strlen2(frase1);
   int tam2=strlen2(frase2);
   int tam_nova=tam1+tam2+1;
   char  nova[tam_nova];
   join(nova,frase1,frase2);
   printf("%s\n",nova);

}
