#include <stdio.h>
int main(){
    float a,b,media;
    do{
        scanf("%f",&a);
        scanf("%f",&b);
    }while(a<0||a>10||b<0||b>10);
    media = (3.5*a+7.5*b)/11;
    printf("MEDIA = %.5f\n",media);
    return 0;
}
