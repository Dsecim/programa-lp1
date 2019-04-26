#include <stdio.h>
struct ponto{
  int x;
  int y;
};
void preenche(struct ponto* p){
    printf("digite o valor de x:/n");
    scanf("%d",&p->x);
    printf("digite o valor de y:/n");
    scanf("%d",&p->y);
}
void imprime(struct ponto* i){
    printf("(x,Y)=(%d,%d)\n",i->x,i->y);
}
void preenche_vetor(struct ponto pontos[],int n){
   for (int i=0;i<n;i++){
     printf("x=");
     scanf("%d",&(pontos+i)->x);
     printf("y=");
     scanf("%d",&pontos[i].y);
   }
}
void imprime_vetor(struct ponto pontos[],int n){
    for (int i=0;i<10;i++){
       printf("pos%d(x,y)=(%d,%d)\n",i,pontos[i].x,pontos[i].y);
    }
}
int main(){
  struct ponto p1;
  preenche(&p1);
  imprime(&p1);
  struct ponto pontos[10];
  printf("%p\n",pontos);
  preenche_vetor(pontos,10);
  imprime_vetor(pontos,10);

}
