#include<stdio.h>
#include<stdlib.h>
struct caixa{
    int valor;
    struct caixa* prox;
};
void exibe(struct caixa* c){
    while(c!=NULL){
       printf("%d\t", c->valor);
       c=c->prox;
    }
    printf("/n");
}
void cria(struct caixa** l){

     struct caixa* cauda=NULL;

     int n;
     printf("digite valores diferente de -1:\n");
     scanf("%d",&n);
     while(n!=-1){
       struct caixa* caixa=malloc(sizeof(struct caixa));
       caixa->valor=n;
       caixa->prox=NULL;
       if (*l==NULL){
           (*l)=caixa;
           cauda=caixa;
       }else{
           cauda->prox=caixa;
           cauda=caixa;
       }
       scanf("%d",&n);
     }
}
void intercala(struct caixa* l1,struct caixa* l2,struct caixa** l3){
      struct caixa* cauda=NULL;
      while (l1!=NULL && l2!=NULL){
          struct caixa* caixa1=malloc(sizeof(struct caixa));
          struct caixa* caixa2=malloc(sizeof(struct caixa));
          caixa1->valor=l1->valor;
          caixa1->prox=caixa2;
          caixa2->valor=l2->valor;
          caixa2->prox=NULL;

          if (*l3==NULL){
              (*l3)=caixa1;
              cauda=caixa1->prox;
          }else{
              cauda->prox=caixa1;
              cauda=caixa1->prox;
          }
          l1=l1->prox;
          l2=l2->prox;
    }
}
int main(){
    struct caixa* cabeca1 = NULL;
    struct caixa* cabeca2 = NULL;
    struct caixa* cabeca3 = NULL;
    cria(&cabeca1);
    exibe(cabeca1);
    cria(&cabeca2);
    exibe(cabeca2);
    intercala(cabeca1,cabeca2,&cabeca3);
    exibe(cabeca3);
}
