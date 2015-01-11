#include <stdio.h>
int main(){
    float sal,newS;
    char p='%';
    do{
        scanf("%f",&sal);
    }while(sal<0);
    if(sal<=400){
        newS = sal+sal*0.15;
        printf("Novo salario: %.2f\n",newS);
        printf("Reajuste ganho: %.2f\n",newS - sal);
        printf("Em percentual: 15 %c\n",p);
    }
    else if(sal<=800){
        newS = sal+sal*0.12;
        printf("Novo salario: %.2f\n",newS);
        printf("Reajuste ganho: %.2f\n",newS - sal);
        printf("Em percentual: 12 %c\n",p);
    }
    else if(sal<=1200){
        newS = sal+sal*0.1;
        printf("Novo salario: %.2f\n",newS);
        printf("Reajuste ganho: %.2f\n",newS - sal);
        printf("Em percentual: 10 %c\n",p);
    }
    else if(sal<=2000){
        newS = sal+sal*0.07;
        printf("Novo salario: %.2f\n",newS);
        printf("Reajuste ganho: %.2f\n",newS - sal);
        printf("Em percentual: 7 %c\n",p);
    }
    else{
        newS = sal+sal*0.04;
        printf("Novo salario: %.2f\n",newS);
        printf("Reajuste ganho: %.2f\n",newS - sal);
        printf("Em percentual: 4 %c\n",p);
    }
    return 0;
}
