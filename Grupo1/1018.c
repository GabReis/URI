#include <stdio.h>
int main(){
    int val,cont=0;
    scanf("%d",&val);
    printf("%d\n",val);
    while(val>=100){
        val=val-100;
        cont++;
    }
    printf("%d nota(s) de R$ 100,00\n",cont);
    cont=0;
    while(val>=50){
        val=val-50;
        cont++;
    }
    printf("%d nota(s) de R$ 50,00\n",cont);
    cont=0;
    while(val>=20){
        val=val-20;
        cont++;
    }
    printf("%d nota(s) de R$ 20,00\n",cont);
    cont=0;
    while(val>=10){
        val=val-10;
        cont++;
    }
    printf("%d nota(s) de R$ 10,00\n",cont);
    cont=0;
    while(val>=5){
        val=val-5;
        cont++;
    }
    printf("%d nota(s) de R$ 5,00\n",cont);
    cont=0;
    while(val>=2){
        val=val-2;
        cont++;
    }
    printf("%d nota(s) de R$ 2,00\n",cont);
    cont=0;
    while(val>=1){
        val=val-1;
        cont++;
    }
    printf("%d nota(s) de R$ 1,00\n",cont);
    return 0;
}
