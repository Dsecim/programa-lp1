#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct linha{
   char disciplina[25];
   char dias[50];
};
struct l_linear{
   struct linha linhas[10];
   int N;
};
void preenche(struct l_linear *l){
    for (int i=0 ; i<3;i++){
       printf("digite disciplina:");
       scanf("%s",l->linhas[i].disciplina);
       printf("digite os dias da semana:");
       scanf("%s",l->linhas[i].dias);
    }
}
void preenche_arq(FILE* f,struct l_linear *ptr){
     int n=getchar();
    for (int i=0;i<3;i++){
        for (int j=0;j<strlen(ptr->linhas[i].disciplina);j++){
               fputc(ptr->linhas[i].disciplina[j],f);
        }
        for (int k=0;k<strlen(ptr->linhas[i].dias);k++){
               fputc(ptr->linhas[i].dias[k],f);
        }
        fputc(n,f);
    }
}

int main(){
   struct l_linear horarios;
   horarios.N=10;
   preenche(&horarios);
   preenche_arq(fopen("/Users/danielareys/test.txt","w"),&horarios);
}
