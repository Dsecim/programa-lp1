#include <stdio.h>
void main(void){
        char  notas[5];
        int soma=0;
        int cont =0;
        int i, j;
        for (i=0; i<5; i++){
                printf("digite a nota do aluno:\n");
                scanf("%hhd" , &notas[i]);
                soma+=notas[i];
        }
        printf("media:%f\n" , soma/5.0);
        float media=soma/5.0;

        for (j=0; j<5 ; j++){
            if(notas[j]>media){
                    cont++;
            }
        }
        printf("numero de alunos acima da media:%d\n" , cont);
}
