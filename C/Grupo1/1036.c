#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==0){
        printf("Impossivel calcular\n");
        return 0;
    }
    if( (b*b-(4*a*c))<0){
        printf("Impossivel calcular\n");
        return 0;
    }
    float x1 = (-b+sqrt(b*b-(4*a*c)))/(a+a);
    float x2 = (-b-sqrt(b*b-(4*a*c)))/(a+a);
    printf("R1 = %.5f\nR2 = %.5f\n",x1,x2);
    return 0;

}
