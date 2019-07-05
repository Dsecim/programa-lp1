#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Pessoa{
   char nome[255];
   int idade;
};

struct cadastro{
  struct Pessoa pessoa;
  int tipo;
  struct cadastro* prox;
};
void le(struct cadastro* l1){
      while(l1!=NULL){
       printf("nome:%s\t,idade:%d\t,tipo:%d\n",(l1->pessoa).nome,l1->pessoa.idade,l1->tipo);
       l1=l1->prox;
     }
}
void escreve_arq(FILE* f,struct cadastro* c,int* qtd){
    fwrite(qtd, sizeof(int),  1,f);
    while(c!=NULL){
      fwrite(&*(c->pessoa).nome, sizeof(char),strlen((c->pessoa).nome)+1,f);
      fwrite(&c->pessoa.idade, sizeof(int),  1,f);
      fwrite(&c->tipo, sizeof(int),  1,f);
      fclose(f);
      c=c->prox;
    }
    printf("/n");
}

void cria(struct cadastro** l, int* qtd){

     struct cadastro* cauda=NULL;
     int n;
     printf("digite valores diferente de -1:\n");
     scanf("%d",&n);
     while(n!=-1 && *qtd<3){
       struct cadastro* caixa=malloc(sizeof(struct cadastro));
       printf("digite o nome:\n");
       scanf("%s",&*(caixa->pessoa).nome);
       printf("digite a idade:\n");
       scanf("%d",&(caixa->pessoa).idade);
       printf("digite o tipo:\n");
       scanf("%d",&caixa->tipo);
       caixa->prox=NULL;
       if (*l==NULL){
           (*l)=caixa;
           cauda=caixa;

       }else{
           cauda->prox=caixa;
           cauda=caixa;
           }
       *qtd=*qtd+1;
       scanf("%d",&n);
       printf("quantidade:%d\n",*qtd);
     }
}




int main(){
      int n =1;
      struct cadastro* cabeca=NULL;
      cria(&cabeca,&n);
      le(cabeca);
      printf("arquivo preenchido\n");
      escreve_arq(fopen("/Users/danielareys/test.bin", "wb"),cabeca,&n);
}
