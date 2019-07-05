#include<stdio.h>
#include<string.h>
struct pessoa {
  char nome[10];
  int idade;
  int peso;
};
void preenche(struct pessoa l[],int n){
    for (int i=0;i<n;i++){
       printf("nome:");
       scanf("%s",l[i].nome);
       printf("idade:");
       scanf("%d",&l[i].idade);
       printf("peso:");
       scanf("%d",&l[i].peso);
    }
}
void escreve_arq(FILE* f,struct pessoa p[], int pos){
      fwrite(p[pos].nome, sizeof(char),strlen(p[pos].nome)+1,f);
      fwrite(&p[pos].idade, sizeof(int),  1,f);
      fwrite(&p[pos].peso, sizeof(int),  1,f);
      fclose(f);
}
void le_arq(FILE* f){
        struct pessoa pessoa;
        int c = fgetc(f);
        int j;
        for (j=0; c!='\0'; j++) {
            (pessoa).nome[j]= c;
            c = fgetc(f);
        }
        (pessoa).nome[j] = '\0';
        fread(&pessoa.idade, sizeof(int), 1, f);
        fread(&pessoa.peso, sizeof(int), 1, f);
        printf("Pessoa %d %s\n", pessoa.idade, pessoa.nome);

}


int main(){
   int N;
   printf("digite o num de pessoas:");
   scanf("%d",&N);
   struct pessoa lista[N];
   preenche(lista,N);
   int pos;
   printf("digite pos:\n");
   scanf("%d",&pos);
   printf("%s,%d,%d",lista[pos].nome,lista[pos].idade,lista[pos].peso);
   escreve_arq(fopen("/Users/danielareys/test.bin", "wb"),lista,pos);
   le_arq(fopen("/Users/danielareys/test.bin", "rb"));
}
