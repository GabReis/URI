#include <stdio.h>
int main(){
    int n,conta=0,contm=0;
    scanf("%d",&n);
    while(n>=365){
        n=n-365;
        conta++;
    }
    while(n>=30){
        n=n-30;
        contm++;
    }
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",conta,contm,n);
    return 0;
}
