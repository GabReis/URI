#include <stdio.h>
int main(){
    float a;
    int b;
    do{
        scanf("%f%d",&a,&b);
    }while(a<0||a>5);
    if(a==1)a=4;
    else if(a==2)a=4.5;
    else if(a==3)a=5;
    else if(a==4)a=2;
    else a=1.5;
    a=a*b;
    printf("Total: R$ %.2f\n",a);
    return 0;
}
