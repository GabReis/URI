#include <stdio.h>
int main(){
    char nome[10];
    float a,b,c;
    gets(nome);
    scanf("%f",&a);
    scanf("%f",&b);
    c=a+(b*0.15);
    printf("TOTAL = R$ %.2f\n",c);
    return 0;
}
