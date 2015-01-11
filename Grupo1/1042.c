#include <stdio.h>
int main(){
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if(a>=b+c || b>= a+c || c>=a+b){
        float s = ((a+b)*c)/2;
        printf("Area = %.1f\n",s);
        return 0;
    }
    printf("Perimetro = %.1f\n",a+b+c);
    return 0;
}
