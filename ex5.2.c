#include <stdio.h>
int compra(float *conta){
  float valor;
  printf("digite o valor do debito:\n");
  scanf("%f", &valor);
  *conta-=valor;
  printf("valor conta:%f\n",*conta);
  return 0;
}
int  main (void){
  float minha_conta1 , minha_conta2;
  float* C;
  printf("digite o saldo da conta1:\n");
  scanf("%f",&minha_conta1);
  printf("digite o saldo da conta2:\n");
  scanf("%f",&minha_conta2);
  if (minha_conta1>minha_conta2){
     C=&minha_conta1;
  }else{
     C=&minha_conta2;
  }
  compra(C);
  printf("minha_conta1:%f , minha_conta2:%f\n",minha_conta1 , minha_conta2);
