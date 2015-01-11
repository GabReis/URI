#include <stdio.h>
int main(){
    int num1,num2,qtd1,qtd2;
    float val1,val2,res;
    scanf("%d %d %f",&num1,&qtd1,&val1);
    scanf("%d %d %f",&num2,&qtd2,&val2);
    res=qtd1*val1 + qtd2*val2;
    printf("VALOR A PAGAR: R$ %.2f\n",res);
    return 0;
}
