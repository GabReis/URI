#include <stdio.h>
int main(){
    int cont=0;
    float val;
    do{
        scanf("%f",&val);
    }while(val>1000000||val<0);
    printf("NOTAS:\n");
    while(val>=100){
        val=val-100;
        cont++;
    }
    printf("%d nota(s) de R$ 100.00\n",cont);
    cont=0;
    while(val>=50){
        val=val-50;
        cont++;
    }
    printf("%d nota(s) de R$ 50.00\n",cont);
    cont=0;
    while(val>=20){
        val=val-20;
        cont++;
    }
    printf("%d nota(s) de R$ 20.00\n",cont);
    cont=0;
    while(val>=10){
        val=val-10;
        cont++;
    }
    printf("%d nota(s) de R$ 10.00\n",cont);
    cont=0;
    while(val>=5){
        val=val-5;
        cont++;
    }
    printf("%d nota(s) de R$ 5.00\n",cont);
    cont=0;
    while(val>=2){
        val=val-2;
        cont++;
    }
    printf("%d nota(s) de R$ 2.00\nMOEDAS:\n",cont);
    cont=0;
    while(val>=1){
        val=val-1;
        cont++;
    }
    printf("%d moeda(s) de R$ 1.00\n",cont);
    cont=0;
    while(val>=0.5){
            val=val-0.5;
            cont++;
    }

    printf("%d moeda(s) de R$ 0.50\n",cont);
    cont=0;
    while(val>=0.25){
            val=val-0.25;
            cont++;
    }
    printf("%d moeda(s) de R$ 0.25\n",cont);
    cont=0;
    while(val>=0.1){
            val=val-0.1;
            cont++;
    }
    printf("%d moeda(s) de R$ 0.10\n",cont);
    cont=0;
    while(val>=0.05){
            val=val-0.05;
            cont++;
    }
    printf("%d moeda(s) de R$ 0.05\n",cont);
    cont=0;

    while(val>=0.009){
            val=val-0.01;
            cont++;
    }
    printf("%d moeda(s) de R$ 0.01\n",cont);
    return 0;
}
