#include <stdio.h>
int main(){
    int n,contm=0,conth=0;
    scanf("%d",&n);
    while(n>=3600){
        n=n-3600;
        conth++;
    }
    while(n>=60){
        n=n-60;
        contm++;
    }
    printf("%d:%d:%d\n",conth,contm,n);
    return 0;
}
