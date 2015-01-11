#include <stdio.h>
int main(){
    float a,b,c,media;
    do{
        scanf("%f",&a);
        scanf("%f",&b);
        scanf("%f",&c);
    }while(a<0||a>10||b<0||b>10||c<0||c>10);
    media = (2*a+3*b+5*c)/10;
    printf("MEDIA = %.1f\n",media);
    return 0;
}
